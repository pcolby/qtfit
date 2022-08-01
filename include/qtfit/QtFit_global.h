// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * Global QtFit library macros.
 */

#ifndef QTFIT_GLOBAL_H
#define QTFIT_GLOBAL_H

#include <QtGlobal>

/// \cond internal

/*!
 * QtFit library export/import macro.
 */
#if defined(QTFIT_SHARED) || !defined(QTFIT_STATIC)
#  ifdef QTFIT_STATIC
#    error "Both QTFIT_SHARED and QTFIT_STATIC defined."
#  endif
#  if defined(QTFIT_LIBRARY)
#    define QTFIT_EXPORT Q_DECL_EXPORT
#  else
#    define QTFIT_EXPORT Q_DECL_IMPORT
#  endif
#else
#    define QTFIT_EXPORT
#endif

/*!
 * Top-most namespace for all QtFit library symbols.
 *
 * \sa QTFIT_BEGIN_NAMESPACE
 * \sa QTFIT_END_NAMESPACE
 */
#ifndef QTFIT_NAMESPACE
#define QTFIT_NAMESPACE fit ///< \todo Consider moving this to a CMake option.
#endif

/*!
 * \def QTFIT_BEGIN_NAMESPACE
 *
 * Macro for starting the QtFit library's top-most namespace (if one is defined).
 *
 * \sa QTFIT_END_NAMESPACE
 * \sa QTFIT_NAMESPACE
 */

/*!
 * \def QTFIT_END_NAMESPACE
 *
 * Macro for ending the QtFit library's top-most namespace (if one is defined).
 *
 * \sa QTFIT_BEGIN_NAMESPACE
 * \sa QTFIT_NAMESPACE
 */

#ifdef QTFIT_NAMESPACE
  #define QTFIT_BEGIN_NAMESPACE namespace QTFIT_NAMESPACE {
  #define QTFIT_END_NAMESPACE }
#else
  #define QTFIT_BEGIN_NAMESPACE
  #define QTFIT_END_NAMESPACE
#endif

/// \endcond

#endif // QTFIT_GLOBAL_H
