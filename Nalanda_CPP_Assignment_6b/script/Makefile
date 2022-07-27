CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/vector2.o $(OBJ)/wordset.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/vector2.o $(OBJ)/wordset.o


$(OBJ)/vector2.o: $(SRC)/vector2.cpp
	$(CC) $(CFLAGS) $(SRC)/vector2.cpp $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/wordset.o: $(SRC)/wordset.cpp
	$(CC) $(CFLAGS) $(SRC)/wordset.cpp $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"
