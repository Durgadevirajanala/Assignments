CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: quick

quick: $(OBJ)/quick.o
	$(CC) $(LFLAGS) $(BIN)/quick $(OBJ)/quick.o

$(OBJ)/quick.o: $(SRC)/quick.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/quick.cpp 
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out quick
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/quick 
	@echo "Done!"
