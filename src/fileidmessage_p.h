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

#ifndef FILEIDMESSAGE_P_H
#define FILEIDMESSAGE_P_H

#include "QtFit_global.h"

QTFIT_BEGIN_NAMESPACE

class FileIdMessage;

class FileIdMessagePrivate {

public:
    /// @todo Generate members.
//    static int qMetaTypeId;
//    quint8 type;
//    quint16 manufacturer; // Make enum.
//    quint16 product;
//    quint32 serialNumber;
//    QDateTime timeCreated;
//    quint16 number;
//    QString productName;

    FileIdMessagePrivate() = delete;
    explicit FileIdMessagePrivate(FileIdMessage * const q);

    virtual ~FileIdMessagePrivate();

protected:
    FileIdMessage * const q_ptr; ///< Internal q-pointer.

    bool setField(const int fieldId, const QByteArray data, baseType) override;

private:
    Q_DECLARE_PUBLIC(FileIdMessage)
    Q_DISABLE_COPY(FileIdMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // FILEIDMESSAGE_P_H
