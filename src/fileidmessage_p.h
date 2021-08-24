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

#ifndef QTFIT_FILEIDMESSAGE_P_H
#define QTFIT_FILEIDMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class FileIdMessage;

class FileIdMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The FileIdMessage FIT message's type field.
     */
    File type;

    /*!
     * The FileIdMessage FIT message's manufacturer field.
     */
    Manufacturer manufacturer;

    /*!
     * The FileIdMessage FIT message's product field.
     */
    quint16 product;

    /*!
     * The FileIdMessage FIT message's serialNumber field.
     */
    quint32z serialNumber;

    /*!
     * The FileIdMessage FIT message's timeCreated field.
     *
     * Only set for files that are can be created/erased.
     */
    DateTime timeCreated;

    /*!
     * The FileIdMessage FIT message's number field.
     *
     * Only set for files that are not created/erased.
     */
    quint16 number;

    /*!
     * The FileIdMessage FIT message's productName field.
     *
     * Optional free form string to indicate the devices name or model
     */
    QString productName;

    FileIdMessagePrivate() = delete;
    explicit FileIdMessagePrivate(FileIdMessage * const q);
    virtual ~FileIdMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(FileIdMessage)
    Q_DISABLE_COPY(FileIdMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FILEIDMESSAGE_P_H
