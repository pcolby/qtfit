// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
