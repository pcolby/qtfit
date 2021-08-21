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

#include "slavedevicemessage.h"
#include "slavedevicemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

SlaveDeviceMessage::SlaveDeviceMessage() : FitDataMessage(new SlaveDeviceMessagePrivate(this))
{

}

Manufacturer SlaveDeviceMessage::manufacturer() const
{
    Q_D(const SlaveDeviceMessage);
    return d->manufacturer;
}

quint16 SlaveDeviceMessage::product() const
{
    Q_D(const SlaveDeviceMessage);
    return d->product;
}

void SlaveDeviceMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(SlaveDeviceMessage);
    d->manufacturer = manufacturer;
}
void SlaveDeviceMessage::setProduct(const quint16 product)
{
    Q_D(SlaveDeviceMessage);
    d->product = product;
}

SlaveDeviceMessagePrivate::SlaveDeviceMessagePrivate(SlaveDeviceMessage * const q)
  : FitDataMessagePrivate(q)
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
{
    globalMessageNumber = MesgNum::SlaveDevice;
}

SlaveDeviceMessagePrivate::~SlaveDeviceMessagePrivate()
{

}

bool SlaveDeviceMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:slave_device.manufacturer
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "slave_device.manufacturer has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "slave_device.manufacturer size is" << data.size() << "but should be" << 2;
            return false;
        }
        manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<Manufacturer>(data) : qFromLittleEndian<Manufacturer>(data));
        break;
    case 1: // See Profile.xlsx::Messages:slave_device.product
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "slave_device.product has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "slave_device.product size is" << data.size() << "but should be" << 2;
            return false;
        }
        product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown slave_device message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
