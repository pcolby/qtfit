{% include "license.txt" %}
{% include "autogen.txt" %}
#ifndef {{ProjectName|upper}}_{{ClassName|upper}}_P_H
#define {{ProjectName|upper}}_{{ClassName|upper}}_P_H

#include "fitdatamessage_p.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

class {{ClassName}};

class {{ClassName}}Private : public FitDataMessagePrivate {

public:
{% for field in fields %}
    {{field.type}} {{field.name}};
{% endfor %}

    {{ClassName}}Private() = delete;
    explicit {{ClassName}}Private({{ClassName}} * const q);
    virtual ~{{ClassName}}Private();

protected:
    /// @todo Make base type enum.
    bool setField(const int fieldId, const QByteArray data, int baseType) override;

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

{{ProjectName|upper}}_END_NAMESPACE

#endif // {{ProjectName|upper}}_{{FileName|upper}}_H
