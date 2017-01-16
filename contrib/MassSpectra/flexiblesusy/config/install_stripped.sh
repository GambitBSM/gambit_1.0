#!/bin/sh

# This script installs a file [$1] to destiation [$2].  Optional
# install arguments can be given in [$3].

if test $# -lt 2; then
    echo "Usage: ./`basename $0` source destination [install args]"
    exit 1
fi

# directory of this script
BASEDIR=$(dirname $0)

source="$1"
shift
dest="$1"
shift
args="$*"

if test ! -e "${source}"; then
    echo "Error: source does not exist: ${source}"
    exit 1
fi

stripped_source="${source}.stripped"

# strip source file
${BASEDIR}/remove_export_markers.sh "${source}" > "${stripped_source}"

if test -d "${dest}"; then
    dest="${dest}/`basename ${source}`"
fi

install ${args} "${stripped_source}" "${dest}"

rm -f "${stripped_source}"
