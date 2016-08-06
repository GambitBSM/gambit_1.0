# GAMBIT: Global and Modular BSM Inference Tool
#************************************************
# \file
#
#  Custom CMake download script for GAMBIT.
#
#  This script serves 2 purposes:
#  1. Gets us around a bug in some versions of
#     cmake distributed in Debian derivatives,
#     which were linked to a version of libcurl
#     compiled without OpenSSL support (and hence
#     fail to download from https addresses).
#  2. Does the download with axel if possible,
#     which is faster than wget or curl because
#     if opens multiple connections to the file
#     server.
#
#************************************************
#
#  Authors (add name and date if you modify):
#
#  \author Pat Scott
#          (p.scott@imperial.ac.uk)
#  \date 2016 Jul
#
#************************************************

# Download
axel_worked=0
filename=$($2 -E echo $3 | sed 's#.*/##g')
$2 -E make_directory $1 >/dev/null
if command -v axel >/dev/null; then
  if $2 -E chdir $1 axel $3; then
    axel_worked=1
  else
    $2 -E echo "Axel failed! The link probably redirects to https. Falling back to wget/curl..." 
  fi
fi
if [ "${axel_worked}" = "0" ]; then
  if command -v wget >/dev/null; then
    wget $3 -O $1/${filename}
  elif command -v curl >/dev/null; then
    $2 -E chdir $1 curl -O $3
  else
    $2 -E cmake_echo_color --red --bold "ERROR: No axel, no wget, no curl?  What kind of OS are you running anyway?"
    exit 1
  fi
fi
# Check the MD5 sum
md5=$($2 -E md5sum $1/${filename} | sed 's#\s.*##g')
if [ "${md5}" != "$4" ]; then
  $2 -E cmake_echo_color --red --bold  "ERROR: MD5 sum of downloaded file $1/${filename} does not match"
  $2 -E cmake_echo_color --red --bold  "Expected: $4"
  $2 -E cmake_echo_color --red --bold  "Found:    ${md5}"
  exit 1
fi
# Do the extraction
cd $5
$2 -E tar -xf $1/${filename}
# Get rid of any internal 'container folder' from tarball, unless $6 has been set
if [ "retain container folder" != "$6" ]; then
  if [ $(ls -1 | wc -l) = "1" ]; then
    dirname=$(ls)
    if cd ${dirname}; then
      mv * ../
      cd ../
      $2 -E remove_directory ${dirname}
    fi
  fi
fi