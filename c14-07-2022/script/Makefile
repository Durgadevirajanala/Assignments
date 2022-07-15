CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror 
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src


app: $(OBJ)/sigchld.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/sigchld.o

$(OBJ)/sigchld.o:$(SRC)/sigchld.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sigchld.cpp
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out sigchld
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Done!"
