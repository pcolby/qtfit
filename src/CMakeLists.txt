cmake_minimum_required(VERSION 3.0)

add_library(QtFit SHARED
  fitstreamreader.cpp
  fitstreamreader.h
  fitstreamreader_p.h
  QtFit_global.h
  types.h
)

target_link_libraries(QtFit PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(QtFit PRIVATE QTFIT_LIBRARY)
