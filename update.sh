#!/usr/bin/env bash

set -o errexit -o noclobber -o nounset -o pipefail

: "${BUILD_DIR:=$HOME/tmp/build/fit-cmake-gcc-6.1.1}"

rm -rf main/{cov,doc,int}
cp -a "$BUILD_DIR/doc/public" main/doc
cp -a "$BUILD_DIR/doc/internal" main/int
cp -a "$BUILD_DIR/coverage" main/cov
