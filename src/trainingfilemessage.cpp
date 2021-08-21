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
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "training_file.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    case 0: // See Profile.xlsx::Messages:training_file.type
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.type has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "training_file.type size is" << data.size() << "but should be" << 1;
            return false;
        }
        type = static_cast<File>(data.at(0));
        break;
    case 1: // See Profile.xlsx::Messages:training_file.manufacturer
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.manufacturer has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "training_file.manufacturer size is" << data.size() << "but should be" << 2;
            return false;
        }
        manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<Manufacturer>(data) : qFromLittleEndian<Manufacturer>(data));
        break;
    case 2: // See Profile.xlsx::Messages:training_file.product
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.product has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "training_file.product size is" << data.size() << "but should be" << 2;
            return false;
        }
        product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 3: // See Profile.xlsx::Messages:training_file.serialNumber
        if (baseType != FitBaseType::Uint32z) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.serialNumber has base type" << static_cast<int>(baseType) << "but should be Uint32z";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "training_file.serialNumber size is" << data.size() << "but should be" << 4;
            return false;
        }
        serialNumber = static_cast<quint32z>(bigEndian ? qFromBigEndian<quint32z>(data) : qFromLittleEndian<quint32z>(data));
        break;
    case 4: // See Profile.xlsx::Messages:training_file.timeCreated
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "training_file.timeCreated has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "training_file.timeCreated size is" << data.size() << "but should be" << 4;
            return false;
        }
        timeCreated = static_cast<DateTime>(bigEndian ? qFromBigEndian<DateTime>(data) : qFromLittleEndian<DateTime>(data));
        break;
    default:
        qWarning() << "unknown training_file message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
