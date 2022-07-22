CC = g++
CPPFLAGS = -c -g -Wall -Werror
LDFLAGS = -lcppunit -lm
LFLAGS = -o
OBJ = ./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc
IFLAGS = -Iinc


all: app

app: $(OBJ)TestDate.o $(OBJ)Date.o 
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)TestDate.o $(OBJ)Date.o $(LDFLAGS)

$(OBJ)TestDate.o: $(SRC)TestDate.cpp
	$(CC) $(CPPFLAGS) $(SRC)TestDate.cpp $(IFLAGS)
	mv *.o $(OBJ)

$(OBJ)Date.o: $(SRC)Date.cpp
	$(CC) $(CPPFLAGS) $(SRC)Date.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full --show-reachable=yes $(BIN)app 

clean:
	rm -f a.out app 
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
