C = g++
CPPFLAGS = -c -Wall -g
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: $(BIN)app

$(BIN)app: $(OBJ)Banktask.o $(OBJ)Banktaskmain.o
		$(CC) $(CPPFLAGS) $(LDFLAGS) -o app $(OBJ)Banktask.o  $(OBJ)Banktaskmain.o
		mv app $(BIN) 

$(OBJ)Banktask.o: $(SRC)Banktask.cpp
		$(CC) $(CPPFLAGS) $(SRC)Banktask.cpp -I $(INCLUDE)
		mv Banktask.o $(OBJ)

$(OBJ)Banktaskmain.o: $(SRC)Banktaskmain.cpp
		$(CC) $(CPPFLAGS) $(SRC)Banktaskmain.cpp -I $(INCLUDE)
		mv Banktaskmain.o $(OBJ)
valgrind: 
	valgrind --leak-check=full ./main
clean:
			rm -f a.out app *.o
			rm -f $(OBJ)*.o
			rm -f $(BIN)app

