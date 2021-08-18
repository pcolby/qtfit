{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * \todo Document this.
 */

#include "fitdatamessage.h"
#include "fitdatamessage_p.h"

{% for enum in enums %}
{% if enum.typeName == "MesgNum" %}
{% for value in enum.values|dictsort:"valueName" %}
{% if value.valueName == "Pad" or value.valueName == "MfgRangeMin" or value.valueName == "MfgRangeMax" %}//{% endif %}#include "{{value.valueName|lower}}message.h"
{% endfor %}
{% endif %}
{% endfor %}

{{ProjectName|upper}}_BEGIN_NAMESPACE

FitDataMessage * FitDataMessage::fromData(const DataDefinition * const defn, const QByteArray &record)
{
    Q_ASSERT(defn);
    FitDataMessage * message = nullptr;
    switch (defn->globalMessageNumber) {
{% for enum in enums %}
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
