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

#include "QtFit_global.h"
#include "types.h"

#include <QByteArray>
#include <QIODevice>
#include <QHash>
#include <QList>
#include <QVersionNumber>

QTFIT_BEGIN_NAMESPACE

enum class Architecture : quint8 {
    LitteEndian = 0,
    BigEndian = 1,
};

struct FieldDefinition {

};

struct DeveloperFieldDefinition {

};

typedef QList<FieldDefinition> FieldDefinitionList;

struct MessageDefintion {
    quint8 globalType;
    Architecture arch;
    FieldDefinitionList defns;
};

class QTFIT_EXPORT FitStreamReader {
public:
    struct FieldDefinition {
        quint8 number; // FieldDefNum is what the cpp sdk uses.
        quint8 size;
        quint8 type; // make enum
    };

    struct DataDefintion {
        Architecture architecture;
        MesgNum globalMessageNumber;
        QList<FieldDefinition> fieldDefinitions;
        QList<DeveloperFieldDefinition> developerFieldDefinitions;
    };

    FitStreamReader();
    FitStreamReader(const QByteArray &data);
    FitStreamReader(QIODevice *device);
    ~FitStreamReader();

    void addData(const QByteArray &data);
    bool atEnd() const;
    void clear();
    QIODevice *device() const;
    // [enum] Error error() const; or lastError?
    QString errorString() const;
    void setDevice(QIODevice *device);

    quint8 headerSize() const;
    QVersionNumber protocolVersion() const;
    QVersionNumber profileVersion() const;
    quint32 expectedDataSize() const;
    quint32 expectedChecksum() const;

    // move to private
    QHash<int, DataDefintion> DataDefintions;
    QHash<int, int> RecordSizes; // Hash of local message types to record sizes.

    struct DataMessage {
        quint8 localMessageType; // 0xFF == invalid
        quint8 timestampOffset; // Valid range is 0 to 31; anything outside this is invalid.
        QByteArray recordContent; // empty -> invalid.
    };

    DataDefintion getDefinition(const quint8 localMessageType) const;

    DataMessage readNext(); // Will consume the file header, defn records, and data message headers.

    bool parse(const QByteArray &data) const; /// @todo Remove this (just for experimentation for now).
};

QTFIT_END_NAMESPACE

#endif // FITSTREAMREADER_H




//class QFIT_EXPORT AbstractFitMessage {
//public:
//    const quint8 globalMessageNumber() const; // eg 0 = file_id, 207 = developer_data_id

//protected:
//    AbstractFitMessage(quint8 msgNumber) : globaleMessageNumber(msgNumber) { }

//    virtual bool setField(const int fieldId, const QByteArray data, baseType) = 0;

//    bool setFields(const QByteArray dataRecord, const MessageDefintion &defn) {
//        Q_ASSERT(defn.globalType == this.globalMessageNumber);
//        for (field in dfn) {
//            setField(id, data, type);
//        }
//    }
//}

//class QFIT_EXPORT FitFileIdMessage : public AbstractFitMessage {
//public:
//    static int qMetaTypeId;
//    quint8 type;
//    quint16 manufacturer; // Make enum.
//    quint16 product;
//    quint32 serialNumber;
//    QDateTime timeCreated;
//    quint16 number;
//    QString productName;

//    FitFileIdMessage(const QByteArray data, const FieldDefinitionList &fieldDefs, arch)
//        : AbstractFitMessage(0, data, defn)
//    {

//    }

//    bool setField(const int fieldId, const QByteArray data, baseType) override {
//        #define SET_FIELD(id,name,type)
//          case id: name = fromFitValue<type>(data, baseType)

//        switch fieldId {
//            case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//            case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//            SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//            SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//            default:
//                qWarning() << "Unknown field definition number" << fieldId
//                           << "for" << messageName();
//                return false;
//        }
//        return true;
//    }
//}

//FileIdMessage::qMetaTypeId = qMetaTypeid(fit::FileIdMessage);

//class QFIT_EXPORT FitDeveloperDataId : public AbstractFitMessage {
//public:
//    quint8[] developerId;
//    quint8[] applicationId;
//    quint16 manufacturerId; // make enum?
//    // ...
//}
