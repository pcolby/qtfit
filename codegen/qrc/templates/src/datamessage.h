{% include "license.txt" %}
{% include "autogen.txt" %}
#ifndef {{ProjectName|upper}}_{{ClassName|upper}}_H
#define {{ProjectName|upper}}_{{ClassName|upper}}_H

#include "abstractdatamessage.h"

{{ProjectName|upper}}_BEGIN_NAMESPACE

class {{ClassName}}Private;

class {{ProjectName|upper}}_EXPORT {{ClassName}} : public AbstractDataMessage {

public:
    {{ClassName}}();
    ~{{ClassName}}();

{% for field in fields %}
    {{field.cppType}} {{field.name}}() const;
{% endfor %}

{% for field in fields %}
    void set{{field.name|capfirst}}(const {{field.cppType}} {{field.name}});
{% endfor %}

protected:
    /// \cond internal
    explicit {{ClassName}}({{ClassName}}Private * const d);
    /// \endcond

private:
    Q_DECLARE_PRIVATE({{ClassName}})
  //Q_DISABLE_COPY({{ClassName}})

};

{{ProjectName|upper}}_END_NAMESPACE

#endif // {{ProjectName|upper}}_{{FileName|upper}}_H
