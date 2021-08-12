#!/usr/bin/env bash
#
# First export the Types tab from the FIT SDK's Profile.xls file,
# as a tab-separated-values file, to types.tsv, then:
#
# ./types.sh > types.h
#

set -o errexit -o noclobber -o nounset -o pipefail

[[ -e 'types.tsv' ]] || { echo 'Export the Types tab to types.tsv first.' >&2; exit; }

cat copyright.cpp

echo "$(cat <<-"-"

	#ifndef QTFIT_TYPES_H
	#define QTFIT_TYPES_H

	#include "QtFit_global.h"

	#include <QtGlobal>

	QTFIT_BEGIN_NAMESPACE

	typedef quint8  quint8z;
	typedef quint16 quint16z;
	typedef quint32 quint32z;
	typedef quint64 quint64z;
-
)"
echo

gawk -F '\t' "$(cat <<-"-"
  NR > 1 {
    if ($1 != "") {
      printEnumEntries()
      maxIndex = 0
      delete entries
      delete maxLengths
      baseType = ($2 == "enum") ? "" : " : q"$2
      if (length($5) > 0) print "/// " $5
      printf "enum class %s%s {\n",toCamelCase(typeName = $1),baseType
    } else {
      maxIndex++;
      entries[maxIndex]["name"] = safeEnumLabel(toCamelCase($3))
      entries[maxIndex]["value"] = $4
      entries[maxIndex]["comment"] = ($5 == "") ? "" : " ///< " $5
      if (length($3) > maxLengths["name" ]) maxLengths["name" ] = length($3)
      if (length($4) > maxLengths["value"]) maxLengths["value"] = length($4)
    }
  }

  END {
    printEnumEntries()
  }

  function printEnumEntries() {
      for (i = 1; i <= maxIndex; ++i) {
        format = sprintf("    %%-%ds = %%+%ds,%%s\n",maxLengths["name"],maxLengths["value"])
        printf format,entries[i]["name"],entries[i]["value"],entries[i]["comment"]
      }
      if ($1 != typeName && typeName != "") {
        printf "};\n\n"
      }
  }

  function safeEnumLabel(label) {
    # We could do a lot more here, but for now just handle the known cases.
    sub(/^30/,"Thirty"   ,label)
    sub(/^45/,"FortyFive",label)
    sub(/^90/,"Ninety"   ,label)
    sub(/^1/, "One"      ,label)
    sub(/^3/, "Three"    ,label)
    sub(/^4/, "Four"     ,label)
    return label
  }

  function toCamelCase(label, _count, _result) {
    _count = split(label,parts,/_/)
    for (i = 1; i <= _count; ++i) {
      _result = _result toupper(substr(parts[i],1,1)) tolower(substr(parts[i],2))
    }
    return _result
  }
-
)" types.tsv

echo "$(cat <<-"-"
	QTFIT_END_NAMESPACE

	#endif // QTFIT_TYPES_H
-
)"
