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

#include <QDebug>
#include <QtEndian>

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

bool UserProfileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:user_profile.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "user_profile.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<MessageIndex>(data) : qFromLittleEndian<MessageIndex>(data));
        break;
    case 0: // See Profile.xlsx::Messages:user_profile.friendlyName
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.friendlyName has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.friendlyName size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->friendlyName = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:user_profile.gender
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.gender has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.gender size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->gender = static_cast<Gender>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:user_profile.age
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.age has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.age size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->age = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:user_profile.height
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.height has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.height size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->height = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:user_profile.weight
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.weight has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "user_profile.weight size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->weight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:user_profile.language
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.language has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.language size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->language = static_cast<Language>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:user_profile.elevSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.elevSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.elevSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->elevSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:user_profile.weightSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.weightSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.weightSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->weightSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:user_profile.restingHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.restingHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.restingHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->restingHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:user_profile.defaultMaxRunningHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.defaultMaxRunningHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.defaultMaxRunningHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->defaultMaxRunningHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:user_profile.defaultMaxBikingHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.defaultMaxBikingHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.defaultMaxBikingHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->defaultMaxBikingHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:user_profile.defaultMaxHeartRate
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.defaultMaxHeartRate has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.defaultMaxHeartRate size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->defaultMaxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:user_profile.hrSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.hrSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.hrSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->hrSetting = static_cast<DisplayHeart>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:user_profile.speedSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.speedSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.speedSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->speedSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:user_profile.distSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.distSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.distSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->distSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:user_profile.powerSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.powerSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.powerSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->powerSetting = static_cast<DisplayPower>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:user_profile.activityClass
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.activityClass has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.activityClass size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->activityClass = static_cast<ActivityClass>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:user_profile.positionSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.positionSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.positionSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->positionSetting = static_cast<DisplayPosition>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:user_profile.temperatureSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.temperatureSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.temperatureSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->temperatureSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 22: // See Profile.xlsx::Messages:user_profile.localId
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.localId has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "user_profile.localId size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->localId = static_cast<UserLocalId>(bigEndian ? qFromBigEndian<UserLocalId>(data) : qFromLittleEndian<UserLocalId>(data));
        break;
    case 23: // See Profile.xlsx::Messages:user_profile.globalId
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.globalId has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.globalId size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->globalId = static_cast<quint8>(data.at(0));
        break;
    case 28: // See Profile.xlsx::Messages:user_profile.wakeTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.wakeTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "user_profile.wakeTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->wakeTime = static_cast<LocaltimeIntoDay>(bigEndian ? qFromBigEndian<LocaltimeIntoDay>(data) : qFromLittleEndian<LocaltimeIntoDay>(data));
        break;
    case 29: // See Profile.xlsx::Messages:user_profile.sleepTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.sleepTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "user_profile.sleepTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->sleepTime = static_cast<LocaltimeIntoDay>(bigEndian ? qFromBigEndian<LocaltimeIntoDay>(data) : qFromLittleEndian<LocaltimeIntoDay>(data));
        break;
    case 30: // See Profile.xlsx::Messages:user_profile.heightSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.heightSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.heightSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->heightSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 31: // See Profile.xlsx::Messages:user_profile.userRunningStepLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.userRunningStepLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "user_profile.userRunningStepLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->userRunningStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 32: // See Profile.xlsx::Messages:user_profile.userWalkingStepLength
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.userWalkingStepLength has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "user_profile.userWalkingStepLength size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->userWalkingStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:user_profile.depthSetting
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.depthSetting has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "user_profile.depthSetting size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->depthSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 49: // See Profile.xlsx::Messages:user_profile.diveCount
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "user_profile.diveCount has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "user_profile.diveCount size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->diveCount = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown user_profile message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
