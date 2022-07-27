CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC =./inc
SRC = ./src/
OBJ = ./obj/
BIN = ./bin/
IFLAGS = -I$(INC)

all: app

app: $(OBJ)main.o $(OBJ)1c.o
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)main.o $(OBJ)1c.o

$(OBJ)main.o: $(SRC)main.cpp
	$(CC) $(CFLAGS) $(SRC)main.cpp $(IFLAGS)
	mv *.o $(OBJ)

$(OBJ)1c.o: $(SRC)1c.cpp
	$(CC) $(CFLAGS) $(SRC)1c.cpp $(IFLAGS)
	mv *.o $(OBJ)

clean:
	rm -f a.out app
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
	@echo "Cleaning Done!"
