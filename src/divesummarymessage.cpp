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

#include "divesummarymessage.h"
#include "divesummarymessage_p.h"

#include <QDebug>
#include <QtEndian>

QTFIT_BEGIN_NAMESPACE

DiveSummaryMessage::DiveSummaryMessage() : FitDataMessage(new DiveSummaryMessagePrivate(this))
{

}

DateTime DiveSummaryMessage::timestamp() const
{
    Q_D(const DiveSummaryMessage);
    return d->timestamp;
}

MesgNum DiveSummaryMessage::referenceMesg() const
{
    Q_D(const DiveSummaryMessage);
    return d->referenceMesg;
}

MessageIndex DiveSummaryMessage::referenceIndex() const
{
    Q_D(const DiveSummaryMessage);
    return d->referenceIndex;
}

quint32 DiveSummaryMessage::avgDepth() const
{
    Q_D(const DiveSummaryMessage);
    return d->avgDepth;
}

quint32 DiveSummaryMessage::maxDepth() const
{
    Q_D(const DiveSummaryMessage);
    return d->maxDepth;
}

quint32 DiveSummaryMessage::surfaceInterval() const
{
    Q_D(const DiveSummaryMessage);
    return d->surfaceInterval;
}

quint8 DiveSummaryMessage::startCns() const
{
    Q_D(const DiveSummaryMessage);
    return d->startCns;
}

quint8 DiveSummaryMessage::endCns() const
{
    Q_D(const DiveSummaryMessage);
    return d->endCns;
}

quint16 DiveSummaryMessage::startN2() const
{
    Q_D(const DiveSummaryMessage);
    return d->startN2;
}

quint16 DiveSummaryMessage::endN2() const
{
    Q_D(const DiveSummaryMessage);
    return d->endN2;
}

quint16 DiveSummaryMessage::o2Toxicity() const
{
    Q_D(const DiveSummaryMessage);
    return d->o2Toxicity;
}

quint32 DiveSummaryMessage::diveNumber() const
{
    Q_D(const DiveSummaryMessage);
    return d->diveNumber;
}

quint32 DiveSummaryMessage::bottomTime() const
{
    Q_D(const DiveSummaryMessage);
    return d->bottomTime;
}

void DiveSummaryMessage::setTimestamp(const DateTime timestamp)
{
    Q_D(DiveSummaryMessage);
    d->timestamp = timestamp;
}
void DiveSummaryMessage::setReferenceMesg(const MesgNum referenceMesg)
{
    Q_D(DiveSummaryMessage);
    d->referenceMesg = referenceMesg;
}
void DiveSummaryMessage::setReferenceIndex(const MessageIndex referenceIndex)
{
    Q_D(DiveSummaryMessage);
    d->referenceIndex = referenceIndex;
}
void DiveSummaryMessage::setAvgDepth(const quint32 avgDepth)
{
    Q_D(DiveSummaryMessage);
    d->avgDepth = avgDepth;
}
void DiveSummaryMessage::setMaxDepth(const quint32 maxDepth)
{
    Q_D(DiveSummaryMessage);
    d->maxDepth = maxDepth;
}
void DiveSummaryMessage::setSurfaceInterval(const quint32 surfaceInterval)
{
    Q_D(DiveSummaryMessage);
    d->surfaceInterval = surfaceInterval;
}
void DiveSummaryMessage::setStartCns(const quint8 startCns)
{
    Q_D(DiveSummaryMessage);
    d->startCns = startCns;
}
void DiveSummaryMessage::setEndCns(const quint8 endCns)
{
    Q_D(DiveSummaryMessage);
    d->endCns = endCns;
}
void DiveSummaryMessage::setStartN2(const quint16 startN2)
{
    Q_D(DiveSummaryMessage);
    d->startN2 = startN2;
}
void DiveSummaryMessage::setEndN2(const quint16 endN2)
{
    Q_D(DiveSummaryMessage);
    d->endN2 = endN2;
}
void DiveSummaryMessage::setO2Toxicity(const quint16 o2Toxicity)
{
    Q_D(DiveSummaryMessage);
    d->o2Toxicity = o2Toxicity;
}
void DiveSummaryMessage::setDiveNumber(const quint32 diveNumber)
{
    Q_D(DiveSummaryMessage);
    d->diveNumber = diveNumber;
}
void DiveSummaryMessage::setBottomTime(const quint32 bottomTime)
{
    Q_D(DiveSummaryMessage);
    d->bottomTime = bottomTime;
}

