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

#include "segmentidmessage.h"
#include "segmentidmessage_p.h"

QTFIT_BEGIN_NAMESPACE

SegmentIdMessage::SegmentIdMessage() : FitDataMessage(new SegmentIdMessagePrivate(this))
{

}

QString SegmentIdMessage::name() const
{
    Q_D(const SegmentIdMessage);
    return d->name;
}

QString SegmentIdMessage::uuid() const
{
    Q_D(const SegmentIdMessage);
    return d->uuid;
}

Sport SegmentIdMessage::sport() const
{
    Q_D(const SegmentIdMessage);
    return d->sport;
}

bool SegmentIdMessage::enabled() const
{
    Q_D(const SegmentIdMessage);
    return d->enabled;
}

quint32 SegmentIdMessage::userProfilePrimaryKey() const
{
    Q_D(const SegmentIdMessage);
    return d->userProfilePrimaryKey;
}

quint32 SegmentIdMessage::deviceId() const
{
    Q_D(const SegmentIdMessage);
    return d->deviceId;
}

quint8 SegmentIdMessage::defaultRaceLeader() const
{
    Q_D(const SegmentIdMessage);
    return d->defaultRaceLeader;
}

SegmentDeleteStatus SegmentIdMessage::deleteStatus() const
{
    Q_D(const SegmentIdMessage);
    return d->deleteStatus;
}

SegmentSelectionType SegmentIdMessage::selectionType() const
{
    Q_D(const SegmentIdMessage);
    return d->selectionType;
}

void SegmentIdMessage::setName(const QString name)
{
    Q_D(SegmentIdMessage);
    d->name = name;
}
void SegmentIdMessage::setUuid(const QString uuid)
{
    Q_D(SegmentIdMessage);
    d->uuid = uuid;
}
void SegmentIdMessage::setSport(const Sport sport)
{
    Q_D(SegmentIdMessage);
    d->sport = sport;
}
void SegmentIdMessage::setEnabled(const bool enabled)
{
    Q_D(SegmentIdMessage);
    d->enabled = enabled;
}
void SegmentIdMessage::setUserProfilePrimaryKey(const quint32 userProfilePrimaryKey)
{
    Q_D(SegmentIdMessage);
    d->userProfilePrimaryKey = userProfilePrimaryKey;
}
void SegmentIdMessage::setDeviceId(const quint32 deviceId)
{
    Q_D(SegmentIdMessage);
    d->deviceId = deviceId;
}
void SegmentIdMessage::setDefaultRaceLeader(const quint8 defaultRaceLeader)
{
    Q_D(SegmentIdMessage);
    d->defaultRaceLeader = defaultRaceLeader;
}
void SegmentIdMessage::setDeleteStatus(const SegmentDeleteStatus deleteStatus)
{
    Q_D(SegmentIdMessage);
    d->deleteStatus = deleteStatus;
}
void SegmentIdMessage::setSelectionType(const SegmentSelectionType selectionType)
{
    Q_D(SegmentIdMessage);
    d->selectionType = selectionType;
}

SegmentIdMessagePrivate::SegmentIdMessagePrivate(SegmentIdMessage * const q) : FitDataMessagePrivate(q)
{
    globalMessageNumber = MesgNum::SegmentId;
}

SegmentIdMessagePrivate::~SegmentIdMessagePrivate()
{

}

/// @todo Generate implementation.
bool SegmentIdMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

QTFIT_END_NAMESPACE
