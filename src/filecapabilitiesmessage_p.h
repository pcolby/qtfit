// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the FileCapabilitiesMessagePrivate class.
 */
#ifndef QTFIT_FILECAPABILITIESMESSAGE_P_H
#define QTFIT_FILECAPABILITIESMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class FileCapabilitiesMessage;

class FileCapabilitiesMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The FileCapabilitiesMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The FileCapabilitiesMessage FIT message's type field.
     */
    File type;

    /*!
     * The FileCapabilitiesMessage FIT message's flags field.
     */
    FileFlags flags;

    /*!
     * The FileCapabilitiesMessage FIT message's directory field.
     */
    QString directory;

    /*!
     * The FileCapabilitiesMessage FIT message's maxCount field.
     */
    quint16 maxCount;

    /*!
     * The FileCapabilitiesMessage FIT message's maxSize field.
     */
    quint32 maxSize;

    FileCapabilitiesMessagePrivate() = delete;
    explicit FileCapabilitiesMessagePrivate(FileCapabilitiesMessage * const q);
    virtual ~FileCapabilitiesMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(FileCapabilitiesMessage)
    Q_DISABLE_COPY(FileCapabilitiesMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILECAPABILITIESMESSAGE_P_H
