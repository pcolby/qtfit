{% include "license.txt" %}
{% include "autogen.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

#include <QDebug>
#include <QtEndian>

{{ProjectName|upper}}_BEGIN_NAMESPACE

{{ClassName}}::{{ClassName}}() : FitDataMessage(new {{ClassName}}Private(this))
{

}

{% for field in fields %}
{{field.cppType}} {{ClassName}}::{{field.name}}() const
{
    Q_D(const {{ClassName}});
    return d->{{field.name}};
}

{% endfor %}
{% for field in fields %}
void {{ClassName}}::set{{field.name|capfirst}}(const {{field.cppType}} {{field.name}})
{
    Q_D({{ClassName}});
    d->{{field.name}} = {{field.name}};
}
{% endfor %}

{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q)
  : FitDataMessagePrivate(q)
{% for field in fields %}
{% if field.defaultValue %}
  , {{field.name}}({{field.defaultValue}})
{% endif %}
{% endfor %}
{
    globalMessageNumber = MesgNum::{{MesgNumLabel}};
}

{{ClassName}}Private::~{{ClassName}}Private()
{

}

bool {{ClassName}}Private::setField(
    const int fieldId, const QByteArray &data, const FitBaseType baseType, const bool bigEndian)
{
    switch (fieldId) {
{% for field in fields %}
    case {{field.number}}: // See Profile.xlsx::Messages:{{messageName}}.{{field.name}}
        if (baseType != FitBaseType::{{field.baseTypeEnumLabel}}) {
            /// \todo Add toString function for baseType.
            qWarning() << "{{messageName}}.{{field.name}} has base type" << static_cast<int>(baseType) << "but should be {{field.baseTypeEnumLabel}}";
            return false;
        }
        if (data.size() != {{field.baseTypeSize}}) {
            qWarning() << "{{messageName}}.{{field.name}} size is" << data.size() << "but should be" << {{field.baseTypeSize}};
            return false;
        }
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
        qWarning() << "unknown {{messageName}} message field number" << fieldId;
        return FitDataMessagePrivate::setField(fieldId, data, baseType, bigEndian);
    }
    return true;
}

{{ProjectName|upper}}_END_NAMESPACE
