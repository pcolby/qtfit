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
