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

#ifndef QTFIT_FILECAPABILITIESMESSAGE_H
#define QTFIT_FILECAPABILITIESMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FileCapabilitiesMessagePrivate;

class QTFIT_EXPORT FileCapabilitiesMessage : public AbstractDataMessage {

public:
    FileCapabilitiesMessage();
    ~FileCapabilitiesMessage();

    MessageIndex messageIndex() const;
    File type() const;
    FileFlags flags() const;
    QString directory() const;
    quint16 maxCount() const;
    quint32 maxSize() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setType(const File type);
    void setFlags(const FileFlags flags);
    void setDirectory(const QString directory);
    void setMaxCount(const quint16 maxCount);
    void setMaxSize(const quint32 maxSize);

protected:
    /// \cond internal
    explicit FileCapabilitiesMessage(FileCapabilitiesMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FileCapabilitiesMessage)
  //Q_DISABLE_COPY(FileCapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILECAPABILITIESMESSAGE_H
