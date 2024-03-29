// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Defines the DiveSummaryMessage, and DiveSummaryMessagePrivate classes.
 */

#include <qtfit/divesummarymessage.h>
#include "divesummarymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

/*!
 * \class DiveSummaryMessage
 *
 * The DiveSummaryMessage class represents a FIT DiveSummaryMessage data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs a DiveSummaryMessage object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
DiveSummaryMessage::DiveSummaryMessage() : AbstractDataMessage(new DiveSummaryMessagePrivate(this))
{

}

/*!
 * \internal
 *
 * Constructs a DiveSummaryMessage object with private implementation \a d.
 *
 * \param d Pointer to private implementation.
 */
DiveSummaryMessage::DiveSummaryMessage(DiveSummaryMessagePrivate * const d) : AbstractDataMessage(d)
{

}

/*!
 * Returns the DiveSummaryMessage data message's \c timestamp field's current value.
 *
 * \return the \c timestamp field value.
 */
DateTime DiveSummaryMessage::timestamp() const
{
    Q_D(const DiveSummaryMessage);
    return d->timestamp;
}

/*!
 * Returns the DiveSummaryMessage data message's \c referenceMesg field's current value.
 *
 * \return the \c referenceMesg field value.
 */
MesgNum DiveSummaryMessage::referenceMesg() const
{
    Q_D(const DiveSummaryMessage);
    return d->referenceMesg;
}

/*!
 * Returns the DiveSummaryMessage data message's \c referenceIndex field's current value.
 *
 * \return the \c referenceIndex field value.
 */
MessageIndex DiveSummaryMessage::referenceIndex() const
{
    Q_D(const DiveSummaryMessage);
    return d->referenceIndex;
}

/*!
 * Returns the DiveSummaryMessage data message's \c avgDepth field's current value.
 *
 * 0 if above water
 *
 * \return the \c avgDepth field value.
 */
quint32 DiveSummaryMessage::avgDepth() const
{
    Q_D(const DiveSummaryMessage);
    return d->avgDepth;
}

/*!
 * Returns the DiveSummaryMessage data message's \c maxDepth field's current value.
 *
 * 0 if above water
 *
 * \return the \c maxDepth field value.
 */
quint32 DiveSummaryMessage::maxDepth() const
{
    Q_D(const DiveSummaryMessage);
    return d->maxDepth;
}

/*!
 * Returns the DiveSummaryMessage data message's \c surfaceInterval field's current value.
 *
 * Time since end of last dive
 *
 * \return the \c surfaceInterval field value.
 */
quint32 DiveSummaryMessage::surfaceInterval() const
{
    Q_D(const DiveSummaryMessage);
    return d->surfaceInterval;
}

/*!
 * Returns the DiveSummaryMessage data message's \c startCns field's current value.
 *
 * \return the \c startCns field value.
 */
quint8 DiveSummaryMessage::startCns() const
{
    Q_D(const DiveSummaryMessage);
    return d->startCns;
}

/*!
 * Returns the DiveSummaryMessage data message's \c endCns field's current value.
 *
 * \return the \c endCns field value.
 */
quint8 DiveSummaryMessage::endCns() const
{
    Q_D(const DiveSummaryMessage);
    return d->endCns;
}

/*!
 * Returns the DiveSummaryMessage data message's \c startN2 field's current value.
 *
 * \return the \c startN2 field value.
 */
quint16 DiveSummaryMessage::startN2() const
{
    Q_D(const DiveSummaryMessage);
    return d->startN2;
}

/*!
 * Returns the DiveSummaryMessage data message's \c endN2 field's current value.
 *
 * \return the \c endN2 field value.
 */
quint16 DiveSummaryMessage::endN2() const
{
    Q_D(const DiveSummaryMessage);
    return d->endN2;
}

/*!
 * Returns the DiveSummaryMessage data message's \c o2Toxicity field's current value.
 *
 * \return the \c o2Toxicity field value.
 */
