DEPS=include/backend-darksusy.hpp ../UtilsBit/include/backend-common.hpp
ODIR=build
SDIR=src
LIBS=-ldl -lgfortran
INCLUDE=-Iinclude -I../UtilsBit/include

OBJ=build/backend-darksusy.o build/darksusy_test.o

CC=g++
CFLAGS=-g -Wall $(INCLUDE)

build/%.o: src/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

darksusy_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean: 
	rm -f $(ODIR)/*.o *~ core $(IDIR)/*~
