# SLHAea - containers for SUSY Les Houches Accord input/output
[![Build Status](https://travis-ci.org/fthomas/slhaea.png?branch=master)](https://travis-ci.org/fthomas/slhaea)

## Introduction

SLHAea is an easy to use C++ library for input, output, and
manipulation of data in the [SUSY Les Houches Accord][] (SLHA). It is
based on the concept that a SLHA structure is a container of blocks,
which are then again containers of lines, which are then again
containers of strings.

Its main features are:

- fast reading and writing of SLHA files
- easy access to individual blocks, lines, and fields
- three containers (``Coll``, ``Block``, and ``Line``) that mimic the
  containers of the C++ Standard Library and therefore offer great
  flexibility
- the exact formatting of lines is preserved
- everything is stored as strings, so data is not restricted to floats
  or integers
- no precision is lost in read/write cycles of unmodified data
- blocks and lines are not restricted to the ones specified in the
  [SLHA][], [SLHA2][], and [FLHA][] or later accords that use the same
  syntax
- easy to use since SLHAea is a header-only library consisting of only
  one file

[SUSY Les Houches Accord]: http://home.fnal.gov/~skands/slha/
[SLHA]:  http://arxiv.org/abs/hep-ph/0311123
[SLHA2]: http://arxiv.org/abs/0801.0045
[FLHA]:  http://arxiv.org/abs/1008.0762

## Documentation

The API documentation is [here][]. It includes some [practical
examples][] which can also be found in the [doc/examples/][] directory
in SLHAea's source tree.

[here]: http://fthomas.github.io/slhaea/doc/api-html/
[practical examples]: http://fthomas.github.io/slhaea/doc/api-html/examples.html
[doc/examples/]: http://github.com/fthomas/slhaea/tree/master/doc/examples/

## Dependencies

To use SLHAea only the C++ Standard Library and some headers from the
[Boost C++ Libraries][] are required.

[Boost C++ Libraries]: http://www.boost.org/

## Download

You can download SLHAea in either [tar.gz][] or [zip][] formats.

[tar.gz]: http://github.com/fthomas/slhaea/tarball/master
[zip]:    http://github.com/fthomas/slhaea/zipball/master

The version control system used for development of SLHAea is Git. The
[Git repository][] can be inspected and browsed online at GitHub and it
can be cloned by running:

    git clone git://github.com/fthomas/slhaea.git

[Git repository]: http://github.com/fthomas/slhaea

## Issues and feedback

For bug reports, feature requests, or general feedback either use the
[issue tracker][] or [write me an email][].

[issue tracker]: http://github.com/fthomas/slhaea/issues
[write me an email]: <mailto:frank@timepit.eu>

## License

SLHAea is [free software][] and licensed under the [Boost Software
License 1.0][]. The full text of the license can be found in the file
``LICENSE_1_0.txt`` in SLHAea's source tree.

[free software]: http://www.gnu.org/philosophy/free-sw.html
[Boost Software License 1.0]: http://www.boost.org/users/license.html

## Author

SLHAea was written by Frank S. Thomas <<frank@timepit.eu>>.
