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

#include "fileidmessage.h"
#include "fileidmessage_p.h"

#include <QDebug>

QTFIT_BEGIN_NAMESPACE

FileIdMessagePrivate::FileIdMessagePrivate(FileIdMessage * const q) : q_ptr(q)
{

}


//    FitFileIdMessage(const QByteArray data, const FieldDefinitionList &fieldDefs, arch)
//        : AbstractFitMessage(0, data, defn)
//    {

//    }

/// @todo Generate implementation.
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

QTFIT_END_NAMESPACE
