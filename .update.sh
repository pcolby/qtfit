#!/usr/bin/env bash

set -o errexit -o noclobber -o nounset -o pipefail

: "${BUILD_DIR:=$HOME/tmp/build/fit-cmake-gcc-6.1.1}"

rm -rf {internal/,}main
cp -a "$BUILD_DIR/doc/public" main
cp -a "$BUILD_DIR/doc/internal" internal/main
