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

#include <QDebug>
#include <QtEndian>

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

bool DiveSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_settings.messageIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.messageIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_settings.messageIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_settings.name
        if (baseType != FitBaseType::String) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.name has base type" << static_cast<int>(baseType) << "but should be String";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.name size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:dive_settings.model
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.model has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.model size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->model = static_cast<TissueModelType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:dive_settings.gfLow
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.gfLow has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.gfLow size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->gfLow = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:dive_settings.gfHigh
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.gfHigh has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.gfHigh size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->gfHigh = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:dive_settings.waterType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.waterType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.waterType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->waterType = static_cast<WaterType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:dive_settings.waterDensity
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.waterDensity has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_settings.waterDensity size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->waterDensity = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 6: // See Profile.xlsx::Messages:dive_settings.po2Warn
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.po2Warn has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.po2Warn size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->po2Warn = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:dive_settings.po2Critical
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.po2Critical has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.po2Critical size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->po2Critical = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:dive_settings.po2Deco
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.po2Deco has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.po2Deco size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->po2Deco = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:dive_settings.safetyStopEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.safetyStopEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "dive_settings.safetyStopEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->safetyStopEnabled = static_cast<bool>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:dive_settings.bottomDepth
        if (baseType != FitBaseType::Float32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.bottomDepth has base type" << static_cast<int>(baseType) << "but should be Float32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_settings.bottomDepth size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->bottomDepth = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        break;
    case 11: // See Profile.xlsx::Messages:dive_settings.bottomTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.bottomTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_settings.bottomTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->bottomTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:dive_settings.apneaCountdownEnabled
        if (baseType != FitBaseType::Byte) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.apneaCountdownEnabled has base type" << static_cast<int>(baseType) << "but should be Byte";
            return false;
        }
        if (data.size() != 0) {
            qWarning() << "dive_settings.apneaCountdownEnabled size is" << data.size() << "but should be" << 0;
            return false;
        }
        this->apneaCountdownEnabled = static_cast<bool>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:dive_settings.apneaCountdownTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.apneaCountdownTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_settings.apneaCountdownTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->apneaCountdownTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 14: // See Profile.xlsx::Messages:dive_settings.backlightMode
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.backlightMode has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.backlightMode size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->backlightMode = static_cast<DiveBacklightMode>(data.at(0));
        break;
    case 15: // See Profile.xlsx::Messages:dive_settings.backlightBrightness
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.backlightBrightness has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.backlightBrightness size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->backlightBrightness = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:dive_settings.backlightTimeout
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.backlightTimeout has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.backlightTimeout size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->backlightTimeout = static_cast<BacklightTimeout>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:dive_settings.repeatDiveInterval
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.repeatDiveInterval has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_settings.repeatDiveInterval size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->repeatDiveInterval = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 18: // See Profile.xlsx::Messages:dive_settings.safetyStopTime
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.safetyStopTime has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_settings.safetyStopTime size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->safetyStopTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:dive_settings.heartRateSourceType
        if (baseType != FitBaseType::Enum) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.heartRateSourceType has base type" << static_cast<int>(baseType) << "but should be Enum";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.heartRateSourceType size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->heartRateSourceType = static_cast<SourceType>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:dive_settings.heartRateSource
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_settings.heartRateSource has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_settings.heartRateSource size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->heartRateSource = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "unknown dive_settings message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
