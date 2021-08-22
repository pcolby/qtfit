cmake_minimum_required(VERSION 3.0)

add_library(QtFit SHARED
  abstractdatamessage.cpp
  abstractdatamessage.h
  abstractdatamessage_p.h
  fileidmessage.cpp
  fileidmessage.h
  fileidmessage_p.h
  fitdatamessages.cpp
  fitstreamreader.cpp
  fitstreamreader.h
  fitstreamreader_p.h
  QtFit_global.h
  types.cpp
  types.h
  types_p.h
)

include(fitdatamessages.cmake)

target_link_libraries(QtFit PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(QtFit PRIVATE QTFIT_LIBRARY)
