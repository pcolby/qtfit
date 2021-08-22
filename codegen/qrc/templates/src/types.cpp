{% include "license.txt" %}
{% include "autogen.txt" %}
/*!
 * \file
 *
 * QDebug stream operators for types defined by the ANT+ FIT SDK.
 *
 * Specifically, `operator<<` for all enumerator types found in the types.h header.
 *
 * \sa [QDebug - Writing Custom Types to a Stream (Qt5)](https://doc.qt.io/qt-5/qdebug.html#writing-custom-types-to-a-stream)
 * \sa [QDebug - Writing Custom Types to a Stream (Qt6)](https://doc.qt.io/qt-6/qdebug.html#writing-custom-types-to-a-stream)
 */

#include "types.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE
{% for type in types %}{% if type.values %}{% with type as enum %}
/*!
 * Writes the {{enum.typeName}} \a value to the \a debug stream and returns a reference to the stream.
 *
 * \param debug Debug stream to write \a value to.
 * \param value Value to write to \a debug.
 *
 * \return a reference to the \a debug stream.
 */
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
