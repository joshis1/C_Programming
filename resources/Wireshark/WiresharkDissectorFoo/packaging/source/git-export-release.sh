#!/bin/bash
#
# Creates a release tarball directly from git

# Note that the tarball contents might not exactly match
# a particular git commit, particularly for untagged
# commits.
#
# An alternative approach would be to generate source tarballs
# using CPack. That would remove our dependency on git, but if
# Autotools is any indication it would require continuous
# maintenance.
#
# Copyright 2011 Balint Reczey <balint@balintreczey.hu>
#
# Wireshark - Network traffic analyzer
# By Gerald Combs <gerald@wireshark.org>
# Copyright 1998 Gerald Combs
#
# SPDX-License-Identifier: GPL-2.0-or-later

set -e

DESTDIR=.

while getopts "d:" OPTCHAR ; do
    case $OPTCHAR in
        d) DESTDIR=$OPTARG ;;
        *) printf "Unknown option %s\n" "$OPTCHAR" ;;
    esac
done
shift $(( OPTIND - 1 ))

# The remaining parameter, if set, is a package version such as 3.4.5
# or 3.4.5-67-gabcd4321
# By default the version from make-version.pl + CMake is used.
VERSION=3.0.1
if test -n "$1"; then
    VERSION="$1"
fi

STASH_POP=false
XZ_OPTS=

COMMIT="HEAD"
if ! git diff-index --quiet HEAD ; then
    git stash --keep-index
    COMMIT="stash@{0}"
    STASH_POP=true
fi

echo "Creating wireshark-$VERSION.tar.xz"

echo . | xz --threads=0 > /dev/null 2>&1 && XZ_OPTS=--threads=0

git archive --prefix="wireshark-${VERSION}/" ${COMMIT} | xz $XZ_OPTS > "${DESTDIR}/wireshark-${VERSION}.tar.xz"

if $STASH_POP ; then
    git stash pop
fi
