CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: Main

Main: $(OBJ)/Main.o
	$(CC) $(LFLAGS) $(BIN)/Main $(OBJ)/Main.o

$(OBJ)/Main.o: $(SRC)/Main.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/Main.cpp 
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out Main
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/Main
	@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/Main
	mv valgrind $(BIN)
