# Download
RED='\033[1;31m'
NC='\033[0m' # No Color
filename=$($2 -E echo $3 | sed 's#.*/##g')
if command -v wget; then
  wget $3 -O $1/${filename}
elif command -v curl; then
  curl -O $3
  #mv ${file} $2/
else
  $2 -E echo "${RED}ERROR: No wget, no curl?  What kind of OS are you running anyway?${NC}"
  exit 1
fi
# Check the MD5 sum
md5=$($2 -E md5sum $1/${filename} | sed 's#\s.*##g')
if [ ${md5} != $4 ]; then
  $2 -E echo "${RED}ERROR: MD5 sum of downloaded file ${filename} does not match"
  $2 -E echo "Expected: $4"
  $2 -E echo "Found:    ${md5}${NC}"
  exit 1
fi
# Do the extraction
cd $5
$2 -E tar -xf $1/${filename}
# Get rid of any internal 'container folder' from tarball
if [ $(ls -1 | wc -l) = "1" ]; then
  dirname=$(ls)
  if cd ${dirname}; then
    mv * ../
    cd ../
    $2 -E remove_directory ${dirname}
  fi
fi