// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * \note This file is automatcially generated. Any changes here are likely to be overwritten.
 */

/*!
 * \file
 * Declares the NmeaSentenceMessage class.
 */

#ifndef QTFIT_NMEASENTENCEMESSAGE_H
#define QTFIT_NMEASENTENCEMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class NmeaSentenceMessagePrivate;

class QTFIT_EXPORT NmeaSentenceMessage : public AbstractDataMessage {

public:
    NmeaSentenceMessage();
    ~NmeaSentenceMessage();

    DateTime timestamp() const;
    quint16 timestampMs() const;
    QString sentence() const;

    void setTimestamp(const DateTime timestamp);
    void setTimestampMs(const quint16 timestampMs);
    void setSentence(const QString sentence);

protected:
    /// \cond internal
    explicit NmeaSentenceMessage(NmeaSentenceMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(NmeaSentenceMessage)
  //Q_DISABLE_COPY(NmeaSentenceMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_NMEASENTENCEMESSAGE_H
