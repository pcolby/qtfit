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

bool {{ClassName}}Private::setField(const int fieldId, const QByteArray &data,
                                    const FitBaseType baseType, const bool bigEndian)
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
        {{field.name}} = static_cast<{{field.cppType}}>(bigEndian ? qFromBigEndian<{{field.cppType}}>(data) : qFromLittleEndian<{{field.cppType}}>(data));
{% elif field.baseType == "enum" %}
        {{field.name}} = static_cast<{{field.cppType}}>(data.at(0));
{% else %}
        {{field.name}} = static_cast<{{field.cppType}}>(data.at(0));
{% endif %}
        break;
{% endfor %}
    default:
        qWarning() << "unknown {{messageName}} message field number" << fieldId;
        return FitDataMessagePrivate::setField(number, data, baseType, bigEndian);
    }
    return true;
}

{{ProjectName|upper}}_END_NAMESPACE