quint16 DiveSummaryMessage::o2Toxicity() const
{
    Q_D(const DiveSummaryMessage);
    return d->o2Toxicity;
}

/*!
 * Returns the DiveSummaryMessage data message's \c diveNumber field's current value.
 *
 * \return the \c diveNumber field value.
 */
quint32 DiveSummaryMessage::diveNumber() const
{
    Q_D(const DiveSummaryMessage);
    return d->diveNumber;
}

/*!
 * Returns the DiveSummaryMessage data message's \c bottomTime field's current value.
 *
 * \return the \c bottomTime field value.
 */
quint32 DiveSummaryMessage::bottomTime() const
{
    Q_D(const DiveSummaryMessage);
    return d->bottomTime;
}

/*!
 * Returns the DiveSummaryMessage data message's \c avgAscentRate field's current value.
 *
 * Average ascent rate, not including descents or stops
 *
 * \return the \c avgAscentRate field value.
 */
qint32 DiveSummaryMessage::avgAscentRate() const
{
    Q_D(const DiveSummaryMessage);
    return d->avgAscentRate;
}

/*!
 * Returns the DiveSummaryMessage data message's \c avgDescentRate field's current value.
 *
 * Average descent rate, not including ascents or stops
 *
 * \return the \c avgDescentRate field value.
 */
quint32 DiveSummaryMessage::avgDescentRate() const
{
    Q_D(const DiveSummaryMessage);
    return d->avgDescentRate;
}

/*!
 * Returns the DiveSummaryMessage data message's \c maxAscentRate field's current value.
 *
 * Maximum ascent rate
 *
 * \return the \c maxAscentRate field value.
 */
quint32 DiveSummaryMessage::maxAscentRate() const
{
    Q_D(const DiveSummaryMessage);
    return d->maxAscentRate;
}

/*!
 * Returns the DiveSummaryMessage data message's \c maxDescentRate field's current value.
 *
 * Maximum descent rate
 *
 * \return the \c maxDescentRate field value.
 */
quint32 DiveSummaryMessage::maxDescentRate() const
{
    Q_D(const DiveSummaryMessage);
    return d->maxDescentRate;
}

/*!
 * Returns the DiveSummaryMessage data message's \c hangTime field's current value.
 *
 * Time spent neither ascending nor descending
 *
 * \return the \c hangTime field value.
 */
quint32 DiveSummaryMessage::hangTime() const
{
    Q_D(const DiveSummaryMessage);
    return d->hangTime;
}

/*!
 * Sets the \c timestamp field to \a timestamp.
 *
 * \param timestamp The field value to set.
 */
void DiveSummaryMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(DiveSummaryMessage);
    d->timestamp = timestamp;
}
/*!
 * Sets the \c referenceMesg field to \a referenceMesg.
 *
 * \param referenceMesg The field value to set.
 */
void DiveSummaryMessage::setReferenceMesg(const MesgNum referenceMesg)
{
    Q_D(DiveSummaryMessage);
    d->referenceMesg = referenceMesg;
}
/*!
 * Sets the \c referenceIndex field to \a referenceIndex.
 *
 * \param referenceIndex The field value to set.
 */
void DiveSummaryMessage::setReferenceIndex(const MessageIndex referenceIndex)
{
    Q_D(DiveSummaryMessage);
    d->referenceIndex = referenceIndex;
}
/*!
 * Sets the \c avgDepth field to \a avgDepth.
 *
 * \param avgDepth The field value to set.
 */
void DiveSummaryMessage::setAvgDepth(const quint32 avgDepth)
{
    Q_D(DiveSummaryMessage);
    d->avgDepth = avgDepth;
}
/*!
 * Sets the \c maxDepth field to \a maxDepth.
 *
 * \param maxDepth The field value to set.
 */
void DiveSummaryMessage::setMaxDepth(const quint32 maxDepth)
{
    Q_D(DiveSummaryMessage);
    d->maxDepth = maxDepth;
}
/*!
 * Sets the \c surfaceInterval field to \a surfaceInterval.
 *
 * \param surfaceInterval The field value to set.
 */
