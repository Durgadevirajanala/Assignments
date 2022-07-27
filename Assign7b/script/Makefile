CC = g++
CPPFLAGS = -c -g -Wall -Werror
LDFLAGS = -lcppunit -lm
LFLAGS = -o
OBJ =./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc/
IFLAG = -I$(INC)

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient


all: app

app: $(OBJ)Main.o $(OBJ)Email.o 
	$(CC) $(LFLAGS) $(BIN)app $(OBJ)Main.o  $(OBJ)Email.o

$(OBJ)Main.o: $(SRC)Main.cpp
	$(CC) $(CPPFLAGS) $(IFLAG) $(SRC)Main.cpp
	mv *.o $(OBJ)

$(OBJ)Email.o: $(SRC)Email.cpp
	$(CC) $(CPPFLAGS) $(IFLAG) $(SRC)Email.cpp
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in process:"
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)app
	@echo "Cleaning Done!"

valgrind:
	valgrind --leak-check=full $(BIN)app
	mv valgrind $(BIN)

