/*
    Copyright 2021 Paul Colby

    This file is part of QtFit.

    QtFit is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtFit is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtFit.  If not, see <http://www.gnu.org/licenses/>.
*/

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
