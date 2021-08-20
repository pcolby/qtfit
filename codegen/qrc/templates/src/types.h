{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * Types defined by the ANT+ FIT SDK.
 *
 * Specifically these types are automatically generated from the Types tab of the FIT SDK's
 * Profile.xlsx file.
 *
 * \see https://developer.garmin.com/fit/download/
 */

#ifndef {{ProjectName|upper}}_{{FileName|upper}}_H
#define {{ProjectName|upper}}_{{FileName|upper}}_H

#include "{{ProjectName}}_global.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

typedef quint8  quint8z;
typedef quint16 quint16z;
typedef quint32 quint32z;
typedef quint64 quint64z;
{% for enum in enums %}{% if enum.comment %}
/// {{enum.comment}}{% endif %}
enum class {{enum.typeName}} {% if enum.baseType != "enum" %}: q{{enum.baseType}} {% endif %}{
{% for value in enum.values %}
    {{value.valueName|ljust:enum.maxValueNameLength}} = {{value.value|rjust:enum.maxValueValueLength}},{% if value.comment %} ///< {{value.comment}}{% endif %}
{% endfor %}
};

{% endfor %}
{{ProjectName|upper}}_END_NAMESPACE

#endif // {{ProjectName|upper}}_{{FileName|upper}}_H