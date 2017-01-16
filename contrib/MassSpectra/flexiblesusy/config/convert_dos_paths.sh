#!/bin/sh

# This script converts relative paths in the MS-DOS format
# to those in the UNIX format
#
# Examples:
#
#   config/convert_dos_paths.sh models/MSSM/two_scale_susy.mk

for makefile in "$@"; do
    grep '\\[^[:space:]]' "$makefile" > /dev/null &&
    { sed -i -e 's,\\\([^[:space:]]\),/\1,g' "$makefile" || exit; }
done

exit 0
