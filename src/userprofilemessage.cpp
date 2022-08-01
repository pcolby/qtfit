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

/*!
 * \file
 * Defines the UserProfileMessage, and UserProfileMessagePrivate classes.
 */

#include <qtfit/userprofilemessage.h>
#include "userprofilemessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class UserProfileMessage
 *
 * The UserProfileMessage class represents a FIT UserProfileMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a UserProfileMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
UserProfileMessage::UserProfileMessage() : AbstractDataMessage(new UserProfileMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a UserProfileMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
UserProfileMessage::UserProfileMessage(UserProfileMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the UserProfileMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex UserProfileMessage::messageIndex() const
{
    Q_D(const UserProfileMessage);
    return d->messageIndex;
}

/*!
 * Returns the UserProfileMessage data message's \c friendlyName field's current value.
 *
 * \return the \c friendlyName field value.
 */
QString UserProfileMessage::friendlyName() const
{
    Q_D(const UserProfileMessage);
    return d->friendlyName;
}

/*!
 * Returns the UserProfileMessage data message's \c gender field's current value.
 *
 * \return the \c gender field value.
 */
Gender UserProfileMessage::gender() const
{
    Q_D(const UserProfileMessage);
    return d->gender;
}

/*!
 * Returns the UserProfileMessage data message's \c age field's current value.
 *
 * \return the \c age field value.
 */
quint8 UserProfileMessage::age() const
{
    Q_D(const UserProfileMessage);
    return d->age;
}

/*!
 * Returns the UserProfileMessage data message's \c height field's current value.
 *
 * \return the \c height field value.
 */
quint8 UserProfileMessage::height() const
{
    Q_D(const UserProfileMessage);
    return d->height;
}

/*!
 * Returns the UserProfileMessage data message's \c weight field's current value.
 *
 * \return the \c weight field value.
 */
quint16 UserProfileMessage::weight() const
{
    Q_D(const UserProfileMessage);
    return d->weight;
}

/*!
 * Returns the UserProfileMessage data message's \c language field's current value.
 *
 * \return the \c language field value.
 */
Language UserProfileMessage::language() const
{
    Q_D(const UserProfileMessage);
    return d->language;
}

/*!
 * Returns the UserProfileMessage data message's \c elevSetting field's current value.
 *
 * \return the \c elevSetting field value.
 */
DisplayMeasure UserProfileMessage::elevSetting() const
{
    Q_D(const UserProfileMessage);
    return d->elevSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c weightSetting field's current value.
 *
 * \return the \c weightSetting field value.
 */
DisplayMeasure UserProfileMessage::weightSetting() const
{
    Q_D(const UserProfileMessage);
    return d->weightSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c restingHeartRate field's current value.
 *
 * \return the \c restingHeartRate field value.
 */
quint8 UserProfileMessage::restingHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->restingHeartRate;
}

/*!
 * Returns the UserProfileMessage data message's \c defaultMaxRunningHeartRate field's current value.
 *
 * \return the \c defaultMaxRunningHeartRate field value.
 */
quint8 UserProfileMessage::defaultMaxRunningHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxRunningHeartRate;
}

/*!
 * Returns the UserProfileMessage data message's \c defaultMaxBikingHeartRate field's current value.
 *
 * \return the \c defaultMaxBikingHeartRate field value.
 */
quint8 UserProfileMessage::defaultMaxBikingHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxBikingHeartRate;
}

/*!
 * Returns the UserProfileMessage data message's \c defaultMaxHeartRate field's current value.
 *
 * \return the \c defaultMaxHeartRate field value.
 */
quint8 UserProfileMessage::defaultMaxHeartRate() const
{
    Q_D(const UserProfileMessage);
    return d->defaultMaxHeartRate;
}

/*!
 * Returns the UserProfileMessage data message's \c hrSetting field's current value.
 *
 * \return the \c hrSetting field value.
 */
DisplayHeart UserProfileMessage::hrSetting() const
{
    Q_D(const UserProfileMessage);
    return d->hrSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c speedSetting field's current value.
 *
 * \return the \c speedSetting field value.
 */
DisplayMeasure UserProfileMessage::speedSetting() const
{
    Q_D(const UserProfileMessage);
    return d->speedSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c distSetting field's current value.
 *
 * \return the \c distSetting field value.
 */
DisplayMeasure UserProfileMessage::distSetting() const
{
    Q_D(const UserProfileMessage);
    return d->distSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c powerSetting field's current value.
 *
 * \return the \c powerSetting field value.
 */
DisplayPower UserProfileMessage::powerSetting() const
{
    Q_D(const UserProfileMessage);
    return d->powerSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c activityClass field's current value.
 *
 * \return the \c activityClass field value.
 */
ActivityClass UserProfileMessage::activityClass() const
{
    Q_D(const UserProfileMessage);
    return d->activityClass;
}

/*!
 * Returns the UserProfileMessage data message's \c positionSetting field's current value.
 *
 * \return the \c positionSetting field value.
 */
DisplayPosition UserProfileMessage::positionSetting() const
{
    Q_D(const UserProfileMessage);
    return d->positionSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c temperatureSetting field's current value.
 *
 * \return the \c temperatureSetting field value.
 */
DisplayMeasure UserProfileMessage::temperatureSetting() const
{
    Q_D(const UserProfileMessage);
    return d->temperatureSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c localId field's current value.
 *
 * \return the \c localId field value.
 */
UserLocalId UserProfileMessage::localId() const
{
    Q_D(const UserProfileMessage);
    return d->localId;
}

/*!
 * Returns the UserProfileMessage data message's \c globalId field's current value.
 *
 * \return the \c globalId field value.
 */
quint8 UserProfileMessage::globalId() const
{
    Q_D(const UserProfileMessage);
    return d->globalId;
}

/*!
 * Returns the UserProfileMessage data message's \c wakeTime field's current value.
 *
 * Typical wake time
 *
 * \return the \c wakeTime field value.
 */
LocaltimeIntoDay UserProfileMessage::wakeTime() const
{
    Q_D(const UserProfileMessage);
    return d->wakeTime;
}

/*!
 * Returns the UserProfileMessage data message's \c sleepTime field's current value.
 *
 * Typical bed time
 *
 * \return the \c sleepTime field value.
 */
LocaltimeIntoDay UserProfileMessage::sleepTime() const
{
    Q_D(const UserProfileMessage);
    return d->sleepTime;
}

/*!
 * Returns the UserProfileMessage data message's \c heightSetting field's current value.
 *
 * \return the \c heightSetting field value.
 */
DisplayMeasure UserProfileMessage::heightSetting() const
{
    Q_D(const UserProfileMessage);
    return d->heightSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c userRunningStepLength field's current value.
 *
 * User defined running step length set to 0 for auto length
 *
 * \return the \c userRunningStepLength field value.
 */
quint16 UserProfileMessage::userRunningStepLength() const
{
    Q_D(const UserProfileMessage);
    return d->userRunningStepLength;
}

/*!
 * Returns the UserProfileMessage data message's \c userWalkingStepLength field's current value.
 *
 * User defined walking step length set to 0 for auto length
 *
 * \return the \c userWalkingStepLength field value.
 */
quint16 UserProfileMessage::userWalkingStepLength() const
{
    Q_D(const UserProfileMessage);
    return d->userWalkingStepLength;
}

/*!
 * Returns the UserProfileMessage data message's \c depthSetting field's current value.
 *
 * \return the \c depthSetting field value.
 */
DisplayMeasure UserProfileMessage::depthSetting() const
{
    Q_D(const UserProfileMessage);
    return d->depthSetting;
}

/*!
 * Returns the UserProfileMessage data message's \c diveCount field's current value.
 *
 * \return the \c diveCount field value.
 */
quint32 UserProfileMessage::diveCount() const
{
    Q_D(const UserProfileMessage);
    return d->diveCount;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void UserProfileMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(UserProfileMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c friendlyName field to \a friendlyName.
 *
 * \param friendlyName The field value to set.
 */
void UserProfileMessage::setFriendlyName(const QString friendlyName)
{
    Q_D(UserProfileMessage);
    d->friendlyName = friendlyName;
}
/*!
 * Sets the \c gender field to \a gender.
 *
 * \param gender The field value to set.
 */
void UserProfileMessage::setGender(const Gender gender)
{
    Q_D(UserProfileMessage);
    d->gender = gender;
}
/*!
 * Sets the \c age field to \a age.
 *
 * \param age The field value to set.
 */
void UserProfileMessage::setAge(const quint8 age)
{
    Q_D(UserProfileMessage);
    d->age = age;
}
/*!
 * Sets the \c height field to \a height.
 *
 * \param height The field value to set.
 */
void UserProfileMessage::setHeight(const quint8 height)
{
    Q_D(UserProfileMessage);
    d->height = height;
}
/*!
 * Sets the \c weight field to \a weight.
 *
 * \param weight The field value to set.
 */
void UserProfileMessage::setWeight(const quint16 weight)
{
    Q_D(UserProfileMessage);
    d->weight = weight;
}
/*!
 * Sets the \c language field to \a language.
 *
 * \param language The field value to set.
 */
void UserProfileMessage::setLanguage(const Language language)
{
    Q_D(UserProfileMessage);
    d->language = language;
}
/*!
 * Sets the \c elevSetting field to \a elevSetting.
 *
 * \param elevSetting The field value to set.
 */
void UserProfileMessage::setElevSetting(const DisplayMeasure elevSetting)
{
    Q_D(UserProfileMessage);
    d->elevSetting = elevSetting;
}
/*!
 * Sets the \c weightSetting field to \a weightSetting.
 *
 * \param weightSetting The field value to set.
 */
void UserProfileMessage::setWeightSetting(const DisplayMeasure weightSetting)
{
    Q_D(UserProfileMessage);
    d->weightSetting = weightSetting;
}
/*!
 * Sets the \c restingHeartRate field to \a restingHeartRate.
 *
 * \param restingHeartRate The field value to set.
 */
void UserProfileMessage::setRestingHeartRate(const quint8 restingHeartRate)
{
    Q_D(UserProfileMessage);
    d->restingHeartRate = restingHeartRate;
}
/*!
 * Sets the \c defaultMaxRunningHeartRate field to \a defaultMaxRunningHeartRate.
 *
 * \param defaultMaxRunningHeartRate The field value to set.
 */
void UserProfileMessage::setDefaultMaxRunningHeartRate(const quint8 defaultMaxRunningHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxRunningHeartRate = defaultMaxRunningHeartRate;
}
/*!
 * Sets the \c defaultMaxBikingHeartRate field to \a defaultMaxBikingHeartRate.
 *
 * \param defaultMaxBikingHeartRate The field value to set.
 */
void UserProfileMessage::setDefaultMaxBikingHeartRate(const quint8 defaultMaxBikingHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxBikingHeartRate = defaultMaxBikingHeartRate;
}
/*!
 * Sets the \c defaultMaxHeartRate field to \a defaultMaxHeartRate.
 *
 * \param defaultMaxHeartRate The field value to set.
 */
void UserProfileMessage::setDefaultMaxHeartRate(const quint8 defaultMaxHeartRate)
{
    Q_D(UserProfileMessage);
    d->defaultMaxHeartRate = defaultMaxHeartRate;
}
/*!
 * Sets the \c hrSetting field to \a hrSetting.
 *
 * \param hrSetting The field value to set.
 */
void UserProfileMessage::setHrSetting(const DisplayHeart hrSetting)
{
    Q_D(UserProfileMessage);
    d->hrSetting = hrSetting;
}
/*!
 * Sets the \c speedSetting field to \a speedSetting.
 *
 * \param speedSetting The field value to set.
 */
void UserProfileMessage::setSpeedSetting(const DisplayMeasure speedSetting)
{
    Q_D(UserProfileMessage);
    d->speedSetting = speedSetting;
}
/*!
 * Sets the \c distSetting field to \a distSetting.
 *
 * \param distSetting The field value to set.
 */
void UserProfileMessage::setDistSetting(const DisplayMeasure distSetting)
{
    Q_D(UserProfileMessage);
    d->distSetting = distSetting;
}
/*!
 * Sets the \c powerSetting field to \a powerSetting.
 *
 * \param powerSetting The field value to set.
 */
void UserProfileMessage::setPowerSetting(const DisplayPower powerSetting)
{
    Q_D(UserProfileMessage);
    d->powerSetting = powerSetting;
}
/*!
 * Sets the \c activityClass field to \a activityClass.
 *
 * \param activityClass The field value to set.
 */
void UserProfileMessage::setActivityClass(const ActivityClass activityClass)
{
    Q_D(UserProfileMessage);
    d->activityClass = activityClass;
}
/*!
 * Sets the \c positionSetting field to \a positionSetting.
 *
 * \param positionSetting The field value to set.
 */
void UserProfileMessage::setPositionSetting(const DisplayPosition positionSetting)
{
    Q_D(UserProfileMessage);
    d->positionSetting = positionSetting;
}
/*!
 * Sets the \c temperatureSetting field to \a temperatureSetting.
 *
 * \param temperatureSetting The field value to set.
 */
void UserProfileMessage::setTemperatureSetting(const DisplayMeasure temperatureSetting)
{
    Q_D(UserProfileMessage);
    d->temperatureSetting = temperatureSetting;
}
/*!
 * Sets the \c localId field to \a localId.
 *
 * \param localId The field value to set.
 */
void UserProfileMessage::setLocalId(const UserLocalId localId)
{
    Q_D(UserProfileMessage);
    d->localId = localId;
}
/*!
 * Sets the \c globalId field to \a globalId.
 *
 * \param globalId The field value to set.
 */
void UserProfileMessage::setGlobalId(const quint8 globalId)
{
    Q_D(UserProfileMessage);
    d->globalId = globalId;
}
/*!
 * Sets the \c wakeTime field to \a wakeTime.
 *
 * \param wakeTime The field value to set.
 */
void UserProfileMessage::setWakeTime(const LocaltimeIntoDay wakeTime)
{
    Q_D(UserProfileMessage);
    d->wakeTime = wakeTime;
}
/*!
 * Sets the \c sleepTime field to \a sleepTime.
 *
 * \param sleepTime The field value to set.
 */
void UserProfileMessage::setSleepTime(const LocaltimeIntoDay sleepTime)
{
    Q_D(UserProfileMessage);
    d->sleepTime = sleepTime;
}
/*!
 * Sets the \c heightSetting field to \a heightSetting.
 *
 * \param heightSetting The field value to set.
 */
void UserProfileMessage::setHeightSetting(const DisplayMeasure heightSetting)
{
    Q_D(UserProfileMessage);
    d->heightSetting = heightSetting;
}
/*!
 * Sets the \c userRunningStepLength field to \a userRunningStepLength.
 *
 * \param userRunningStepLength The field value to set.
 */
void UserProfileMessage::setUserRunningStepLength(const quint16 userRunningStepLength)
{
    Q_D(UserProfileMessage);
    d->userRunningStepLength = userRunningStepLength;
}
/*!
 * Sets the \c userWalkingStepLength field to \a userWalkingStepLength.
 *
 * \param userWalkingStepLength The field value to set.
 */
void UserProfileMessage::setUserWalkingStepLength(const quint16 userWalkingStepLength)
{
    Q_D(UserProfileMessage);
    d->userWalkingStepLength = userWalkingStepLength;
}
/*!
 * Sets the \c depthSetting field to \a depthSetting.
 *
 * \param depthSetting The field value to set.
 */
void UserProfileMessage::setDepthSetting(const DisplayMeasure depthSetting)
{
    Q_D(UserProfileMessage);
    d->depthSetting = depthSetting;
}
/*!
 * Sets the \c diveCount field to \a diveCount.
 *
 * \param diveCount The field value to set.
 */
void UserProfileMessage::setDiveCount(const quint32 diveCount)
{
    Q_D(UserProfileMessage);
    d->diveCount = diveCount;
}

/// \cond internal

/*!
 * \internal
 *
 * \class UserProfileMessagePrivate
 *
 * The UserProfileMessagePrivate class provides private implementation for the UserProfileMessage.
 *
 * \sa UserProfileMessage
 */

/*!
 * \internal
 *
 * Constructs a UserProfileMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
UserProfileMessagePrivate::UserProfileMessagePrivate(UserProfileMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the UserProfileMessagePrivate object.
 */
UserProfileMessagePrivate::~UserProfileMessagePrivate()
{

}

bool UserProfileMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:user_profile.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "user_profile.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:user_profile.friendlyName
        if (!verify(data, baseType, 1, FitBaseType::String, "user_profile.friendlyName")) return false;
        this->friendlyName = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:user_profile.gender
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.gender")) return false;
        this->gender = static_cast<Gender>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:user_profile.age
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.age")) return false;
        this->age = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:user_profile.height
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.height")) return false;
        this->height = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:user_profile.weight
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "user_profile.weight")) return false;
        this->weight = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 5: // See Profile.xlsx::Messages:user_profile.language
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.language")) return false;
        this->language = static_cast<Language>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:user_profile.elevSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.elevSetting")) return false;
        this->elevSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:user_profile.weightSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.weightSetting")) return false;
        this->weightSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:user_profile.restingHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.restingHeartRate")) return false;
        this->restingHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:user_profile.defaultMaxRunningHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.defaultMaxRunningHeartRate")) return false;
        this->defaultMaxRunningHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:user_profile.defaultMaxBikingHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.defaultMaxBikingHeartRate")) return false;
        this->defaultMaxBikingHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 11: // See Profile.xlsx::Messages:user_profile.defaultMaxHeartRate
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "user_profile.defaultMaxHeartRate")) return false;
        this->defaultMaxHeartRate = static_cast<quint8>(data.at(0));
        break;
    case 12: // See Profile.xlsx::Messages:user_profile.hrSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.hrSetting")) return false;
        this->hrSetting = static_cast<DisplayHeart>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:user_profile.speedSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.speedSetting")) return false;
        this->speedSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 14: // See Profile.xlsx::Messages:user_profile.distSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.distSetting")) return false;
        this->distSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:user_profile.powerSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.powerSetting")) return false;
        this->powerSetting = static_cast<DisplayPower>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:user_profile.activityClass
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.activityClass")) return false;
        this->activityClass = static_cast<ActivityClass>(data.at(0));
        break;
    case 18: // See Profile.xlsx::Messages:user_profile.positionSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.positionSetting")) return false;
        this->positionSetting = static_cast<DisplayPosition>(data.at(0));
        break;
    case 21: // See Profile.xlsx::Messages:user_profile.temperatureSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.temperatureSetting")) return false;
        this->temperatureSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 22: // See Profile.xlsx::Messages:user_profile.localId
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "user_profile.localId")) return false;
        this->localId = static_cast<UserLocalId>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 23: // See Profile.xlsx::Messages:user_profile.globalId
        if (!verify(data, baseType, 1, FitBaseType::Byte, "user_profile.globalId")) return false;
        this->globalId = static_cast<quint8>(data.at(0));
        break;
    case 28: // See Profile.xlsx::Messages:user_profile.wakeTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "user_profile.wakeTime")) return false;
        this->wakeTime = static_cast<LocaltimeIntoDay>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 29: // See Profile.xlsx::Messages:user_profile.sleepTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "user_profile.sleepTime")) return false;
        this->sleepTime = static_cast<LocaltimeIntoDay>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 30: // See Profile.xlsx::Messages:user_profile.heightSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.heightSetting")) return false;
        this->heightSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 31: // See Profile.xlsx::Messages:user_profile.userRunningStepLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "user_profile.userRunningStepLength")) return false;
        this->userRunningStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 32: // See Profile.xlsx::Messages:user_profile.userWalkingStepLength
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "user_profile.userWalkingStepLength")) return false;
        this->userWalkingStepLength = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 47: // See Profile.xlsx::Messages:user_profile.depthSetting
        if (!verify(data, baseType, 1, FitBaseType::Enum, "user_profile.depthSetting")) return false;
        this->depthSetting = static_cast<DisplayMeasure>(data.at(0));
        break;
    case 49: // See Profile.xlsx::Messages:user_profile.diveCount
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "user_profile.diveCount")) return false;
        this->diveCount = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown user_profile message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
