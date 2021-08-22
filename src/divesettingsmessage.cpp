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

/*!
 * \class DiveSettingsMessage
 *
 * The DiveSettingsMessage class represents a FIT DiveSettingsMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid DiveSettingsMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DiveSettingsMessage::DiveSettingsMessage() : AbstractDataMessage(new DiveSettingsMessagePrivate(this))
{

}

/*!
 * Returns the DiveSettingsMessage data message's \c messageIndex field's current value.
 *
 * \return the \c messageIndex field value.
 */
MessageIndex DiveSettingsMessage::messageIndex() const
{
    Q_D(const DiveSettingsMessage);
    return d->messageIndex;
}

/*!
 * Returns the DiveSettingsMessage data message's \c name field's current value.
 *
 * \return the \c name field value.
 */
QString DiveSettingsMessage::name() const
{
    Q_D(const DiveSettingsMessage);
    return d->name;
}

/*!
 * Returns the DiveSettingsMessage data message's \c model field's current value.
 *
 * \return the \c model field value.
 */
TissueModelType DiveSettingsMessage::model() const
{
    Q_D(const DiveSettingsMessage);
    return d->model;
}

/*!
 * Returns the DiveSettingsMessage data message's \c gfLow field's current value.
 *
 * \return the \c gfLow field value.
 */
quint8 DiveSettingsMessage::gfLow() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfLow;
}

/*!
 * Returns the DiveSettingsMessage data message's \c gfHigh field's current value.
 *
 * \return the \c gfHigh field value.
 */
quint8 DiveSettingsMessage::gfHigh() const
{
    Q_D(const DiveSettingsMessage);
    return d->gfHigh;
}

/*!
 * Returns the DiveSettingsMessage data message's \c waterType field's current value.
 *
 * \return the \c waterType field value.
 */
WaterType DiveSettingsMessage::waterType() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterType;
}

/*!
 * Returns the DiveSettingsMessage data message's \c waterDensity field's current value.
 *
 * \return the \c waterDensity field value.
 */
float DiveSettingsMessage::waterDensity() const
{
    Q_D(const DiveSettingsMessage);
    return d->waterDensity;
}

/*!
 * Returns the DiveSettingsMessage data message's \c po2Warn field's current value.
 *
 * \return the \c po2Warn field value.
 */
quint8 DiveSettingsMessage::po2Warn() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Warn;
}

/*!
 * Returns the DiveSettingsMessage data message's \c po2Critical field's current value.
 *
 * \return the \c po2Critical field value.
 */
quint8 DiveSettingsMessage::po2Critical() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Critical;
}

/*!
 * Returns the DiveSettingsMessage data message's \c po2Deco field's current value.
 *
 * \return the \c po2Deco field value.
 */
quint8 DiveSettingsMessage::po2Deco() const
{
    Q_D(const DiveSettingsMessage);
    return d->po2Deco;
}

/*!
 * Returns the DiveSettingsMessage data message's \c safetyStopEnabled field's current value.
 *
 * \return the \c safetyStopEnabled field value.
 */
bool DiveSettingsMessage::safetyStopEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopEnabled;
}

/*!
 * Returns the DiveSettingsMessage data message's \c bottomDepth field's current value.
 *
 * \return the \c bottomDepth field value.
 */
float DiveSettingsMessage::bottomDepth() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomDepth;
}

/*!
 * Returns the DiveSettingsMessage data message's \c bottomTime field's current value.
 *
 * \return the \c bottomTime field value.
 */
quint32 DiveSettingsMessage::bottomTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->bottomTime;
}

/*!
 * Returns the DiveSettingsMessage data message's \c apneaCountdownEnabled field's current value.
 *
 * \return the \c apneaCountdownEnabled field value.
 */
bool DiveSettingsMessage::apneaCountdownEnabled() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownEnabled;
}

/*!
 * Returns the DiveSettingsMessage data message's \c apneaCountdownTime field's current value.
 *
 * \return the \c apneaCountdownTime field value.
 */
quint32 DiveSettingsMessage::apneaCountdownTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->apneaCountdownTime;
}

/*!
 * Returns the DiveSettingsMessage data message's \c backlightMode field's current value.
 *
 * \return the \c backlightMode field value.
 */
DiveBacklightMode DiveSettingsMessage::backlightMode() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightMode;
}

/*!
 * Returns the DiveSettingsMessage data message's \c backlightBrightness field's current value.
 *
 * \return the \c backlightBrightness field value.
 */
quint8 DiveSettingsMessage::backlightBrightness() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightBrightness;
}