DiveSummaryMessagePrivate::DiveSummaryMessagePrivate(DiveSummaryMessage * const q)
  : FitDataMessagePrivate(q)
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
{
    globalMessageNumber = MesgNum::DiveSummary;
}

DiveSummaryMessagePrivate::~DiveSummaryMessagePrivate()
{

}

bool DiveSummaryMessagePrivate::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
    case 253: // See Profile.xlsx::Messages:dive_summary.timestamp
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.timestamp has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.timestamp size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->timestamp = static_cast<DateTime>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 0: // See Profile.xlsx::Messages:dive_summary.referenceMesg
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.referenceMesg has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_summary.referenceMesg size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->referenceMesg = static_cast<MesgNum>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 1: // See Profile.xlsx::Messages:dive_summary.referenceIndex
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.referenceIndex has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_summary.referenceIndex size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->referenceIndex = static_cast<MessageIndex>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 2: // See Profile.xlsx::Messages:dive_summary.avgDepth
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.avgDepth has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.avgDepth size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->avgDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 3: // See Profile.xlsx::Messages:dive_summary.maxDepth
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.maxDepth has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.maxDepth size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->maxDepth = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 4: // See Profile.xlsx::Messages:dive_summary.surfaceInterval
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.surfaceInterval has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.surfaceInterval size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->surfaceInterval = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 5: // See Profile.xlsx::Messages:dive_summary.startCns
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.startCns has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_summary.startCns size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->startCns = static_cast<quint8>(data.at(0));
        break;
    case 6: // See Profile.xlsx::Messages:dive_summary.endCns
        if (baseType != FitBaseType::Uint8) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.endCns has base type" << static_cast<int>(baseType) << "but should be Uint8";
            return false;
        }
        if (data.size() != 1) {
            qWarning() << "dive_summary.endCns size is" << data.size() << "but should be" << 1;
            return false;
        }
        this->endCns = static_cast<quint8>(data.at(0));
        break;
    case 7: // See Profile.xlsx::Messages:dive_summary.startN2
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.startN2 has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_summary.startN2 size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->startN2 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 8: // See Profile.xlsx::Messages:dive_summary.endN2
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.endN2 has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_summary.endN2 size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->endN2 = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 9: // See Profile.xlsx::Messages:dive_summary.o2Toxicity
        if (baseType != FitBaseType::Uint16) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.o2Toxicity has base type" << static_cast<int>(baseType) << "but should be Uint16";
            return false;
        }
        if (data.size() != 2) {
            qWarning() << "dive_summary.o2Toxicity size is" << data.size() << "but should be" << 2;
            return false;
        }
        this->o2Toxicity = static_cast<quint16>(bigEndian ? qFromBigEndian<quint16>(data) : qFromLittleEndian<quint16>(data));
        break;
    case 10: // See Profile.xlsx::Messages:dive_summary.diveNumber
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.diveNumber has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.diveNumber size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->diveNumber = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    case 11: // See Profile.xlsx::Messages:dive_summary.bottomTime
        if (baseType != FitBaseType::Uint32) {
            /// \todo Add toString function for baseType.
            qWarning() << "dive_summary.bottomTime has base type" << static_cast<int>(baseType) << "but should be Uint32";
            return false;
        }
        if (data.size() != 4) {
            qWarning() << "dive_summary.bottomTime size is" << data.size() << "but should be" << 4;
            return false;
        }
        this->bottomTime = static_cast<quint32>(bigEndian ? qFromBigEndian<quint32>(data) : qFromLittleEndian<quint32>(data));
        break;
    default:
        qWarning() << "unknown dive_summary message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

QTFIT_END_NAMESPACE