void DiveSummaryMessage::setSurfaceInterval(const quint32 surfaceInterval)
{
    Q_D(DiveSummaryMessage);
    d->surfaceInterval = surfaceInterval;
}
/*!
 * Sets the \c startCns field to \a startCns.
 *
 * \param startCns The field value to set.
 */
void DiveSummaryMessage::setStartCns(const quint8 startCns)
{
    Q_D(DiveSummaryMessage);
    d->startCns = startCns;
}
/*!
 * Sets the \c endCns field to \a endCns.
 *
 * \param endCns The field value to set.
 */
void DiveSummaryMessage::setEndCns(const quint8 endCns)
{
    Q_D(DiveSummaryMessage);
    d->endCns = endCns;
}
/*!
 * Sets the \c startN2 field to \a startN2.
 *
 * \param startN2 The field value to set.
 */
void DiveSummaryMessage::setStartN2(const quint16 startN2)
{
    Q_D(DiveSummaryMessage);
    d->startN2 = startN2;
}
/*!
 * Sets the \c endN2 field to \a endN2.
 *
 * \param endN2 The field value to set.
 */
void DiveSummaryMessage::setEndN2(const quint16 endN2)
{
    Q_D(DiveSummaryMessage);
    d->endN2 = endN2;
}
/*!
 * Sets the \c o2Toxicity field to \a o2Toxicity.
 *
 * \param o2Toxicity The field value to set.
 */
void DiveSummaryMessage::setO2Toxicity(const quint16 o2Toxicity)
{
    Q_D(DiveSummaryMessage);
    d->o2Toxicity = o2Toxicity;
}
/*!
 * Sets the \c diveNumber field to \a diveNumber.
 *
 * \param diveNumber The field value to set.
 */
void DiveSummaryMessage::setDiveNumber(const quint32 diveNumber)
{
    Q_D(DiveSummaryMessage);
    d->diveNumber = diveNumber;
}
/*!
 * Sets the \c bottomTime field to \a bottomTime.
 *
 * \param bottomTime The field value to set.
 */
void DiveSummaryMessage::setBottomTime(const quint32 bottomTime)
{
    Q_D(DiveSummaryMessage);
    d->bottomTime = bottomTime;
}
/*!
 * Sets the \c avgAscentRate field to \a avgAscentRate.
 *
 * \param avgAscentRate The field value to set.
 */
void DiveSummaryMessage::setAvgAscentRate(const qint32 avgAscentRate)
{
    Q_D(DiveSummaryMessage);
    d->avgAscentRate = avgAscentRate;
}
/*!
 * Sets the \c avgDescentRate field to \a avgDescentRate.
 *
 * \param avgDescentRate The field value to set.
 */
void DiveSummaryMessage::setAvgDescentRate(const quint32 avgDescentRate)
{
    Q_D(DiveSummaryMessage);
    d->avgDescentRate = avgDescentRate;
}
/*!
 * Sets the \c maxAscentRate field to \a maxAscentRate.
 *
 * \param maxAscentRate The field value to set.
 */
void DiveSummaryMessage::setMaxAscentRate(const quint32 maxAscentRate)
{
    Q_D(DiveSummaryMessage);
    d->maxAscentRate = maxAscentRate;
}
/*!
 * Sets the \c maxDescentRate field to \a maxDescentRate.
 *
 * \param maxDescentRate The field value to set.
 */
void DiveSummaryMessage::setMaxDescentRate(const quint32 maxDescentRate)
{
    Q_D(DiveSummaryMessage);
    d->maxDescentRate = maxDescentRate;
}
/*!
 * Sets the \c hangTime field to \a hangTime.
 *
 * \param hangTime The field value to set.
 */
void DiveSummaryMessage::setHangTime(const quint32 hangTime)
{
    Q_D(DiveSummaryMessage);
    d->hangTime = hangTime;
}

/// \cond internal

