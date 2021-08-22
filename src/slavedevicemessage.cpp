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

/*!
 * \class SlaveDeviceMessage
 *
 * The SlaveDeviceMessage class represents a FIT SlaveDeviceMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid SlaveDeviceMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
SlaveDeviceMessage::SlaveDeviceMessage() : AbstractDataMessage(new SlaveDeviceMessagePrivate(this))
{

}

/*!
 * Returns the SlaveDeviceMessage data message's \c manufacturer field's current value.
 *
 * \return the \c manufacturer field value.
 */
Manufacturer SlaveDeviceMessage::manufacturer() const
{
    Q_D(const SlaveDeviceMessage);
    return d->manufacturer;
}

/*!
 * Returns the SlaveDeviceMessage data message's \c product field's current value.
 *
 * \return the \c product field value.
 */
quint16 SlaveDeviceMessage::product() const
{
    Q_D(const SlaveDeviceMessage);
    return d->product;
}

/*!
 * Sets the \c manufacturer field to \a manufacturer.
 *
 * \param manufacturer The field value to set.
 */
void SlaveDeviceMessage::setManufacturer(const Manufacturer manufacturer)
{
    Q_D(SlaveDeviceMessage);
    d->manufacturer = manufacturer;
}
/*!
 * Sets the \c product field to \a product.
 *
 * \param product The field value to set.
 */
void SlaveDeviceMessage::setProduct(const quint16 product)
{
    Q_D(SlaveDeviceMessage);
    d->product = product;
}

/*!
 * \internal
 *
 * \class SlaveDeviceMessagePrivate
 *
 * The SlaveDeviceMessagePrivate class provides private implementation for the SlaveDeviceMessage.
 *
 * \sa SlaveDeviceMessage
 */

/*!
 * \internal
 *
 * Constructs a SlaveDeviceMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
SlaveDeviceMessagePrivate::SlaveDeviceMessagePrivate(SlaveDeviceMessage * const q)
  : AbstractDataMessagePrivate(q)
  , manufacturer(static_cast<Manufacturer>(-1))
  , product(0xFFFF)
{
    globalMessageNumber = MesgNum::SlaveDevice;
}

/*!
 * \internal
 *
 * Destroys the SlaveDeviceMessagePrivate object.
 */
SlaveDeviceMessagePrivate::~SlaveDeviceMessagePrivate()
{

}

bool SlaveDeviceMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 0: // See Profile.xlsx::Messages:slave_device.manufacturer
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "slave_device.manufacturer")) return false;
        this->manufacturer = static_cast<Manufacturer>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:slave_device.product
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "slave_device.product")) return false;
        this->product = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    default:
        qWarning() << "unknown slave_device message field number" << fieldId;
        return AbstractDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
