cmake_minimum_required(VERSION 3.0)

add_library(QtFit SHARED
  fileidmessage.cpp
  fileidmessage.h
  fileidmessage_p.h
  fitdatamessage.cpp
  fitdatamessage.h
  fitdatamessage_p.h
  fitstreamreader.cpp
  fitstreamreader.h
  fitstreamreader_p.h
  QtFit_global.h
  types.h
  types_p.h
)

target_link_libraries(QtFit PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(QtFit PRIVATE QTFIT_LIBRARY)
