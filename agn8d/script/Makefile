CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: assig8d

assig8d: $(OBJ)/assig8d.o
	$(CC) $(LFLAGS) $(BIN)/assig8d $(OBJ)/assig8d.o

$(OBJ)/assig8d.o: $(SRC)/assig8d.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/assig8d.cpp 
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out assig8d
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/assig8d
	@echo "Done!"

valgrind:
	valgrind --leak-check=full $(BIN)/assig8d
	mv valgrind $(BIN)

