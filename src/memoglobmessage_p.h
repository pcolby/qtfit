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
 * Declares the MemoGlobMessagePrivate class.
 */
#ifndef QTFIT_MEMOGLOBMESSAGE_P_H
#define QTFIT_MEMOGLOBMESSAGE_P_H

#include "abstractdatamessage_p.h"

QTFIT_BEGIN_NAMESPACE

class MemoGlobMessage;

class MemoGlobMessagePrivate : public AbstractDataMessagePrivate {

public:
    /*!
     * The MemoGlobMessage FIT message's partIndex field.
     *
     * Sequence number of memo blocks
     */
    quint32 partIndex;

    /*!
     * The MemoGlobMessage FIT message's memo field.
     *
     * Block of utf8 bytes
     */
    quint8 memo;

    /*!
     * The MemoGlobMessage FIT message's messageNumber field.
     *
     * Allows relating glob to another mesg  If used only required for first part of each memo_glob
     */
    quint16 messageNumber;

    /*!
     * The MemoGlobMessage FIT message's messageIndex field.
     *
     * Index of external mesg
     */
    MessageIndex messageIndex;

    MemoGlobMessagePrivate() = delete;
    explicit MemoGlobMessagePrivate(MemoGlobMessage * const q);
    virtual ~MemoGlobMessagePrivate();

protected:
    bool setField(const int fieldId, const QByteArray &data,
                  const FitBaseType baseType, const bool bigEndian) override;

private:
    Q_DECLARE_PUBLIC(MemoGlobMessage)
    Q_DISABLE_COPY(MemoGlobMessagePrivate)

};

QTFIT_END_NAMESPACE

#endif // QTFIT_MEMOGLOBMESSAGE_P_H
