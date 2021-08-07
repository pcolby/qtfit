# QtFit

[![Build Status](https://github.com/pcolby/qtfit/actions/workflows/build.yaml/badge.svg)](https://github.com/pcolby/qtfit/actions/workflows/build.yaml)
[![Static Analysis](https://github.com/pcolby/qtfit/actions/workflows/static.yaml/badge.svg)](https://github.com/pcolby/qtfit/actions/workflows/static.yaml)
[![Coverage Status](https://img.shields.io/coveralls/github/pcolby/qtfit?label=Coverage)](https://coveralls.io/github/pcolby/qtfit)
[![GitHub Release](https://img.shields.io/github/v/release/pcolby/qtfit?include_prereleases&label=Release)](https://github.com/pcolby/qtfit/releases/latest)
[![LGPLv3 License](https://img.shields.io/badge/License-LGPLv3-informational.svg)](https://www.gnu.org/licenses/lgpl-3.0.html)

## Requirements

* Qt5 or Qt6

## Building from Source

~~~{.sh}
cmake -E make_directory <tmp-build-dir>
cmake -D CMAKE_BUILD_TYPE=Release -S <path-to-cloned-repo> -B <tmp-build-dir>
cmake --build <tmp-build-dir>
ctest --test-dir <tmp-build-dir> --verbose
~~~

### Test Coverage

Similar to above, but specify `ENABLE_COVERAGE=YES` for `cmake`, which will add dependencies on [gcov] and [LCOV].

~~~{.sh}
cmake -E make_directory <tmp-build-dir>
cmake -D CMAKE_BUILD_TYPE=Release -D ENABLE_COVERAGE=YES -S <path-to-cloned-repo> -B <tmp-build-dir>
cmake --build <tmp-build-dir>
ctest --test-dir <tmp-build-dir> --verbose
cmake --build <tmp-build-dir> --target coverage coverage-html
# ls <tmp-build-dir>/test/coverage.info # Coverage summary data.
# ls <tmp-build-dir>/test/coverage/ # HTML view.
~~~

The first target (`coverage`) uses `lcov` to generate `coverage.info` summary. And the second target (`coverage-html`)
used LCOV's `genhtml` to generate an HTML view of `coverage.info`.

Also available via [Coveralls](https://coveralls.io/github/pcolby/qtfit) (or [Codecov](https://app.codecov.io/gh/pcolby/qtfit)).

### Documentation

Configure the same as above, but build the `doc` and (optionally) `doc-internal` targets.

~~~{.sh}
cmake -E make_directory <tmp-build-dir>
cmake -S <path-to-cloned-repo> -B <tmp-build-dir>
cmake --build <tmp-build-dir> --target doc doc-internal
# ls <tmp-build-dir>/doc/public # Library end-user documentation
# ls <tmp-build-dir>/doc/internal # Internal library developer documentation
~~~

These are regularly published to Github Pages via Github Actions:

* [public end-user docs](https://pcolby.github.io/qtfit/main/doc/index.html)
* [internal dev docs](https://pcolby.github.io/qtfit/main/int/index.html)

[gcov]: https://gcc.gnu.org/onlinedocs/gcc/Gcov.html "gcov — a Test Coverage Program"
[LCOV]: http://ltp.sourceforge.net/coverage/lcov.php "LCOV — the LTP GCOV extension"
