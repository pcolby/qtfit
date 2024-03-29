# SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

find_package(Qt${QT_VERSION_MAJOR}Test REQUIRED)

function(add_unit_test name)
  add_executable(test${name} ${ARGN})

  target_link_libraries(
    test${name}
    PRIVATE QtFit
    PRIVATE Qt${QT_VERSION_MAJOR}::Test)

if(${QT_VERSION} VERSION_LESS "5.12")
  add_test(NAME ${name} COMMAND test${name})
else() # Support for TAP format added to Qt Test in 5.12.
  add_test(NAME ${name} COMMAND test${name} -o ${name}.tap,tap -o -,txt)
endif()
  set_tests_properties(${name} PROPERTIES LABELS "auto;unit")
endfunction()

add_unit_test(
  FitStreamReader
  testfitstreamreader.cpp
  testfitstreamreader.h)
