{% include "license.txt" %}
{% include "autogen.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

{{ClassName}}::{{ClassName}}() : FitDataMessage(new {{ClassName}}Private(this))
{

}

{% for field in fields %}
{{field.type}} {{ClassName}}::{{field.name}}() const
{
    Q_D(const {{ClassName}});
    return d->{{field.name}};
}

{% endfor %}
{% for field in fields %}
void {{ClassName}}::set{{field.name|capfirst}}(const {{field.type}} {{field.name}})
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

/// @todo Generate implementation.
bool {{ClassName}}Private::setField(const int fieldId, const QByteArray data, int baseType)
{
//    #define SET_FIELD(id,name,type)
//      case id: name = fromFitValue<type>(data, baseType)

//    switch fieldId {
//        case 0: type         = fromFitValue<quint8 >(data, baseType); break;
//        case 1: manufactuter = fromFitValue<quint16>(data, baseType); break;
//        SET_FIT_MESSAGE_FIELD(0, type,        quint8 ); break;
//        SET_FIT_MESSAGE_FIELD(1, manufacture, quint16); break;
//        default:
//            qWarning() << "Unknown field definition number" << fieldId
//                       << "for" << messageName();
//            return false;
//    }
    return FitDataMessagePrivate::setField(fieldId, data, baseType);
}

{{ProjectName|upper}}_END_NAMESPACE
