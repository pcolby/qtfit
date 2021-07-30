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

#include <QHash>
#include <QVersionNumber>

QTFIT_BEGIN_NAMESPACE

class FitStreamReader;

/// @todo do we need to QTFIT_EXPORT this?
class FitStreamReaderPrivate {

public:
    explicit FitStreamReaderPrivate(FitStreamReader * const q);
    virtual ~FitStreamReaderPrivate();

    bool parseFileHeader();

protected:
    FitStreamReader * const q_ptr; ///< Internal q-pointer.

private:
    quint8 headerSize;
    QVersionNumber protocolVersion;
    QVersionNumber profileVersion;
    quint32 expectedDataSize;
    quint32 expectedChecksum;

    QHash<int, DataDefintion> DataDefintions; ///< Local message types to current data definitions.
    QHash<int, int> RecordSizes; ///< Local message types to current record sizes.

    Q_DECLARE_PUBLIC(FitStreamReader)
    Q_DISABLE_COPY(FitStreamReaderPrivate)

};

QTFIT_END_NAMESPACE

#endif // FITSTREAMREADER_P_H
