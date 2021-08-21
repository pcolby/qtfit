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

#ifndef QTFIT_USERPROFILEMESSAGE_P_H
#define QTFIT_USERPROFILEMESSAGE_P_H

#include "fitdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class UserProfileMessage;

class UserProfileMessagePrivate : public FitDataMessagePrivate {

public:
    MessageIndex messageIndex;
    QString friendlyName;
    Gender gender;
    quint8 age;
    quint8 height;
    quint16 weight;
    Language language;
    DisplayMeasure elevSetting;
    DisplayMeasure weightSetting;
    quint8 restingHeartRate;
    quint8 defaultMaxRunningHeartRate;
    quint8 defaultMaxBikingHeartRate;
    quint8 defaultMaxHeartRate;
    DisplayHeart hrSetting;
    DisplayMeasure speedSetting;
    DisplayMeasure distSetting;
    DisplayPower powerSetting;
    ActivityClass activityClass;
    DisplayPosition positionSetting;
    DisplayMeasure temperatureSetting;
    UserLocalId localId;
    quint8 globalId;
    LocaltimeIntoDay wakeTime;
    LocaltimeIntoDay sleepTime;
    DisplayMeasure heightSetting;
    quint16 userRunningStepLength;
    quint16 userWalkingStepLength;
    DisplayMeasure depthSetting;
    quint32 diveCount;

    UserProfileMessagePrivate() = delete;
    explicit UserProfileMessagePrivate(UserProfileMessage * const q);
    virtual ~UserProfileMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(UserProfileMessage)
    Q_DISABLE_COPY(UserProfileMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_USERPROFILEMESSAGE_P_H
