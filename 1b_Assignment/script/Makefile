CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/Main.o $(OBJ)/Bank.o
		$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/Main.o $(OBJ)/Bank.o


$(OBJ)/Main.o: $(SRC)/Main.cpp
		$(CC) $(CFLAGS) $(SRC)/Main.cpp $(IFLAGS)
			mv *.o $(OBJ)/

$(OBJ)/Bank.o: $(SRC)/Bank.cpp
		$(CC) $(CFLAGS) $(SRC)/Bank.cpp $(IFLAGS)
			mv *.o $(OBJ)/

clean:
		rm -f a.out app
		rm -f $(OBJ)/*.o
		rm -f $(BIN)/app
		@echo "Cleaning Done!"
