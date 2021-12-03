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
 * Declares the DiveSummaryMessage class.
 */

#ifndef QTFIT_DIVESUMMARYMESSAGE_H
#define QTFIT_DIVESUMMARYMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class DiveSummaryMessagePrivate;

class QTFIT_EXPORT DiveSummaryMessage : public AbstractDataMessage {

public:
    DiveSummaryMessage();
    ~DiveSummaryMessage();

    DateTime timestamp() const;
    MesgNum referenceMesg() const;
    MessageIndex referenceIndex() const;
    quint32 avgDepth() const;
    quint32 maxDepth() const;
    quint32 surfaceInterval() const;
    quint8 startCns() const;
    quint8 endCns() const;
    quint16 startN2() const;
    quint16 endN2() const;
    quint16 o2Toxicity() const;
    quint32 diveNumber() const;
    quint32 bottomTime() const;
    qint32 avgAscentRate() const;
    quint32 avgDescentRate() const;
    quint32 maxAscentRate() const;
    quint32 maxDescentRate() const;
    quint32 hangTime() const;

    void setTimestamp(const DateTime timestamp);
    void setReferenceMesg(const MesgNum referenceMesg);
    void setReferenceIndex(const MessageIndex referenceIndex);
    void setAvgDepth(const quint32 avgDepth);
    void setMaxDepth(const quint32 maxDepth);
    void setSurfaceInterval(const quint32 surfaceInterval);
    void setStartCns(const quint8 startCns);
    void setEndCns(const quint8 endCns);
    void setStartN2(const quint16 startN2);
    void setEndN2(const quint16 endN2);
    void setO2Toxicity(const quint16 o2Toxicity);
    void setDiveNumber(const quint32 diveNumber);
    void setBottomTime(const quint32 bottomTime);
    void setAvgAscentRate(const qint32 avgAscentRate);
    void setAvgDescentRate(const quint32 avgDescentRate);
    void setMaxAscentRate(const quint32 maxAscentRate);
    void setMaxDescentRate(const quint32 maxDescentRate);
    void setHangTime(const quint32 hangTime);

protected:
    /// \cond internal
    explicit DiveSummaryMessage(DiveSummaryMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(DiveSummaryMessage)
  //Q_DISABLE_COPY(DiveSummaryMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVESUMMARYMESSAGE_H
