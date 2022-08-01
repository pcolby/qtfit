// SPDX-FileCopyrightText: 2021-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

/*!
 * \file
 * Declares the FitStreamReader class.
 */

#ifndef FITSTREAMREADER_H
#define FITSTREAMREADER_H

#include "abstractdatamessage.h"

#include <QIODevice>
#include <QVersionNumber>

QTFIT_BEGIN_NAMESPACE

class FitStreamReaderPrivate;

class QTFIT_EXPORT FitStreamReader {

public:
    FitStreamReader();
    explicit FitStreamReader(const QByteArray &data);
    explicit FitStreamReader(QIODevice *device);
    ~FitStreamReader();

    void addData(const QByteArray &data);
    bool atEnd() const;
    void clear();
    QIODevice *device() const;
    // [enum] Error error() const; or lastError?
    // QString errorString() const;
    void setDevice(QIODevice *device);

//    quint8 headerSize() const;
    QVersionNumber protocolVersion() const;
    QVersionNumber profileVersion() const;
//    quint32 expectedDataSize() const;
//    quint32 expectedChecksum() const;

    AbstractDataMessage * readNext(); // Will consume the file header, defn records, and data message headers.

protected:
    /// \cond internal
    FitStreamReaderPrivate * const d_ptr; ///< Internal d-pointer.
    explicit FitStreamReader(FitStreamReaderPrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FitStreamReader)
    Q_DISABLE_COPY(FitStreamReader)

};

QTFIT_END_NAMESPACE

#endif // FITSTREAMREADER_H
