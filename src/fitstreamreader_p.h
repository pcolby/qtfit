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

#ifndef QTFIT_H
#define QTFIT_H

#include "QtFit_global.h"

#include <QByteArray>

class QTFIT_EXPORT QtFit
{
public:
    QtFit();
    bool parse(const QByteArray &data); /// @todo Just a hacky start; not an API ;)

};

class QtFitPrivate {
public:
    QtFitPrivate();
};

//class QTFIT_EXPORT FitStreamReader {
//    Q_OBJECT

//public:
//    FitStreamReader();
//    FitStreamReader(QIODevice *device);
//    FitStreamReader(const QByteArray &data);
//    FitStreamReader(const char *data);
//    ~FitStreamReader();

//    void addData(const QByteArray &data);
//    void addData(const char *data);

//    bool atEnd() const;

//    bool isFileHeader() const;
//    bool isDataRecord() const { return isDefinitionMessage() || isDataMessage(); }
//    bool isDefinitionMessage() const;
//    bool isDataMessage() const;
//    bool isFileCrc() const;

//    // Header

//    struct FitFileHeader {
//        quint8 headerSize;
//        quint8 protocolVersionMajor;
//        quint8 protocolVersionMinor;
//        quint16 profileVersionMajor;
//        quint8 profileVersionMinor;
//        quint32 dataSize;
//        QString dataType; // ".FIT"
//        quint32 crc;
//        QByteArray raw;
//    };

//    struct FitNormalRecordHeader {
//        enum messageType; // def vs data
//        // reserved stuff
//        bool hasDevMessage; // must be 0 if messageType is not def message.
//        quint8 localMessageType
//    };

//    struct FitCompressedTimestampHeader {
//        quint8 localMessageType;
//        quint32 timeOffset;
//    };

//    struct FitDataRecord {
//       QByteArray rawHeader;
//       quint8 localMessageType;
//    };

//    struct FitFieldDefinition {
//        quint8 fieldDefinitionNumber;
//        quint8 size;
//        quint8 baseType; // make enum?
//    };

//    struct FitDefinitionMessage : public FitDataRecord {
//        bool hasDevDataExtensions;
//        quint8 arch; // aka endianness
//        quint16 globalMessageNumber;
//        QList<FitFieldDefinition> fieldDefinitions;
//        QList<FitDevFieldDefinition> developerFieldDefinitions;
//    };

//    struct FitDataMessage : public FitDataRecord {
//        quint8 timeOffset;
//        QList<FitFieldDefinition> fields;
//    };

//    // DataR
//    // record header
//    // reserved byte
//    // arch byte
//    // glbal msg numer
//    // # of fields
//    // fields x N

//    // Def
//    // as above, plus:
//    // # of dev fields
//    // dev fields x N

//    // DataM


//    // Crc

//    void readNext();

//    bool parse(const QByteArray &data); /// @todo Just a hacky start; not an API ;)

//public signals:
//    void

//};

#endif // QTFIT_H
