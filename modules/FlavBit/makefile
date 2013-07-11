DEPS=include/backend-superiso.hpp ../Utils/include/backend-common.hpp
ODIR=build
SDIR=src
LIBS=-ldl
INCLUDE=-Iinclude -I../Utils/include

OBJ=build/backend-superiso.o build/superiso_test.o

CC=g++
CFLAGS=-g -Wall $(INCLUDE)

build/%.o: src/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

superiso_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean: 
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
