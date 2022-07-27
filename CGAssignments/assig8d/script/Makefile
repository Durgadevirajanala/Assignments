CC = g++
CPPFLAGS = -c -Wall -g
OBJ = ./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc
LFLAGS = -o
IFLAGS = -Iinc
all: $(BIN)app

$(BIN)app: $(OBJ)assig8d.o
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)assig8d.o

$(OBJ)assig8d.o: $(SRC)assig8d.cpp
	$(CC) $(CPPFLAGS) $(SRC)assig8d.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)app

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
