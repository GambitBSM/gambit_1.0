# yaml-cpp makefile for integration in GAMBIT
# for stripped down version of yaml-cpp 0.5.1
# Christoph Weniger 18 July 2013
#
# Tested only for g++
#
# Edited - Abram Krislock January 2014
#     to work better with main makefile

YAML_CFLAGS:= -Wall -g -O3 -Iinclude -I$(BOOST)
YAML_SRC:=$(wildcard src/*.cpp) 
YAML_SRCCONT:=$(wildcard src/contrib/*.cpp)
YAML_LIBS:=$(addprefix build/,$(notdir $(patsubst %.cpp,%.o,$(YAML_SRC))))
YAML_LIBSCONT:=$(addprefix build/contrib/,$(notdir $(patsubst %.cpp,%.o,$(YAML_SRCCONT))))

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
