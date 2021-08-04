# Configure the QDoc config file.
string(REPLACE ";" " " QDOC_INCLUDE_PATHS "${Qt${QT_VERSION_MAJOR}Core_INCLUDE_DIRS}")
find_file(
  _qdoc_global
  NAMES global/qt-html-templates-online.qdocconf
  HINTS ${QT${QT_VERSION_MAJOR}_INSTALL_PREFIX}
  PATHS /usr/share/qt${QT_VERSION_MAJOR}
  PATH_SUFFIXES doc)
find_file(
  _qtcore_index
  NAMES qtcore/qtcore.index
  HINTS ${QT${QT_VERSION_MAJOR}_INSTALL_PREFIX} ${QT${QT_VERSION_MAJOR}_INSTALL_PREFIX}/../../Docs/Qt-${QT_VERSION}
  PATHS /usr/share/qt${QT_VERSION_MAJOR}
  PATH_SUFFIXES doc)
message(VERBOSE "_qdoc_global: ${_qdoc_global}")
message(VERBOSE "_qtcore_index: ${_qtcore_index}")
if (_qdoc_global)
  get_filename_component(QDOC_GLOBAL_DIR ${_qdoc_global} DIRECTORY)
  message("-- Found qdoc configs ${QDOC_GLOBAL_DIR}")
endif()
if (_qtcore_index)
  get_filename_component(QDOC_INDEX_DIR ${_qtcore_index} DIRECTORY)
  get_filename_component(QDOC_INDEX_DIR ${QDOC_INDEX_DIR} DIRECTORY)
  message("-- Found qdoc indexes ${QDOC_INDEX_DIR}")
endif()
configure_file(config.qdocconf.in config.qdocconf)

# Add the `doc` build target.
find_program(QDOC qdoc)
if (QDOC)
  message("-- Found qdoc ${QDOC}")
  add_custom_target(
    doc
    COMMAND ${QDOC} --outputdir html config.qdocconf)
  add_custom_target(
    doc-internal
    COMMAND ${QDOC} --outputdir internal --showinternal config.qdocconf)
endif()
