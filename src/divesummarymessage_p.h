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
