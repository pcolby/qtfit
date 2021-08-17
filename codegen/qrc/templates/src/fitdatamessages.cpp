{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * \todo Document this.
 */

#include "fitdatamessage.h"
#include "fitdatamessage_p.h"

// include all other message type headers.
#include "fileidmessage.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

FitDataMessage * FitDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    FitDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
    case MesgNum::FileId: message = new fit::FileIdMessage; break;
    /// \todo Auto-generate case statements for all message types.
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

{{ProjectName|upper}}_END_NAMESPACE
