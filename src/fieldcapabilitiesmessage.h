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
 * Declares the FieldCapabilitiesMessage class.
 */

#ifndef QTFIT_FIELDCAPABILITIESMESSAGE_H
#define QTFIT_FIELDCAPABILITIESMESSAGE_H

#include "abstractdatamessage.h"

QTFIT_BEGIN_NAMESPACE

class FieldCapabilitiesMessagePrivate;

class QTFIT_EXPORT FieldCapabilitiesMessage : public AbstractDataMessage {

public:
    FieldCapabilitiesMessage();
    ~FieldCapabilitiesMessage();

    MessageIndex messageIndex() const;
    File file() const;
    MesgNum mesgNum() const;
    quint8 fieldNum() const;
    quint16 count() const;

    void setMessageIndex(const MessageIndex messageIndex);
    void setFile(const File file);
    void setMesgNum(const MesgNum mesgNum);
    void setFieldNum(const quint8 fieldNum);
    void setCount(const quint16 count);

protected:
    /// \cond internal
    explicit FieldCapabilitiesMessage(FieldCapabilitiesMessagePrivate * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE(FieldCapabilitiesMessage)
  //Q_DISABLE_COPY(FieldCapabilitiesMessage)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_FIELDCAPABILITIESMESSAGE_H
