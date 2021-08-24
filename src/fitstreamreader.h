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
