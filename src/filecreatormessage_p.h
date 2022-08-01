// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FileCreatorMessagePrivate class.
 */
#ifndef QTFIT_FILECREATORMESSAGE_P_H
#define QTFIT_FILECREATORMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class FileCreatorMessage;

class FileCreatorMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The FileCreatorMessage FIT message's softwareVersion field.
     */
    quint16 softwareVersion;

    /*!
     * The FileCreatorMessage FIT message's hardwareVersion field.
     */
    quint8 hardwareVersion;

    FileCreatorMessagePrivate() = delete;
    explicit FileCreatorMessagePrivate(FileCreatorMessage * const q);
    virtual ~FileCreatorMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(FileCreatorMessage)
    Q_DISABLE_COPY(FileCreatorMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILECREATORMESSAGE_P_H
