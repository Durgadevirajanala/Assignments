CC = g++
CPPFLAGS = -c -Wall -Werror
OBJ = ./obj/
SRC = ./src/
IFLAGS = -o
BIN = ./bin/
INCLUDE = inc/

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: app

app : $(OBJ)assign.o
	$(CC) $(IFLAGS) $(BIN)app $(OBJ)assign.o

$(OBJ)assign.o : $(SRC)assign.cpp
	$(CC) $(CPPFLAGS) $(SRC)assign.cpp $(OBJ)assign.o -I$(INCLUDE)
	mv *.o $(OBJ)	
clean : 
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app

valgrind:
	valgrind --leak-check=full $(BIN)app
	mv valgrind $(BIN)
