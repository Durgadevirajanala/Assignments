CC = g++
CPPFLAGS = -c -Wall -g
OBJ = ./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc
LFLAGS = -o
IFLAGS = -Iinc

all: $(BIN)app

$(BIN)app: $(OBJ)Main.o $(OBJ)Email.o
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)Main.o $(OBJ)Email.o

$(OBJ)Main.o: $(SRC)Main.cpp
	$(CC) $(CPPFLAGS) $(SRC)Main.cpp $(IFLAGS)
	mv *.o $(OBJ)

$(OBJ)Email.o: $(SRC)Email.cpp
	$(CC) $(CPPFLAGS) $(SRC)Email.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)app

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
