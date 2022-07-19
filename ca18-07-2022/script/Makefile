CC = g++
LFLAGS = -o
CFLAGS = -c -g 
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sigaction

sigaction:$(OBJ)/sigaction.o
	$(CC) $(LFLAGS) $(BIN)/sigaction $(OBJ)/sigaction.o

$(OBJ)/sigaction.o: $(SRC)/sigaction.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sigaction.cpp 
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out sigaction
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sigaction
	@echo "Done!"