/*!
 * Returns the DiveSettingsMessage data message's \c backlightTimeout field's current value.
 *
 * \return the \c backlightTimeout field value.
 */
BacklightTimeout DiveSettingsMessage::backlightTimeout() const
{
    Q_D(const DiveSettingsMessage);
    return d->backlightTimeout;
}

/*!
 * Returns the DiveSettingsMessage data message's \c repeatDiveInterval field's current value.
 *
 * \return the \c repeatDiveInterval field value.
 */
quint16 DiveSettingsMessage::repeatDiveInterval() const
{
    Q_D(const DiveSettingsMessage);
    return d->repeatDiveInterval;
}

/*!
 * Returns the DiveSettingsMessage data message's \c safetyStopTime field's current value.
 *
 * \return the \c safetyStopTime field value.
 */
quint16 DiveSettingsMessage::safetyStopTime() const
{
    Q_D(const DiveSettingsMessage);
    return d->safetyStopTime;
}

/*!
 * Returns the DiveSettingsMessage data message's \c heartRateSourceType field's current value.
 *
 * \return the \c heartRateSourceType field value.
 */
SourceType DiveSettingsMessage::heartRateSourceType() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSourceType;
}

/*!
 * Returns the DiveSettingsMessage data message's \c heartRateSource field's current value.
 *
 * \return the \c heartRateSource field value.
 */
quint8 DiveSettingsMessage::heartRateSource() const
{
    Q_D(const DiveSettingsMessage);
    return d->heartRateSource;
}

/*!
 * Sets the \c messageIndex field to \a messageIndex.
 *
 * \param messageIndex The field value to set.
 */
void DiveSettingsMessage::setMessageIndex(const MessageIndex messageIndex)
{
    Q_D(DiveSettingsMessage);
    d->messageIndex = messageIndex;
}
/*!
 * Sets the \c name field to \a name.
 *
 * \param name The field value to set.
 */
void DiveSettingsMessage::setName(const QString name)
{
    Q_D(DiveSettingsMessage);
    d->name = name;
}
/*!
 * Sets the \c model field to \a model.
 *
 * \param model The field value to set.
 */
void DiveSettingsMessage::setModel(const TissueModelType model)
{
    Q_D(DiveSettingsMessage);
    d->model = model;
}
/*!
 * Sets the \c gfLow field to \a gfLow.
 *
 * \param gfLow The field value to set.
 */
void DiveSettingsMessage::setGfLow(const quint8 gfLow)
{
    Q_D(DiveSettingsMessage);
    d->gfLow = gfLow;
}
/*!
 * Sets the \c gfHigh field to \a gfHigh.
 *
 * \param gfHigh The field value to set.
 */
void DiveSettingsMessage::setGfHigh(const quint8 gfHigh)
{
    Q_D(DiveSettingsMessage);
    d->gfHigh = gfHigh;
}
/*!
 * Sets the \c waterType field to \a waterType.
 *
 * \param waterType The field value to set.
 */
void DiveSettingsMessage::setWaterType(const WaterType waterType)
{
    Q_D(DiveSettingsMessage);
    d->waterType = waterType;
}
/*!
 * Sets the \c waterDensity field to \a waterDensity.
 *
 * \param waterDensity The field value to set.
 */
void DiveSettingsMessage::setWaterDensity(const float waterDensity)
{
    Q_D(DiveSettingsMessage);
    d->waterDensity = waterDensity;
}
/*!
 * Sets the \c po2Warn field to \a po2Warn.
 *
 * \param po2Warn The field value to set.
 */
void DiveSettingsMessage::setPo2Warn(const quint8 po2Warn)
{
    Q_D(DiveSettingsMessage);
    d->po2Warn = po2Warn;
}
/*!
 * Sets the \c po2Critical field to \a po2Critical.
 *
 * \param po2Critical The field value to set.
 */
void DiveSettingsMessage::setPo2Critical(const quint8 po2Critical)
{
    Q_D(DiveSettingsMessage);
    d->po2Critical = po2Critical;
}
/*!
 * Sets the \c po2Deco field to \a po2Deco.
 *
 * \param po2Deco The field value to set.
 */
void DiveSettingsMessage::setPo2Deco(const quint8 po2Deco)
{
    Q_D(DiveSettingsMessage);
    d->po2Deco = po2Deco;
}
/*!
 * Sets the \c safetyStopEnabled field to \a safetyStopEnabled.
 *
 * \param safetyStopEnabled The field value to set.
 */
