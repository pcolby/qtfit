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

#ifndef QTFIT_USERPROFILEMESSAGE_H
#define QTFIT_USERPROFILEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class UserProfileMessagePrivate;

class QTFIT_EXPORT UserProfileMessage : public AbstractDataMessage {

public:
    UserProfileMessage();
    ~UserProfileMessage();

    MessageIndex messageIndex() const;
    QString friendlyName() const;
    Gender gender() const;
    quint8 age() const;
    quint8 height() const;
    quint16 weight() const;
    Language language() const;
    DisplayMeasure elevSetting() const;
    DisplayMeasure weightSetting() const;
    quint8 restingHeartRate() const;
    quint8 defaultMaxRunningHeartRate() const;
    quint8 defaultMaxBikingHeartRate() const;
    quint8 defaultMaxHeartRate() const;
    DisplayHeart hrSetting() const;
    DisplayMeasure speedSetting() const;
    DisplayMeasure distSetting() const;
    DisplayPower powerSetting() const;
    ActivityClass activityClass() const;
    DisplayPosition positionSetting() const;
    DisplayMeasure temperatureSetting() const;
    UserLocalId localId() const;
    quint8 globalId() const;
    LocaltimeIntoDay wakeTime() const;
    LocaltimeIntoDay sleepTime() const;
    DisplayMeasure heightSetting() const;
    quint16 userRunningStepLength() const;
    quint16 userWalkingStepLength() const;
    DisplayMeasure depthSetting() const;
    quint32 diveCount() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setFriendlyName(const QString friendlyName);
    void setGender(const Gender gender);
    void setAge(const quint8 age);
    void setHeight(const quint8 height);
    void setWeight(const quint16 weight);
    void setLanguage(const Language language);
    void setElevSetting(const DisplayMeasure elevSetting);
    void setWeightSetting(const DisplayMeasure weightSetting);
    void setRestingHeartRate(const quint8 restingHeartRate);
    void setDefaultMaxRunningHeartRate(const quint8 defaultMaxRunningHeartRate);
    void setDefaultMaxBikingHeartRate(const quint8 defaultMaxBikingHeartRate);
    void setDefaultMaxHeartRate(const quint8 defaultMaxHeartRate);
    void setHrSetting(const DisplayHeart hrSetting);
    void setSpeedSetting(const DisplayMeasure speedSetting);
    void setDistSetting(const DisplayMeasure distSetting);
    void setPowerSetting(const DisplayPower powerSetting);
    void setActivityClass(const ActivityClass activityClass);
    void setPositionSetting(const DisplayPosition positionSetting);
    void setTemperatureSetting(const DisplayMeasure temperatureSetting);
    void setLocalId(const UserLocalId localId);
    void setGlobalId(const quint8 globalId);
    void setWakeTime(const LocaltimeIntoDay wakeTime);
    void setSleepTime(const LocaltimeIntoDay sleepTime);
    void setHeightSetting(const DisplayMeasure heightSetting);
    void setUserRunningStepLength(const quint16 userRunningStepLength);
    void setUserWalkingStepLength(const quint16 userWalkingStepLength);
    void setDepthSetting(const DisplayMeasure depthSetting);
    void setDiveCount(const quint32 diveCount);

protected:
    /// @cond internal
    explicit UserProfileMessage(UserProfileMessagePrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(UserProfileMessage)
  //Q_DISABLE_COPY(UserProfileMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_USERPROFILEMESSAGE_H
