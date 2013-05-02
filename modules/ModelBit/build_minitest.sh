# Quick script to compile minitest.cpp against necessary GAMBIT components

INCLUDES="-Imodels -I../UtilsBit/include"
g++ minitest.cpp -o minitest $INCLUDES  -lboost_exception
