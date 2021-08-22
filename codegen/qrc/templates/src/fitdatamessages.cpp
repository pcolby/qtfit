{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * Provides the AbstractDataMessage::fromData implementation.
 *
 * This is kept in a separate file so it can be safely code-generated. And also to avoid polluting
 * the abstractdatamessage.cpp file with \c \#includes for the ~100 or so AbstractDataMessage
 * descendants.
 */

#include "abstractdatamessage.h"
#include "abstractdatamessage_p.h"

{% for enum in types %}
{% if enum.typeName == "MesgNum" %}
{% for value in enum.values|dictsort:"valueName" %}
{% if value.valueName == "Pad" or value.valueName == "MfgRangeMin" or value.valueName == "MfgRangeMax" %}//{% endif %}#include "{{value.valueName|lower}}message.h"
{% endfor %}
{% endif %}
{% endfor %}

{{ProjectName|upper}}_BEGIN_NAMESPACE

/*!
 * Constructs the relevant AbstractDataMessage-derived class to parse \a record according to \a defn.
 *
 * \param defn   Definition data describing the FIT \a record.
 * \param record FIT data record to parse.
 *
 * \return an instance of a AbstractDataMessage-derived class, or \c nullptr if \a record could not be parsed.
 */
AbstractDataMessage * AbstractDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    AbstractDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
{% for enum in types %}
{% if enum.typeName == "MesgNum" %}
{% for value in enum.values %}
{% if value.valueName == "Pad" %}
    case MesgNum::{{value.valueName|ljust:enum.maxValueNameLength}}: message = nullptr; break;
{% elif value.valueName == "MfgRangeMin" or value.valueName == "MfgRangeMax" %}
    case MesgNum::{{value.valueName|ljust:enum.maxValueNameLength}}: message = nullptr; break;
{% else %}
    case MesgNum::{{value.valueName|ljust:enum.maxValueNameLength}}: message = new {{value.valueName|add:"Message"|ljust:enum.maxValueNameLength}}; break;
{% endif %}
{% endfor %}
{% endif %}
{% endfor %}
    }
    if (message) {
        message->d_ptr->setFields(defn, record);
    }
    return message;
}

{{ProjectName|upper}}_END_NAMESPACE
