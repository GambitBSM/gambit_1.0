# yaml-cpp makefile for integration in GAMBIT
# for stripped down version of yaml-cpp 0.5.1
# Christoph Weniger 18 July 2013
#
# Edited - Abram Krislock January 2014
#     to work better with main makefile
#
# Edited - Pat Scott March, August 2014
#     to work with more typical Boost installations

YAML_SRC:=$(wildcard src/*.cpp) 
YAML_SRCCONT:=$(wildcard src/contrib/*.cpp)
YAML_LIBS:=$(addprefix build/,$(notdir $(patsubst %.cpp,%.o,$(YAML_SRC))))
YAML_LIBSCONT:=$(addprefix build/contrib/,$(notdir $(patsubst %.cpp,%.o,$(YAML_SRCCONT))))
YAML_CFLAGS:= $(CFLAGS) -fPIC -Iinclude
ifdef BOOST
  YAML_CFLAGS+= -I$(BOOST)
endif

build/%.o: src/%.cpp
	$(YAML_CC) -c -o $@ $< $(YAML_CFLAGS)

build/contrib/%.o: src/contrib/%.cpp
	$(YAML_CC) -c -o $@ $< $(YAML_CFLAGS)

yaml: $(YAML_LIBS) $(YAML_LIBSCONT)
	ar rcs libyaml-cpp.a $^

clean:
	rm -f libyaml-cpp.a
	rm -f build/*.o
	rm -f build/contrib/*.o
