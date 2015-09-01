#!/bin/sh

# directory of this script
BASEDIR=$(dirname $0)

# absolute path to this script
ABSBASEDIR=$(cd $BASEDIR; pwd)

enable_compile_nmssmtools=no
nmssmtools_dir=""

usage() {
cat <<EOF
Usage: ./`basename $0` [options]
Options:
  --compile|-c       compile NMSSMTools
  --nmssmtools-dir=  Path to NMSSMTools
  --help|-h          Print this message and exit
EOF
}

check_nmssmtools() {
    if test "x${nmssmtools_dir}" = "x"; then
        echo "Error: No NMSSMTools directory specified!"
        echo "  Please run with --nmssmtools-dir=/path/to/NMSSMTools"
        exit 1
    fi
    if ! test -d "${nmssmtools_dir}"; then
        echo "Error: Cannot find NMSSMTools directory \"${nmssmtools_dir}\""
        exit 1
    fi
    if ! test -r "${nmssmtools_dir}/main/Makefile"; then
        echo "Error: ${nmssmtools_dir}/main/Makefile does not exist."
        exit 1
    fi
    if ! test -r "${nmssmtools_dir}/main/nmspec.f"; then
        echo "Error: ${nmssmtools_dir}/main/nmspec.f does not exist."
        exit 1
    fi
}

create_run_script() {
    printf "Creating NMSSMTools run script ..."

    sed -e "s|@NMSSMTOOLS_PATH@|$nmssmtools_dir|" \
        < ${BASEDIR}/softsusy_nmssmtools.x.in > ${BASEDIR}/softsusy_nmssmtools.x

    if test "x$?" = "x0"; then
        echo " done"
    else
        echo " Error: could non create softsusy_nmssmtools.x"
        exit 1
    fi

    chmod +x ${BASEDIR}/softsusy_nmssmtools.x
}

copy_file() {
    if test $# -ne 2 ; then
        echo "Internal error: copy_file not called with two arguments"
    fi
    if test -r "$2"; then
        printf "Backup file $2 to $2~ ..."
        if cp "$2" "$2~"; then
            echo " done"
        else
            echo " failed"
            exit 1
        fi
    fi
    printf "Copying $1 to $2 ..."
    if cp "$1" "$2"; then
        echo " done"
    else
        echo " failed"
        exit 1
    fi
}

copy_files() {
    copy_file ${BASEDIR}/src/nmh_slhainp.f ${nmssmtools_dir}/main/nmh_slhainp.f
    copy_file ${BASEDIR}/Makefile.nmssmtools ${nmssmtools_dir}/main/Makefile
}

compile_nmssmtools() {
    printf "Compiling NMSSMTools ..."

    $(cd ${nmssmtools_dir} && make init > ${ABSBASEDIR}/make.nmssmtools 2>&1 && make >> ${ABSBASEDIR}/make.nmssmtools 2>&1)

    if test "x$?" = "x0"; then
        echo " done"
    else
        echo " error"
        exit 1
    fi
}

if test $# -gt 0 ; then
    while test ! "x$1" = "x" ; do
        case "$1" in
            -*=*) optarg=`echo "$1" | sed 's/[-_a-zA-Z0-9]*=//'` ;;
            *) optarg= ;;
        esac

        case "$1" in
            --compile|-c)            enable_compile_nmssmtools=yes ;;
            --nmssmtools-dir=*)      nmssmtools_dir="$optarg" ;;
            --help|-h)               usage; exit 0 ;;
            *)  echo "Invalid option '$1'. Try $0 --help" ; exit 1 ;;
        esac
        shift
    done
fi

check_nmssmtools
copy_files
if test "x${enable_compile_nmssmtools}" = "xyes"; then
    compile_nmssmtools
fi
create_run_script

echo ""
echo "====================="
echo "Finished successfully"
echo "====================="

if ! test "x${enable_compile_nmssmtools}" = "xyes"; then
    echo ""
    echo "Next steps: recompile NMSSMTools"
    echo "  $ cd ${nmssmtools_dir}"
    echo "  $ make init"
    echo "  $ make"
    echo ""
    echo "Afterwards you can call softsusy_nmssmtools.x to calculate decays:"
    echo "  $ ./softsusy_nmssmtools.x leshouches < slha-input-file"
else
    echo ""
    echo "Now you can call softsusy_nmssmtools.x to calculate decays:"
    echo "  $ ./softsusy_nmssmtools.x leshouches < slha-input-file"
fi
