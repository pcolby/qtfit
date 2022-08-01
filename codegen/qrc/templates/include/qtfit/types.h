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

#include <QDebug>

{{ProjectName|upper}}_BEGIN_NAMESPACE

typedef quint8  quint8z;  ///<  8-bit unsigned integer, with 0-is-invalid semantics.
typedef quint16 quint16z; ///< 16-bit unsigned integer, with 0-is-invalid semantics.
typedef quint32 quint32z; ///< 32-bit unsigned integer, with 0-is-invalid semantics.
typedef quint64 quint64z; ///< 64-bit unsigned integer, with 0-is-invalid semantics.

{% for type in types %}
/*!
 * {% if type.comment %}{{type.comment|capfirst}}{% else %}Garmin FIT {{type.typeName}} type.{% endif %}
 *
 * This type was auto-extracted from the Types worksheet in the Garmin FIT SDK's Profiles.xlsx
 * spreadsheet. More information of the definition and semantics of this type may be available in
 * the Garmin FIT SDK.
 *
 * \sa [Garmin FIT SDK](https://developer.garmin.com/fit/)
 */
{% if type.values %}{% with type as enum %}enum class {{enum.typeName}} {% if enum.baseType != "enum" %}: q{{enum.baseType}} {% endif %}{
{% for value in enum.values %}
    {{value.valueName|ljust:enum.maxValueNameLength}} = {{value.value|rjust:enum.maxValueValueLength}},{% if value.comment %} ///< {{value.comment}}{% endif %}
{% endfor %}
};
{% endwith %}{% else %}typedef q{{type.baseType}} {{type.typeName}};

{% endif %}
{% endfor %}
{% for type in types %}{% if type.values %}
QDebug operator<<(QDebug debug, const {{type.typeName}} value);{% endif %}{% endfor %}

{{ProjectName|upper}}_END_NAMESPACE

#endif // {{ProjectName|upper}}_{{FileName|upper}}_H
