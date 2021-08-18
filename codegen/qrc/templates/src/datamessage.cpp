{% include "license.txt" %}
{% include "autogen.txt" %}
#include "{{ClassName|lower}}.h"
#include "{{ClassName|lower}}_p.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

{{ClassName}}::{{ClassName}}() : FitDataMessage(new {{ClassName}}Private(this))
{
  /// \todo Set global message number.
}

{{ClassName}}Private::{{ClassName}}Private({{ClassName}} * const q) : FitDataMessagePrivate(q)
{

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
