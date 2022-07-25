CC = g++
CPPFLAGS = -c -Wall -g
OBJ = ./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc
LFLAGS = -o
IFLAGS = -Iinc
all: $(BIN)app

$(BIN)app: $(OBJ)main.o
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)main.o

$(OBJ)main.o: $(SRC)main.cpp
	$(CC) $(CPPFLAGS) $(SRC)main.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)app

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
