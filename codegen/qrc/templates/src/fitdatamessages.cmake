# This file is automatcially generated. Any changes here are likely to be overwritten.
cmake_policy(SET CMP0076 NEW)
target_sources({{TargetName}}
{% for name in classNames %}
  PUBLIC ${CMAKE_SOURCE_DIR}/include/qtfit/{{name|lower}}.h
{% endfor %}
{% for name in classNames %}
  PRIVATE {{name|lower}}.cpp
{% endfor %}
{% for name in classNames %}
  PRIVATE {{name|lower}}_p.h
{% endfor %}
)
