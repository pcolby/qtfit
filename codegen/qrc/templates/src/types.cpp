{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * \todo Document this.
 */

#include "types.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

{% for type in types %}{% if type.values %}{% with type as enum %}
QDebug operator<<(QDebug debug, const {{enum.typeName}} value)
{
    switch (value) {
{% for value in enum.values %}
{% if value.comment != "Deprecated use hourly_forecast instead" %}
    case {{enum.typeName}}::{{value.valueName|ljust:enum.maxValueNameLength}}: debug << "{{value.valueName}}"; break;
{% endif %}
{% endfor %}
    default: debug << "unknown";
    }
    return debug;
}
{% endwith %}{% endif %}{% endfor %}
{{ProjectName|upper}}_END_NAMESPACE
