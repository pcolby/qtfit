// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the FileIdMessage, and FileIdMessagePrivate classes.
 */

#include <qtfit/fileidmessage.h>
#include "fileidmessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class FileIdMessage
 *
 * The FileIdMessage class represents a FIT FileIdMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a FileIdMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
FileIdMessage::FileIdMessage() : AbstractDataMessage(new FileIdMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a FileIdMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
FileIdMessage::FileIdMessage(FileIdMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the FileIdMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
File FileIdMessage::type() const
{
    Q_D(const FileIdMessage);
    return d->type;
}

/*!
 * Returns the FileIdMessage data message's \c manufacturer field's current value.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer FileIdMessage::manufacturer() const
{
    Q_D(const FileIdMessage);
    return d->manufacturer;
}

/*!
 * Returns the FileIdMessage data message's \c product field's current value.
 *
 * \return the \c product field value.
 */
quint16 FileIdMessage::product() const
{
    Q_D(const FileIdMessage);
    return d->product;
}

/*!
 * Returns the FileIdMessage data message's \c serialNumber field's current value.
 *
 * \return the \c serialNumber field value.
 */
quint32z FileIdMessage::serialNumber() const
{
    Q_D(const FileIdMessage);
    return d->serialNumber;
}

/*!
 * Returns the FileIdMessage data message's \c timeCreated field's current value.
 *
 * Only set for files that are can be created/erased.
 *
 * \return the \c timeCreated field value.
 */
DateTime FileIdMessage::timeCreated() const
{
    Q_D(const FileIdMessage);
    return d->timeCreated;
}

/*!
 * Returns the FileIdMessage data message's \c number field's current value.
 *
 * Only set for files that are not created/erased.
 *
 * \return the \c number field value.
 */
quint16 FileIdMessage::number() const
{
    Q_D(const FileIdMessage);
    return d->number;
}

/*!
 * Returns the FileIdMessage data message's \c productName field's current value.
 *
 * Optional free form string to indicate the devices name or model
 *
 * \return the \c productName field value.
 */
QString FileIdMessage::productName() const
{
    Q_D(const FileIdMessage);
    return d->productName;
}

/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void FileIdMessage::setType(const File type)
{
    Q_D(FileIdMessage);
    d->type = type;
}
/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void FileIdMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(FileIdMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c product field to \a product.
 *
 * \param product The field value to set.
 */
void FileIdMessage::setProduct(const quint16 product)
{
    Q_D(FileIdMessage);
    d->product = product;
}
/*!
 * Sets the \c serialNumber field to \a serialNumber.
 *
 * \param serialNumber The field value to set.
 */
void FileIdMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(FileIdMessage);
    d->serialNumber = serialNumber;
}
/*!
 * Sets the \c timeCreated field to \a timeCreated.
 *
 * \param timeCreated The field value to set.
 */
void FileIdMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(FileIdMessage);
    d->timeCreated = timeCreated;
}
/*!
 * Sets the \c number field to \a number.
 *
 * \param number The field value to set.
 */
void FileIdMessage::setNumber(const quint16 number)
{
    Q_D(FileIdMessage);
    d->number = number;
}
/*!
 * Sets the \c productName field to \a productName.
 *
 * \param productName The field value to set.
 */
void FileIdMessage::setProductName(const QString productName)
{
    Q_D(FileIdMessage);
    d->productName = productName;
}

/// \cond internal

/*!
 * \internal
 *
 * \class FileIdMessagePrivate
 *
 * The FileIdMessagePrivate class provides private implementation for the FileIdMessage.
 *
 * \sa FileIdMessage
 */

/*!
 * \internal
 *
 * Constructs a FileIdMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
FileIdMessagePrivate::FileIdMessagePrivate(FileIdMessage * const q)
  : AbstractDataMessagePrivate(q)
  , type(static_cast<File>(-1))
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
  , number(0xFFFF)
{
    globalMessageNumber = MesgNum::FileId;
}

/*!
 * \internal
 *
 * Destroys the FileIdMessagePrivate object.
 */
FileIdMessagePrivate::~FileIdMessagePrivate()
{

}

bool FileIdMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:file_id.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "file_id.type")) return false;
        this->type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:file_id.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:file_id.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:file_id.serialNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "file_id.serialNumber")) return false;
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:file_id.timeCreated
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "file_id.timeCreated")) return false;
        this->timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:file_id.number
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "file_id.number")) return false;
        this->number = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:file_id.productName
        if (!verify(data, baseType, 1, FitBaseType::String, "file_id.productName")) return false;
        this->productName = QString::fromUtf8(data);
        break;
    default:
        qWarning() << "ignoring unknown file_id message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
