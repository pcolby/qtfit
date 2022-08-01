// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the DiveSummaryMessagePrivate class.
 */
#ifndef QTFIT_DIVESUMMARYMESSAGE_P_H
#define QTFIT_DIVESUMMARYMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class DiveSummaryMessage;

class DiveSummaryMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The DiveSummaryMessage FIT message's timestamp field.
     */
    DateTime timestamp;

    /*!
     * The DiveSummaryMessage FIT message's referenceMesg field.
     */
    MesgNum referenceMesg;

    /*!
     * The DiveSummaryMessage FIT message's referenceIndex field.
     */
    MessageIndex referenceIndex;

    /*!
     * The DiveSummaryMessage FIT message's avgDepth field.
     *
     * 0 if above water
     */
    quint32 avgDepth;

    /*!
     * The DiveSummaryMessage FIT message's maxDepth field.
     *
     * 0 if above water
     */
    quint32 maxDepth;

    /*!
     * The DiveSummaryMessage FIT message's surfaceInterval field.
     *
     * Time since end of last dive
     */
    quint32 surfaceInterval;

    /*!
     * The DiveSummaryMessage FIT message's startCns field.
     */
    quint8 startCns;

    /*!
     * The DiveSummaryMessage FIT message's endCns field.
     */
    quint8 endCns;

    /*!
     * The DiveSummaryMessage FIT message's startN2 field.
     */
    quint16 startN2;

    /*!
     * The DiveSummaryMessage FIT message's endN2 field.
     */
    quint16 endN2;

    /*!
     * The DiveSummaryMessage FIT message's o2Toxicity field.
     */
    quint16 o2Toxicity;

    /*!
     * The DiveSummaryMessage FIT message's diveNumber field.
     */
    quint32 diveNumber;

    /*!
     * The DiveSummaryMessage FIT message's bottomTime field.
     */
    quint32 bottomTime;

    /*!
     * The DiveSummaryMessage FIT message's avgAscentRate field.
     *
     * Average ascent rate, not including descents or stops
     */
    qint32 avgAscentRate;

    /*!
     * The DiveSummaryMessage FIT message's avgDescentRate field.
     *
     * Average descent rate, not including ascents or stops
     */
    quint32 avgDescentRate;

    /*!
     * The DiveSummaryMessage FIT message's maxAscentRate field.
     *
     * Maximum ascent rate
     */
    quint32 maxAscentRate;

    /*!
     * The DiveSummaryMessage FIT message's maxDescentRate field.
     *
     * Maximum descent rate
     */
    quint32 maxDescentRate;

    /*!
     * The DiveSummaryMessage FIT message's hangTime field.
     *
     * Time spent neither ascending nor descending
     */
    quint32 hangTime;

    DiveSummaryMessagePrivate() = delete;
    explicit DiveSummaryMessagePrivate(DiveSummaryMessage * const q);
    virtual ~DiveSummaryMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(DiveSummaryMessage)
    Q_DISABLE_COPY(DiveSummaryMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_DIVESUMMARYMESSAGE_P_H