/*!
 * \internal
 *
 * \class DiveSummaryMessagePrivate
 *
 * The DiveSummaryMessagePrivate class provides private implementation for the DiveSummaryMessage.
 *
 * \sa DiveSummaryMessage
 */

/*!
 * \internal
 *
 * Constructs a DiveSummaryMessagePrivate object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
DiveSummaryMessagePrivate::DiveSummaryMessagePrivate(DiveSummaryMessage * const q)
  : AbstractDataMessagePrivate(q)
  , timestamp(static_cast<DateTime>(-1))
  , referenceMesg(static_cast<MesgNum>(-1))
  , referenceIndex(static_cast<MessageIndex>(-1))
  , avgDepth(0xFFFFFFFF)
  , maxDepth(0xFFFFFFFF)
  , surfaceInterval(0xFFFFFFFF)
  , startCns(0xFF)
  , endCns(0xFF)
  , startN2(0xFFFF)
  , endN2(0xFFFF)
  , o2Toxicity(0xFFFF)
  , diveNumber(0xFFFFFFFF)
  , bottomTime(0xFFFFFFFF)
  , avgAscentRate(0x7FFFFFFF)
  , avgDescentRate(0xFFFFFFFF)
  , maxAscentRate(0xFFFFFFFF)
  , maxDescentRate(0xFFFFFFFF)
  , hangTime(0xFFFFFFFF)
{
    globalMessageNumber = MesgNum::DiveSummary;
}

/*!
 * \internal
 *
 * Destroys the DiveSummaryMessagePrivate object.
 */
DiveSummaryMessagePrivate::~DiveSummaryMessagePrivate()
{

}

bool DiveSummaryMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:dive_summary.timestamp
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.timestamp")) return false;
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_summary.referenceMesg
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_summary.referenceMesg")) return false;
        this->referenceMesg = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:dive_summary.referenceIndex
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_summary.referenceIndex")) return false;
        this->referenceIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:dive_summary.avgDepth
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.avgDepth")) return false;
        this->avgDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:dive_summary.maxDepth
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.maxDepth")) return false;
        this->maxDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:dive_summary.surfaceInterval
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.surfaceInterval")) return false;
        this->surfaceInterval = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:dive_summary.startCns
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_summary.startCns")) return false;
        this->startCns = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:dive_summary.endCns
        if (!verify(data, baseType, 1, FitBaseType::Uint8, "dive_summary.endCns")) return false;
        this->endCns = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:dive_summary.startN2
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_summary.startN2")) return false;
        this->startN2 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:dive_summary.endN2
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_summary.endN2")) return false;
        this->endN2 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:dive_summary.o2Toxicity
        if (!verify(data, baseType, 2, FitBaseType::Uint16, "dive_summary.o2Toxicity")) return false;
        this->o2Toxicity = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:dive_summary.diveNumber
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.diveNumber")) return false;
        this->diveNumber = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:dive_summary.bottomTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.bottomTime")) return false;
        this->bottomTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 17: // See Profile.xlsx::Messages:dive_summary.avgAscentRate
        if (!verify(data, baseType, 4, FitBaseType::Sint32, "dive_summary.avgAscentRate")) return false;
        this->avgAscentRate = static_cast<qint32>(bigEndian ? qFromBigEndian< qint32>(data) : qFromLittleEndian< qint32>(data));
        break;
    case 22: // See Profile.xlsx::Messages:dive_summary.avgDescentRate
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.avgDescentRate")) return false;
        this->avgDescentRate = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 23: // See Profile.xlsx::Messages:dive_summary.maxAscentRate
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.maxAscentRate")) return false;
        this->maxAscentRate = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 24: // See Profile.xlsx::Messages:dive_summary.maxDescentRate
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.maxDescentRate")) return false;
        this->maxDescentRate = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 25: // See Profile.xlsx::Messages:dive_summary.hangTime
        if (!verify(data, baseType, 4, FitBaseType::Uint32, "dive_summary.hangTime")) return false;
        this->hangTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "ignoring unknown dive_summary message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

/// \endcond

QTFIT_END_NAMESPACE
