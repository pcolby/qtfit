// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FileCapabilitiesMessage class.
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
