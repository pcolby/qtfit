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

#ifndef FITSTREAMREADER_P_H
#define FITSTREAMREADER_P_H

#include "types_p.h"

#include <QByteArray>
#include <QHash>
#include <QIODevice>
#include <QVersionNumber>

QTFIT_BEGIN_NAMESPACE

class AbstractDataMessage;
class FitStreamReader;

class FitStreamReaderPrivate {

public:
#if QT_VERSION >= QT_VERSION_CHECK(6, 0, 0)
    typedef qsizetype size_t;
#else
    typedef int size_t;
#endif

    QByteArray data;
    size_t dataOffset;
    QIODevice *device;

    explicit FitStreamReaderPrivate(FitStreamReader * const q);
    virtual ~FitStreamReaderPrivate();

protected:
    FitStreamReader * const q_ptr; ///< Internal q-pointer.

    template<class T> size_t bytesAvailable() const;
    template<class T> bool parseFileHeader();
    template<class T> bool parseDefinitionMessage();
    template<class T> AbstractDataMessage * parseDataMessage();
    template<class T> quint8 peekByte(const int pos=0) const;
    template<class T> QByteArray readBytes(const size_t size);
    template<class T> QByteArray readFileHeader();
    template<class T> AbstractDataMessage * readNextDataMessage();

    static inline bool isDefinitionMessage(const quint8 recordHeader);

private:
//    quint8 headerSize;
    QVersionNumber protocolVersion;
    QVersionNumber profileVersion;
    quint32 expectedDataSize;
//    quint32 expectedChecksum;

    QHash<int, DataDefinition> dataDefinitions; ///< Local message types to current data definitions.
    QHash<int, int> recordSizes; ///< Local message types to current record sizes.

    Q_DECLARE_PUBLIC(FitStreamReader)
    Q_DISABLE_COPY(FitStreamReaderPrivate)

};

QTFIT_END_NAMESPACE

#endif // FITSTREAMREADER_P_H
