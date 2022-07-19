CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: sighand

sighand: $(OBJ)/sighand.o
	$(CC) $(LFLAGS) $(BIN)/sighand $(OBJ)/sighand.o

$(OBJ)/sighand.o: $(SRC)/sighand.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sighand.cpp 
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out sighand
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sighand
	@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/sighand
	mv valgrind $(BIN)



