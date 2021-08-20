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

/// @todo Generate implementation.
bool DiveSummaryMessagePrivate::setField(const int fieldId, const QByteArray data, int baseType)
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