void DiveSettingsMessage::setSafetyStopEnabled(const bool safetyStopEnabled)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopEnabled = safetyStopEnabled;
}
/*!
 * Sets the \c bottomDepth field to \a bottomDepth.
 *
 * \param bottomDepth The field value to set.
 */
void DiveSettingsMessage::setBottomDepth(const float bottomDepth)
{
    Q_D(DiveSettingsMessage);
    d->bottomDepth = bottomDepth;
}
/*!
 * Sets the \c bottomTime field to \a bottomTime.
 *
 * \param bottomTime The field value to set.
 */
void DiveSettingsMessage::setBottomTime(const quint32 bottomTime)
{
    Q_D(DiveSettingsMessage);
    d->bottomTime = bottomTime;
}
/*!
 * Sets the \c apneaCountdownEnabled field to \a apneaCountdownEnabled.
 *
 * \param apneaCountdownEnabled The field value to set.
 */
void DiveSettingsMessage::setApneaCountdownEnabled(const bool apneaCountdownEnabled)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownEnabled = apneaCountdownEnabled;
}
/*!
 * Sets the \c apneaCountdownTime field to \a apneaCountdownTime.
 *
 * \param apneaCountdownTime The field value to set.
 */
void DiveSettingsMessage::setApneaCountdownTime(const quint32 apneaCountdownTime)
{
    Q_D(DiveSettingsMessage);
    d->apneaCountdownTime = apneaCountdownTime;
}
/*!
 * Sets the \c backlightMode field to \a backlightMode.
 *
 * \param backlightMode The field value to set.
 */
void DiveSettingsMessage::setBacklightMode(const DiveBacklightMode backlightMode)
{
    Q_D(DiveSettingsMessage);
    d->backlightMode = backlightMode;
}
/*!
 * Sets the \c backlightBrightness field to \a backlightBrightness.
 *
 * \param backlightBrightness The field value to set.
 */
void DiveSettingsMessage::setBacklightBrightness(const quint8 backlightBrightness)
{
    Q_D(DiveSettingsMessage);
    d->backlightBrightness = backlightBrightness;
}
/*!
 * Sets the \c backlightTimeout field to \a backlightTimeout.
 *
 * \param backlightTimeout The field value to set.
 */
void DiveSettingsMessage::setBacklightTimeout(const BacklightTimeout backlightTimeout)
{
    Q_D(DiveSettingsMessage);
    d->backlightTimeout = backlightTimeout;
}
/*!
 * Sets the \c repeatDiveInterval field to \a repeatDiveInterval.
 *
 * \param repeatDiveInterval The field value to set.
 */
void DiveSettingsMessage::setRepeatDiveInterval(const quint16 repeatDiveInterval)
{
    Q_D(DiveSettingsMessage);
    d->repeatDiveInterval = repeatDiveInterval;
}
/*!
 * Sets the \c safetyStopTime field to \a safetyStopTime.
 *
 * \param safetyStopTime The field value to set.
 */
void DiveSettingsMessage::setSafetyStopTime(const quint16 safetyStopTime)
{
    Q_D(DiveSettingsMessage);
    d->safetyStopTime = safetyStopTime;
}
/*!
 * Sets the \c heartRateSourceType field to \a heartRateSourceType.
 *
 * \param heartRateSourceType The field value to set.
 */
void DiveSettingsMessage::setHeartRateSourceType(const SourceType heartRateSourceType)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSourceType = heartRateSourceType;
}
/*!
 * Sets the \c heartRateSource field to \a heartRateSource.
 *
 * \param heartRateSource The field value to set.
 */
void DiveSettingsMessage::setHeartRateSource(const quint8 heartRateSource)
{
    Q_D(DiveSettingsMessage);
    d->heartRateSource = heartRateSource;
}

/// \cond internal

/*!
 * \internal
 *
 * \class DiveSettingsMessagePrivate
 *
 * The DiveSettingsMessagePrivate class provides private implementation for the DiveSettingsMessage.
 *
 * \sa DiveSettingsMessage
 */

/*!
 * \internal
 *
 * Constructs a DiveSettingsMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DiveSettingsMessagePrivate::DiveSettingsMessagePrivate(DiveSettingsMessage * const q)
  : AbstractDataMessagePrivate(q)
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

/*!
 * \internal
 *
 * Destroys the DiveSettingsMessagePrivate object.
 */
DiveSettingsMessagePrivate::~DiveSettingsMessagePrivate()
{

}

