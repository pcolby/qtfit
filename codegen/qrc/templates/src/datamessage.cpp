{% include "license.txt" %}
{% include "autogen.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QtEndian>

{{ProjectName|upper}}_BEGIN_NAMESPACE

/*!
 * \class {{ClassName}}
 *
 * The {{ClassName}} class represents a FIT {{ClassName}} data message.
 *
 * \sa DataMessage
 */

/*!
 * Constructs an invalid {{ClassName}} object.
 *
 * Typically, instances of this class will be returned by FitStreamReader::readNext, but this
 * constructor may be used, along with the relevant setter methods, to create a valid message.
 */
{{ClassName}}::{{ClassName}}() : AbstractDataMessage(new {{ClassName}}Private(this))
{

}

{% for field in fields %}
/*!
 * Returns the {{ClassName}} data message's \c {{field.name}} field's current value.
 *
 * \return the \c {{field.name}} field value.
 */
{{field.cppType}} {{ClassName}}::{{field.name}}() const
{
    Q_D(const {{ClassName}});
    return d->{{field.name}};
}

{% endfor %}
{% for field in fields %}
/*!
 * Sets the \c {{field.name}} field to \a {{field.name}}.
 *
 * \param {{field.name}} The field value to set.
 */
void {{ClassName}}::set{{field.name|capfirst}}(const {{field.cppType}} {{field.name}})
{
    Q_D({{ClassName}});
    d->{{field.name}} = {{field.name}};
}
{% endfor %}

/*!
 * \internal
 *
 * \class {{ClassName}}Private
 *
 * The {{ClassName}}Private class provides private implementation for the {{ClassName}}.
 *
 * \sa {{ClassName}}
 */

/*!
 * \internal
 *
 * Constructs a {{ClassName}}Private object with public implementation \a q.
 *
 * \param q Pointer to public implementaton.
 */
{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q)
  : AbstractDataMessagePrivate(q)
{% for field in fields %}
{% if field.defaultValue %}
  , {{field.name}}({{field.defaultValue}})
{% endif %}
{% endfor %}
{
    globalMessageNumber = MesgNum::{{MesgNumLabel}};
}

/*!
 * \internal
 *
 * Destroys the {{ClassName}}Private object.
 */
{{ClassName}}Private::~{{ClassName}}Private()
{

}

bool {{ClassName}}Private::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
{% for field in fields %}
    case {{field.number}}: // See Profile.xlsx::Messages:{{messageName}}.{{field.name}}
        if (!verify(data, baseType, {{field.baseTypeSize}}, FitBaseType::{{field.baseTypeEnumLabel}}, "{{messageName}}.{{field.name}}")) return false;
{% if field.endianAbility %}
  {% if field.endianAbility == "float" or field.endianAbility == "double" %}
        #if QT_VERSION < QT_VERSION_CHECK(5, 12, 0)
        {   // Qt's from-endian functions have no float/double specialisations prior to Qt 5.12.
            const quint{% if field.endianAbility == "float" %}32{% else %}64{% endif %} localEndian = bigEndian ? qFromBigEndian<quint{% if field.endianAbility == "float" %}32{% else %}64{% endif %}>(data) : qFromLittleEndian<quint{% if field.endianAbility == "float" %}32{% else %}64{% endif %}>(data);
            static_assert(sizeof(localEndian) == {{field.baseTypeSize}}, "src not expected size");
            static_assert(sizeof(this->{{field.name}}) == {{field.baseTypeSize}}, "src and dst not the same size");
            memcpy(&this->{{field.name}}, &localEndian, data.size());
        }
        #else
  {% endif %}
        this->{{field.name}} = static_cast<{{field.cppType}}>(bigEndian ? qFromBigEndian<{{field.endianAbility}}>(data) : qFromLittleEndian<{{field.endianAbility}}>(data));
  {% if field.endianAbility == "float" or field.endianAbility == "double" %}
        #endif
   {% endif %}
{% elif field.baseType == "string" %}
        this->{{field.name}} = QString::fromUtf8(data);
{% else %}
        this->{{field.name}} = static_cast<{{field.cppType}}>(data.at(0));
{% endif %}
        break;
{% endfor %}
    default:
        qWarning() << "ignoring unknown {{messageName}} message field number" << fieldId << bigEndian;
        // Fall through to return true, as its still 'safe' to continue parsing data messages.
    }
    return true;
}

{{ProjectName|upper}}_END_NAMESPACE
