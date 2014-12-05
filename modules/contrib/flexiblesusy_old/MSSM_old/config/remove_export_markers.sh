#!/bin/sh

# This script removes lines beween two markers from a file (or stdin).
# The markers are removed as well.

begin_marker="# *BEGIN: *NOT EXPORTED *#*"
end_marker="# *END: *NOT EXPORTED *#*"

if test $# -lt 1; then
    # read from stdin
    if [ ! -t 0 ]; then
        sed -e "/${begin_marker}/,/${end_marker}/d" < /dev/stdin
    fi
else
    # read from file
    input_file="$1"
    sed -e "/${begin_marker}/,/${end_marker}/d" ${input_file}
fi
