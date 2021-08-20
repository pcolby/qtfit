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

#include "userprofilemessage.h"
#include "userprofilemessage_p.h"

QTFIT_BEGIN_NAMESPACE

UserProfileMessage::UserProfileMessage() : FitDataMessage(new UserProfileMessagePrivate(this))
{

}

MessageIndex UserProfileMessage::messageIndex() const
{
    Q_D(const UserProfileMessage);
    return d->messageIndex;
}

QString UserProfileMessage::friendlyName() const
{
    Q_D(const UserProfileMessage);
    return d->friendlyName;
}

Gender UserProfileMessage::gender() const
{
    Q_D(const UserProfileMessage);
    return d->gender;
}

quint8 UserProfileMessage::age() const
{
    Q_D(const UserProfileMessage);
    return d->age;
}

quint8 UserProfileMessage::height() const
{
    Q_D(const UserProfileMessage);
    return d->height;
}

quint16 UserProfileMessage::weight() const
{
    Q_D(const UserProfileMessage);
    return d->weight;
}

Language UserProfileMessage::language() const
{
    Q_D(const UserProfileMessage);
    return d->language;
}

DisplayMeasure UserProfileMessage::elevSetting() const
{
    Q_D(const UserProfileMessage);
    return d->elevSetting;
}

DisplayMeasure UserProfileMessage::weightSetting() const
{
    Q_D(const UserProfileMessage);
    return d->weightSetting;
}

quint8 UserProfileMessage::restingHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->restingHeartRate;
}

quint8 UserProfileMessage::defaultMaxRunningHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxRunningHeartRate;
}

quint8 UserProfileMessage::defaultMaxBikingHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxBikingHeartRate;
}

quint8 UserProfileMessage::defaultMaxHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxHeartRate;
}

DisplayHeart UserProfileMessage::hrSetting() const
{
    Q_D(const UserProfileMessage);
    return d->hrSetting;
}

DisplayMeasure UserProfileMessage::speedSetting() const
{
    Q_D(const UserProfileMessage);
    return d->speedSetting;
}

DisplayMeasure UserProfileMessage::distSetting() const
{
    Q_D(const UserProfileMessage);
    return d->distSetting;
}

DisplayPower UserProfileMessage::powerSetting() const
{
    Q_D(const UserProfileMessage);
    return d->powerSetting;
}

ActivityClass UserProfileMessage::activityClass() const
{
    Q_D(const UserProfileMessage);
    return d->activityClass;
}

DisplayPosition UserProfileMessage::positionSetting() const
{
    Q_D(const UserProfileMessage);
    return d->positionSetting;
}

DisplayMeasure UserProfileMessage::temperatureSetting() const
{
    Q_D(const UserProfileMessage);
    return d->temperatureSetting;
}

UserLocalId UserProfileMessage::localId() const
{
    Q_D(const UserProfileMessage);
    return d->localId;
}

quint8 UserProfileMessage::globalId() const
{
    Q_D(const UserProfileMessage);
    return d->globalId;
}

LocaltimeIntoDay UserProfileMessage::wakeTime() const
{
    Q_D(const UserProfileMessage);
    return d->wakeTime;
}

LocaltimeIntoDay UserProfileMessage::sleepTime() const
{
    Q_D(const UserProfileMessage);
    return d->sleepTime;
}

DisplayMeasure UserProfileMessage::heightSetting() const
{
    Q_D(const UserProfileMessage);
    return d->heightSetting;
}

quint16 UserProfileMessage::userRunningStepLength() const
{
    Q_D(const UserProfileMessage);
    return d->userRunningStepLength;
}

quint16 UserProfileMessage::userWalkingStepLength() const
{
    Q_D(const UserProfileMessage);
    return d->userWalkingStepLength;
}

DisplayMeasure UserProfileMessage::depthSetting() const
{
    Q_D(const UserProfileMessage);
    return d->depthSetting;
}

quint32 UserProfileMessage::diveCount() const
{
    Q_D(const UserProfileMessage);
    return d->diveCount;
}

void UserProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(UserProfileMessage);
    d->messageIndex = messageIndex;
}
void UserProfileMessage::setFriendlyName(const QString friendlyName)
{
    Q_D(UserProfileMessage);
    d->friendlyName = friendlyName;
}
void UserProfileMessage::setGender(const Gender gender)
{
    Q_D(UserProfileMessage);
    d->gender = gender;
}
void UserProfileMessage::setAge(const quint8 age)
{
    Q_D(UserProfileMessage);
    d->age = age;
}
void UserProfileMessage::setHeight(const quint8 height)
{
    Q_D(UserProfileMessage);
    d->height = height;
}
void UserProfileMessage::setWeight(const quint16 weight)
{
    Q_D(UserProfileMessage);
    d->weight = weight;
}
void UserProfileMessage::setLanguage(const Language language)
{
    Q_D(UserProfileMessage);
    d->language = language;
}
void UserProfileMessage::setElevSetting(const DisplayMeasure elevSetting)
{
    Q_D(UserProfileMessage);
    d->elevSetting = elevSetting;
}
void UserProfileMessage::setWeightSetting(const DisplayMeasure weightSetting)
{
    Q_D(UserProfileMessage);
    d->weightSetting = weightSetting;
}
void UserProfileMessage::setRestingHeartRate(const quint8 restingHeartRate)
{
    Q_D(UserProfileMessage);
    d->restingHeartRate = restingHeartRate;
}
void UserProfileMessage::setDefaultMaxRunningHeartRate(const quint8 defaultMaxRunningHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxRunningHeartRate = defaultMaxRunningHeartRate;
}
void UserProfileMessage::setDefaultMaxBikingHeartRate(const quint8 defaultMaxBikingHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxBikingHeartRate = defaultMaxBikingHeartRate;
}
void UserProfileMessage::setDefaultMaxHeartRate(const quint8 defaultMaxHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxHeartRate = defaultMaxHeartRate;
}
void UserProfileMessage::setHrSetting(const DisplayHeart hrSetting)
{
    Q_D(UserProfileMessage);
    d->hrSetting = hrSetting;
}
void UserProfileMessage::setSpeedSetting(const DisplayMeasure speedSetting)
{
    Q_D(UserProfileMessage);
    d->speedSetting = speedSetting;
}
void UserProfileMessage::setDistSetting(const DisplayMeasure distSetting)
{
    Q_D(UserProfileMessage);
    d->distSetting = distSetting;
}
void UserProfileMessage::setPowerSetting(const DisplayPower powerSetting)
{
    Q_D(UserProfileMessage);
    d->powerSetting = powerSetting;
}
void UserProfileMessage::setActivityClass(const ActivityClass activityClass)
{
    Q_D(UserProfileMessage);
    d->activityClass = activityClass;
}
void UserProfileMessage::setPositionSetting(const DisplayPosition positionSetting)
{
    Q_D(UserProfileMessage);
    d->positionSetting = positionSetting;
}
void UserProfileMessage::setTemperatureSetting(const DisplayMeasure temperatureSetting)
{
    Q_D(UserProfileMessage);
    d->temperatureSetting = temperatureSetting;
}
void UserProfileMessage::setLocalId(const UserLocalId localId)
{
    Q_D(UserProfileMessage);
    d->localId = localId;
}
void UserProfileMessage::setGlobalId(const quint8 globalId)
{
    Q_D(UserProfileMessage);
    d->globalId = globalId;
}
void UserProfileMessage::setWakeTime(const LocaltimeIntoDay wakeTime)
{
    Q_D(UserProfileMessage);
    d->wakeTime = wakeTime;
}
void UserProfileMessage::setSleepTime(const LocaltimeIntoDay sleepTime)
{
    Q_D(UserProfileMessage);
    d->sleepTime = sleepTime;
}
void UserProfileMessage::setHeightSetting(const DisplayMeasure heightSetting)
{
    Q_D(UserProfileMessage);
    d->heightSetting = heightSetting;
}
void UserProfileMessage::setUserRunningStepLength(const quint16 userRunningStepLength)
{
    Q_D(UserProfileMessage);
    d->userRunningStepLength = userRunningStepLength;
}
void UserProfileMessage::setUserWalkingStepLength(const quint16 userWalkingStepLength)
{
    Q_D(UserProfileMessage);
    d->userWalkingStepLength = userWalkingStepLength;
}
void UserProfileMessage::setDepthSetting(const DisplayMeasure depthSetting)
{
    Q_D(UserProfileMessage);
    d->depthSetting = depthSetting;
}
void UserProfileMessage::setDiveCount(const quint32 diveCount)
{
    Q_D(UserProfileMessage);
    d->diveCount = diveCount;
}

UserProfileMessagePrivate::UserProfileMessagePrivate(UserProfileMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , gender(static_cast<Gender>(-1))
  , age(0xFF)
  , height(0xFF)
  , weight(0xFFFF)
  , language(static_cast<Language>(-1))
  , elevSetting(static_cast<DisplayMeasure>(-1))
  , weightSetting(static_cast<DisplayMeasure>(-1))
  , restingHeartRate(0xFF)
  , defaultMaxRunningHeartRate(0xFF)
  , defaultMaxBikingHeartRate(0xFF)
  , defaultMaxHeartRate(0xFF)
  , hrSetting(static_cast<DisplayHeart>(-1))
  , speedSetting(static_cast<DisplayMeasure>(-1))
  , distSetting(static_cast<DisplayMeasure>(-1))
  , powerSetting(static_cast<DisplayPower>(-1))
  , activityClass(static_cast<ActivityClass>(-1))
  , positionSetting(static_cast<DisplayPosition>(-1))
  , temperatureSetting(static_cast<DisplayMeasure>(-1))
  , localId(static_cast<UserLocalId>(-1))
  , globalId(0xFF)
  , wakeTime(static_cast<LocaltimeIntoDay>(-1))
  , sleepTime(static_cast<LocaltimeIntoDay>(-1))
  , heightSetting(static_cast<DisplayMeasure>(-1))
  , userRunningStepLength(0xFFFF)
  , userWalkingStepLength(0xFFFF)
  , depthSetting(static_cast<DisplayMeasure>(-1))
  , diveCount(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::UserProfile;
}

UserProfileMessagePrivate::~UserProfileMessagePrivate()
{

}

/// @todo Generate implementation.
bool UserProfileMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
