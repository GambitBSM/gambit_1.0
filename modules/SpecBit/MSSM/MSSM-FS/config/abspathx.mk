# This module defines the `abspathx' wrapper function.
#
# The `abspathx' function takes the same arguments as the builtin
# `abspath' but prefixes special characters such as a whitespace with
# `\' in each path in the returned list.  For example, under
# /a/weird dir/, $(call abspathx,a b) expands to
# /a/weird\ dir/a /a/weird\ dir/b, which make understands as two
# absolute paths.
#
# Important note: `abspathx' does not handle a name containing a
# whitespace in its arguments, as there is no way to distinguish it
# from multiple names separated by whitespaces.  Therefore, one cannot
# use the above example to expand a single file named `a b'.

abspathx = $(foreach name,$(1),\
	$(shell echo '$(abspath $(name))' | sed s/\[\[:space:\]\]/\\\\\&/g))
