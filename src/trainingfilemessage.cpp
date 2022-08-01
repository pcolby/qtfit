// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the TrainingFileMessage, and TrainingFileMessagePrivate classes.
 */

#include <qtfit/trainingfilemessage.h>
#include "trainingfilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class TrainingFileMessage
 *
 * The TrainingFileMessage class represents a FIT TrainingFileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a TrainingFileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
TrainingFileMessage::TrainingFileMessage() : AbstractDataMessage(new TrainingFileMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a TrainingFileMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
TrainingFileMessage::TrainingFileMessage(TrainingFileMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the TrainingFileMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime TrainingFileMessage::timestamp() const
{
    Q_D(const TrainingFileMessage);
    return d->timestamp;
}

/*!
 * Returns the TrainingFileMessage data message's \c type field's current value.
 *
 * \return the \c type field value.
 */
File TrainingFileMessage::type() const
{
    Q_D(const TrainingFileMessage);
    return d->type;
}

/*!
 * Returns the TrainingFileMessage data message's \c manufacturer field's current value.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer TrainingFileMessage::manufacturer() const
{
    Q_D(const TrainingFileMessage);
    return d->manufacturer;
}

/*!
 * Returns the TrainingFileMessage data message's \c product field's current value.
 *
 * \return the \c product field value.
 */
quint16 TrainingFileMessage::product() const
{
    Q_D(const TrainingFileMessage);
    return d->product;
}

/*!
 * Returns the TrainingFileMessage data message's \c serialNumber field's current value.
 *
 * \return the \c serialNumber field value.
 */
quint32z TrainingFileMessage::serialNumber() const
{
    Q_D(const TrainingFileMessage);
    return d->serialNumber;
}

/*!
 * Returns the TrainingFileMessage data message's \c timeCreated field's current value.
 *
 * \return the \c timeCreated field value.
 */
DateTime TrainingFileMessage::timeCreated() const
{
    Q_D(const TrainingFileMessage);
    return d->timeCreated;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void TrainingFileMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TrainingFileMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c type field to \a type.
 *
 * \param type The field value to set.
 */
void TrainingFileMessage::setType(const File type)
{
    Q_D(TrainingFileMessage);
    d->type = type;
}
/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void TrainingFileMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(TrainingFileMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c product field to \a product.
 *
 * \param product The field value to set.
 */
void TrainingFileMessage::setProduct(const quint16 product)
{
    Q_D(TrainingFileMessage);
    d->product = product;
}
/*!
 * Sets the \c serialNumber field to \a serialNumber.
 *
 * \param serialNumber The field value to set.
 */
void TrainingFileMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(TrainingFileMessage);
    d->serialNumber = serialNumber;
}
/*!
 * Sets the \c timeCreated field to \a timeCreated.
 *
 * \param timeCreated The field value to set.
 */
void TrainingFileMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(TrainingFileMessage);
    d->timeCreated = timeCreated;
}

/// \cond internal

/*!
 * \internal
 *
 * \class TrainingFileMessagePrivate
 *
 * The TrainingFileMessagePrivate class provides private implementation for the TrainingFileMessage.
 *
 * \sa TrainingFileMessage
 */

/*!
 * \internal
 *
 * Constructs a TrainingFileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
TrainingFileMessagePrivate::TrainingFileMessagePrivate(TrainingFileMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , type(static_cast<File>(-1))
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
{
    globalMessageNumber = MesgNum::TrainingFile;
}

/*!
 * \internal
 *
 * Destroys the TrainingFileMessagePrivate object.
 */
TrainingFileMessagePrivate::~TrainingFileMessagePrivate()
{

}

bool TrainingFileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:training_file.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "training_file.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:training_file.type
        if (!verify(data, baseType, 1, FitBaseType::Enum, "training_file.type")) return false;
        this->type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:training_file.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "training_file.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:training_file.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "training_file.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:training_file.serialNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32z, "training_file.serialNumber")) return false;
        this->serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:training_file.timeCreated
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "training_file.timeCreated")) return false;
        this->timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown training_file message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
