# SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
# SPDX-License-Identifier: LGPL-3.0-or-later

find_package(Doxygen)
if (DOXYGEN_FOUND)
  unset(DOX_ENABLED_SECTIONS)
  set(DOX_HTML_OUTPUT_DIR public)
  set(DOX_EXCLUDE_PATTERNS "*_p.h")
  set(DOX_EXCLUDE_SYMBOLS "*Private")
  set(DOX_INCLUDE_INTERNAL NO)
  set(DOX_PROJECT_BRIEF ${PROJECT_DESCRIPTION})
  configure_file(doxyfile.in public.doxy)
  add_custom_target(doc COMMAND ${DOXYGEN_EXECUTABLE} public.doxy)

  set(DOX_ENABLED_SECTIONS internal)
  set(DOX_HTML_OUTPUT_DIR internal)
  unset(DOX_EXCLUDE_PATTERNS)
  unset(DOX_EXCLUDE_SYMBOLS)
  set(DOX_INCLUDE_INTERNAL YES)
  set(DOX_PROJECT_BRIEF "Internal library development documentation")
  configure_file(doxyfile.in internal.doxy)
  add_custom_target(doc-internal COMMAND ${DOXYGEN_EXECUTABLE} internal.doxy)
endif()
