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

#include "divesettingsmessage.h"
#include "divesettingsmessage_p.h"

QTFIT_BEGIN_NAMESPACE

DiveSettingsMessage::DiveSettingsMessage() : FitDataMessage(new DiveSettingsMessagePrivate(this))
{

}

MessageIndex DiveSettingsMessage::messageIndex() const
{
    Q_D(const DiveSettingsMessage);
    return d->messageIndex;
}

QString DiveSettingsMessage::name() const
{
    Q_D(const DiveSettingsMessage);
    return d->name;
}

TissueModelType DiveSettingsMessage::model() const
{
    Q_D(const DiveSettingsMessage);
    return d->model;
}

quint8 DiveSettingsMessage::gfLow() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfLow;
}

quint8 DiveSettingsMessage::gfHigh() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfHigh;
}

WaterType DiveSettingsMessage::waterType() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterType;
}

float DiveSettingsMessage::waterDensity() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterDensity;
}

quint8 DiveSettingsMessage::po2Warn() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Warn;
}

quint8 DiveSettingsMessage::po2Critical() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Critical;
}

quint8 DiveSettingsMessage::po2Deco() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Deco;
}

bool DiveSettingsMessage::safetyStopEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopEnabled;
}

float DiveSettingsMessage::bottomDepth() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomDepth;
}

quint32 DiveSettingsMessage::bottomTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomTime;
}

bool DiveSettingsMessage::apneaCountdownEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownEnabled;
}

quint32 DiveSettingsMessage::apneaCountdownTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownTime;
}

DiveBacklightMode DiveSettingsMessage::backlightMode() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightMode;
}

quint8 DiveSettingsMessage::backlightBrightness() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightBrightness;
}

BacklightTimeout DiveSettingsMessage::backlightTimeout() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightTimeout;
}

quint16 DiveSettingsMessage::repeatDiveInterval() const
{
    Q_D(const DiveSettingsMessage);
    return d->repeatDiveInterval;
}

quint16 DiveSettingsMessage::safetyStopTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopTime;
}

SourceType DiveSettingsMessage::heartRateSourceType() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSourceType;
}

quint8 DiveSettingsMessage::heartRateSource() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSource;
}

void DiveSettingsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveSettingsMessage);
    d->messageIndex = messageIndex;
}
void DiveSettingsMessage::setName(const QString name)
{
    Q_D(DiveSettingsMessage);
    d->name = name;
}
void DiveSettingsMessage::setModel(const TissueModelType model)
{
    Q_D(DiveSettingsMessage);
    d->model = model;
}
void DiveSettingsMessage::setGfLow(const quint8 gfLow)
{
    Q_D(DiveSettingsMessage);
    d->gfLow = gfLow;
}
void DiveSettingsMessage::setGfHigh(const quint8 gfHigh)
{
    Q_D(DiveSettingsMessage);
    d->gfHigh = gfHigh;
}
void DiveSettingsMessage::setWaterType(const WaterType waterType)
{
    Q_D(DiveSettingsMessage);
    d->waterType = waterType;
}
void DiveSettingsMessage::setWaterDensity(const float waterDensity)
{
    Q_D(DiveSettingsMessage);
    d->waterDensity = waterDensity;
}
void DiveSettingsMessage::setPo2Warn(const quint8 po2Warn)
{
    Q_D(DiveSettingsMessage);
    d->po2Warn = po2Warn;
}
void DiveSettingsMessage::setPo2Critical(const quint8 po2Critical)
{
    Q_D(DiveSettingsMessage);
    d->po2Critical = po2Critical;
}
void DiveSettingsMessage::setPo2Deco(const quint8 po2Deco)
{
    Q_D(DiveSettingsMessage);
    d->po2Deco = po2Deco;
}
void DiveSettingsMessage::setSafetyStopEnabled(const bool safetyStopEnabled)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopEnabled = safetyStopEnabled;
}
void DiveSettingsMessage::setBottomDepth(const float bottomDepth)
{
    Q_D(DiveSettingsMessage);
    d->bottomDepth = bottomDepth;
}
void DiveSettingsMessage::setBottomTime(const quint32 bottomTime)
{
    Q_D(DiveSettingsMessage);
    d->bottomTime = bottomTime;
}
void DiveSettingsMessage::setApneaCountdownEnabled(const bool apneaCountdownEnabled)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownEnabled = apneaCountdownEnabled;
}
void DiveSettingsMessage::setApneaCountdownTime(const quint32 apneaCountdownTime)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownTime = apneaCountdownTime;
}
void DiveSettingsMessage::setBacklightMode(const DiveBacklightMode backlightMode)
{
    Q_D(DiveSettingsMessage);
    d->backlightMode = backlightMode;
}
void DiveSettingsMessage::setBacklightBrightness(const quint8 backlightBrightness)
{
    Q_D(DiveSettingsMessage);
    d->backlightBrightness = backlightBrightness;
}
void DiveSettingsMessage::setBacklightTimeout(const BacklightTimeout backlightTimeout)
{
    Q_D(DiveSettingsMessage);
    d->backlightTimeout = backlightTimeout;
}
void DiveSettingsMessage::setRepeatDiveInterval(const quint16 repeatDiveInterval)
{
    Q_D(DiveSettingsMessage);
    d->repeatDiveInterval = repeatDiveInterval;
}
void DiveSettingsMessage::setSafetyStopTime(const quint16 safetyStopTime)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopTime = safetyStopTime;
}
void DiveSettingsMessage::setHeartRateSourceType(const SourceType heartRateSourceType)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSourceType = heartRateSourceType;
}
void DiveSettingsMessage::setHeartRateSource(const quint8 heartRateSource)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSource = heartRateSource;
}

DiveSettingsMessagePrivate::DiveSettingsMessagePrivate(DiveSettingsMessage * const q)
  : FitDataMessagePrivate(q)
  , messageIndex(static_cast<MessageIndex>(-1))
  , model(static_cast<TissueModelType>(-1))
  , gfLow(0xFF)
  , gfHigh(0xFF)
  , waterType(static_cast<WaterType>(-1))
  , waterDensity(static_cast<float>(-1))
  , po2Warn(0xFF)
  , po2Critical(0xFF)
  , po2Deco(0xFF)
  , safetyStopEnabled(static_cast<bool>(-1))
  , bottomDepth(static_cast<float>(-1))
  , bottomTime(0xFFFFFFFF)
  , apneaCountdownEnabled(static_cast<bool>(-1))
  , apneaCountdownTime(0xFFFFFFFF)
  , backlightMode(static_cast<DiveBacklightMode>(-1))
  , backlightBrightness(0xFF)
  , backlightTimeout(static_cast<BacklightTimeout>(-1))
  , repeatDiveInterval(0xFFFF)
  , safetyStopTime(0xFFFF)
  , heartRateSourceType(static_cast<SourceType>(-1))
  , heartRateSource(0xFF)
{
    globalMessageNumber = MesgNum::DiveSettings;
}

DiveSettingsMessagePrivate::~DiveSettingsMessagePrivate()
{

}

/// @todo Generate implementation.
bool DiveSettingsMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
