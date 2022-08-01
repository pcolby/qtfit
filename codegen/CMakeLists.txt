# SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

# \todo Use add_compile_definitions if we ever have a compelling reason to require CMake 3.12+
add_definitions(-DCODEGEN_DEFAULT_OUTPUT_DIR="${CMAKE_SOURCE_DIR}")

add_executable(
  codegen
  src/generator.cpp
  src/generator.h
  src/main.cpp
  qrc/resources.qrc
)

target_link_libraries(
  codegen
  PRIVATE Qt${QT_VERSION_MAJOR}::Core
  PRIVATE Grantlee5::Templates)
