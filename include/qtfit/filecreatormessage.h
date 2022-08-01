// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FileCreatorMessage class.
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
