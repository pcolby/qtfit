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

#include "trainingfilemessage.h"
#include "trainingfilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

TrainingFileMessage::TrainingFileMessage() : FitDataMessage(new TrainingFileMessagePrivate(this))
{

}

DateTime TrainingFileMessage::timestamp() const
{
    Q_D(const TrainingFileMessage);
    return d->timestamp;
}

File TrainingFileMessage::type() const
{
    Q_D(const TrainingFileMessage);
    return d->type;
}

Manufacturer TrainingFileMessage::manufacturer() const
{
    Q_D(const TrainingFileMessage);
    return d->manufacturer;
}

quint16 TrainingFileMessage::product() const
{
    Q_D(const TrainingFileMessage);
    return d->product;
}

quint32z TrainingFileMessage::serialNumber() const
{
    Q_D(const TrainingFileMessage);
    return d->serialNumber;
}

DateTime TrainingFileMessage::timeCreated() const
{
    Q_D(const TrainingFileMessage);
    return d->timeCreated;
}

void TrainingFileMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(TrainingFileMessage);
    d->timestamp = timestamp;
}
void TrainingFileMessage::setType(const File type)
{
    Q_D(TrainingFileMessage);
    d->type = type;
}
void TrainingFileMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(TrainingFileMessage);
    d->manufacturer = manufacturer;
}
void TrainingFileMessage::setProduct(const quint16 product)
{
    Q_D(TrainingFileMessage);
    d->product = product;
}
void TrainingFileMessage::setSerialNumber(const quint32z serialNumber)
{
    Q_D(TrainingFileMessage);
    d->serialNumber = serialNumber;
}
void TrainingFileMessage::setTimeCreated(const DateTime timeCreated)
{
    Q_D(TrainingFileMessage);
    d->timeCreated = timeCreated;
}

TrainingFileMessagePrivate::TrainingFileMessagePrivate(TrainingFileMessage * const q)
  : FitDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , type(static_cast<File>(-1))
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
  , serialNumber(0)
  , timeCreated(static_cast<DateTime>(-1))
{
    globalMessageNumber = MesgNum::TrainingFile;
}

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
        qWarning() << "unknown training_file message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
