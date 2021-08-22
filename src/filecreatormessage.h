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
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

#ifndef QTFIT_FILECREATORMESSAGE_H
#define QTFIT_FILECREATORMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FileCreatorMessagePrivate;

class QTFIT_EXPORT FileCreatorMessage : public AbstractDataMessage {

public:
    FileCreatorMessage();
    ~FileCreatorMessage();

    quint16 softwareVersion() const;
    quint8 hardwareVersion() const;

    void setSoftwareVersion(const quint16 softwareVersion);
    void setHardwareVersion(const quint8 hardwareVersion);

protected:
    /// \cond internal
    explicit FileCreatorMessage(FileCreatorMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FileCreatorMessage)
  //Q_DISABLE_COPY(FileCreatorMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILECREATORMESSAGE_H
