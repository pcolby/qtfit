# QtFit

[![Build Status](https://github.com/pcolby/qtfit/actions/workflows/build.yaml/badge.svg)](https://github.com/pcolby/qtfit/actions/workflows/build.yaml)
[![Static Analysis](https://github.com/pcolby/qtfit/actions/workflows/static.yaml/badge.svg)](https://github.com/pcolby/qtfit/actions/workflows/build.yaml)
[![GitHub Release](https://img.shields.io/github/v/release/pcolby/qtfit?include_prereleases&label=Release)](https://github.com/pcolby/qtfit/releases/latest)
[![LGPLv3 License](https://img.shields.io/badge/License-LGPLv3-informational.svg)](https://www.gnu.org/licenses/lgpl-3.0.html)

## Building

~~~{.sh}
cmake -E make_directory <tmp-build-dir>
cmake -D CMAKE_BUILD_TYPE=Release -S <path-to-cloned-repo> -B <tmp-build-dir>
cmake --build <tmp-build-dir>
ctest --test-dir <tmp-build-dir> --verbose
~~~
