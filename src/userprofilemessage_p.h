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
 * Declares the UserProfileMessagePrivate class.
 */
#ifndef QTFIT_USERPROFILEMESSAGE_P_H
#define QTFIT_USERPROFILEMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class UserProfileMessage;

class UserProfileMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The UserProfileMessage FIT message's messageIndex field.
     */
    MessageIndex messageIndex;

    /*!
     * The UserProfileMessage FIT message's friendlyName field.
     */
    QString friendlyName;

    /*!
     * The UserProfileMessage FIT message's gender field.
     */
    Gender gender;

    /*!
     * The UserProfileMessage FIT message's age field.
     */
    quint8 age;

    /*!
     * The UserProfileMessage FIT message's height field.
     */
    quint8 height;

    /*!
     * The UserProfileMessage FIT message's weight field.
     */
    quint16 weight;

    /*!
     * The UserProfileMessage FIT message's language field.
     */
    Language language;

    /*!
     * The UserProfileMessage FIT message's elevSetting field.
     */
    DisplayMeasure elevSetting;

    /*!
     * The UserProfileMessage FIT message's weightSetting field.
     */
    DisplayMeasure weightSetting;

    /*!
     * The UserProfileMessage FIT message's restingHeartRate field.
     */
    quint8 restingHeartRate;

    /*!
     * The UserProfileMessage FIT message's defaultMaxRunningHeartRate field.
     */
    quint8 defaultMaxRunningHeartRate;

    /*!
     * The UserProfileMessage FIT message's defaultMaxBikingHeartRate field.
     */
    quint8 defaultMaxBikingHeartRate;

    /*!
     * The UserProfileMessage FIT message's defaultMaxHeartRate field.
     */
    quint8 defaultMaxHeartRate;

    /*!
     * The UserProfileMessage FIT message's hrSetting field.
     */
    DisplayHeart hrSetting;

    /*!
     * The UserProfileMessage FIT message's speedSetting field.
     */
    DisplayMeasure speedSetting;

    /*!
     * The UserProfileMessage FIT message's distSetting field.
     */
    DisplayMeasure distSetting;

    /*!
     * The UserProfileMessage FIT message's powerSetting field.
     */
    DisplayPower powerSetting;

    /*!
     * The UserProfileMessage FIT message's activityClass field.
     */
    ActivityClass activityClass;

    /*!
     * The UserProfileMessage FIT message's positionSetting field.
     */
    DisplayPosition positionSetting;

    /*!
     * The UserProfileMessage FIT message's temperatureSetting field.
     */
    DisplayMeasure temperatureSetting;

    /*!
     * The UserProfileMessage FIT message's localId field.
     */
    UserLocalId localId;

    /*!
     * The UserProfileMessage FIT message's globalId field.
     */
    quint8 globalId;

    /*!
     * The UserProfileMessage FIT message's wakeTime field.
     *
     * Typical wake time
     */
    LocaltimeIntoDay wakeTime;

    /*!
     * The UserProfileMessage FIT message's sleepTime field.
     *
     * Typical bed time
     */
    LocaltimeIntoDay sleepTime;

    /*!
     * The UserProfileMessage FIT message's heightSetting field.
     */
    DisplayMeasure heightSetting;

    /*!
     * The UserProfileMessage FIT message's userRunningStepLength field.
     *
     * User defined running step length set to 0 for auto length
     */
    quint16 userRunningStepLength;

    /*!
     * The UserProfileMessage FIT message's userWalkingStepLength field.
     *
     * User defined walking step length set to 0 for auto length
     */
    quint16 userWalkingStepLength;

    /*!
     * The UserProfileMessage FIT message's depthSetting field.
     */
    DisplayMeasure depthSetting;

    /*!
     * The UserProfileMessage FIT message's diveCount field.
     */
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