bool DiveSettingsMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 254: // See Profile.xlsx::Messages:dive_settings.messageIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.messageIndex")) return false;
        this->messageIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_settings.name
        if (!verify(data, baseType, 1, FitBaseType::String, "dive_settings.name")) return false;
        this->name = QString::fromUtf8(data);
        break;
    case 1: // See Profile.xlsx::Messages:dive_settings.model
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.model")) return false;
        this->model = static_cast<TissueModelType>(data.at(0));
        break;
    case 2: // See Profile.xlsx::Messages:dive_settings.gfLow
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.gfLow")) return false;
        this->gfLow = static_cast<quint8>(data.at(0));
        break;
    case 3: // See Profile.xlsx::Messages:dive_settings.gfHigh
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.gfHigh")) return false;
        this->gfHigh = static_cast<quint8>(data.at(0));
        break;
    case 4: // See Profile.xlsx::Messages:dive_settings.waterType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.waterType")) return false;
        this->waterType = static_cast<WaterType>(data.at(0));
        break;
    case 5: // See Profile.xlsx::Messages:dive_settings.waterDensity
        if (!verify(data, baseType, 4, FitBaseType::Float32, "dive_settings.waterDensity")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->waterDensity) == 4, "src and dst not the same size");
            memcpy(&this->waterDensity, &localEndian, data.size());
        }
        #else
        this->waterDensity = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 6: // See Profile.xlsx::Messages:dive_settings.po2Warn
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Warn")) return false;
        this->po2Warn = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:dive_settings.po2Critical
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Critical")) return false;
        this->po2Critical = static_cast<quint8>(data.at(0));
        break;
    case 8: // See Profile.xlsx::Messages:dive_settings.po2Deco
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.po2Deco")) return false;
        this->po2Deco = static_cast<quint8>(data.at(0));
        break;
    case 9: // See Profile.xlsx::Messages:dive_settings.safetyStopEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "dive_settings.safetyStopEnabled")) return false;
        this->safetyStopEnabled = static_cast<bool>(data.at(0));
        break;
    case 10: // See Profile.xlsx::Messages:dive_settings.bottomDepth
        if (!verify(data, baseType, 4, FitBaseType::Float32, "dive_settings.bottomDepth")) return false;
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint32 localEndian = bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data);
            static_assert(sizeof(localEndian) == 4, "src not expected size");
            static_assert(sizeof(this->bottomDepth) == 4, "src and dst not the same size");
            memcpy(&this->bottomDepth, &localEndian, data.size());
        }
        #else
        this->bottomDepth = static_cast<float>(bigEndian ? qFromBigEndian<float>(data) : qFromLittleEndian<float>(data));
        #endif
        break;
    case 11: // See Profile.xlsx::Messages:dive_settings.bottomTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_settings.bottomTime")) return false;
        this->bottomTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 12: // See Profile.xlsx::Messages:dive_settings.apneaCountdownEnabled
        if (!verify(data, baseType, 0, FitBaseType::Byte, "dive_settings.apneaCountdownEnabled")) return false;
        this->apneaCountdownEnabled = static_cast<bool>(data.at(0));
        break;
    case 13: // See Profile.xlsx::Messages:dive_settings.apneaCountdownTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_settings.apneaCountdownTime")) return false;
        this->apneaCountdownTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 14: // See Profile.xlsx::Messages:dive_settings.backlightMode
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.backlightMode")) return false;
        this->backlightMode = static_cast<DiveBacklightMode>(data.at(0));
        break;
    case 15: // See Profile.xlsx::Messages:dive_settings.backlightBrightness
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.backlightBrightness")) return false;
        this->backlightBrightness = static_cast<quint8>(data.at(0));
        break;
    case 16: // See Profile.xlsx::Messages:dive_settings.backlightTimeout
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.backlightTimeout")) return false;
        this->backlightTimeout = static_cast<BacklightTimeout>(data.at(0));
        break;
    case 17: // See Profile.xlsx::Messages:dive_settings.repeatDiveInterval
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.repeatDiveInterval")) return false;
        this->repeatDiveInterval = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 18: // See Profile.xlsx::Messages:dive_settings.safetyStopTime
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_settings.safetyStopTime")) return false;
        this->safetyStopTime = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 19: // See Profile.xlsx::Messages:dive_settings.heartRateSourceType
        if (!verify(data, baseType, 1, FitBaseType::Enum, "dive_settings.heartRateSourceType")) return false;
        this->heartRateSourceType = static_cast<SourceType>(data.at(0));
        break;
    case 20: // See Profile.xlsx::Messages:dive_settings.heartRateSource
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_settings.heartRateSource")) return false;
        this->heartRateSource = static_cast<quint8>(data.at(0));
        break;
    default:
        qWarning() << "ignoring unknown dive_settings message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
