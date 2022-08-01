# SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

cmake_minimum_required(VERSION 3.0)

add_library(QtFit SHARED
  ${CMAKE_SOURCE_DIR}/include/qtfit/abstractdatamessage.h
  ${CMAKE_SOURCE_DIR}/include/qtfit/fileidmessage.h
  ${CMAKE_SOURCE_DIR}/include/qtfit/fitstreamreader.h
  ${CMAKE_SOURCE_DIR}/include/qtfit/QtFit_global.h
  ${CMAKE_SOURCE_DIR}/include/qtfit/types.h
  abstractdatamessage.cpp
  abstractdatamessage_p.h
  fileidmessage.cpp
  fileidmessage_p.h
  fitdatamessages.cpp
  fitstreamreader.cpp
  fitstreamreader_p.h
  types.cpp
  types_p.h
)

include(fitdatamessages.cmake)

target_include_directories(QtFit PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(QtFit PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(QtFit PRIVATE QTFIT_LIBRARY)
