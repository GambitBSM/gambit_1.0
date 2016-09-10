# Script to replace all occurrences of a string in all files in all GAMBIT source/config files.

FIND="const Spectrum\*"
REPLACE="\/\*TAG\*\/ Spectrum"

find . -type f \
 -not -path "./doc/*" \
 -not -path "./build/*" \
 -not -path "./Backends/*" \
 -not -path "./.git/*" \
 -not -path "./runs/*" \
 -not -path "./contrib/*" \
 -not -path "./scratch/*" \
 -not -name "*.sw*" \
 -not -name "*.o" \
 -not -name "*.sh" \
| xargs grep -l "$FIND" \
| xargs sed -i "s/$FIND/$REPLACE/g"

