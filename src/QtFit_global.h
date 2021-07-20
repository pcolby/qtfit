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

#ifndef QTFIT_GLOBAL_H
#define QTFIT_GLOBAL_H

#include <QtCore/qglobal.h>

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

#endif // QTFIT_GLOBAL_H
