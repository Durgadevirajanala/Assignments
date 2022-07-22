CC = g++
LFLAGS = -o
CFLAGS = -c -g 
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: template1 template2 template3 template4 template5 template6

template1: $(OBJ)/template1.o
	$(CC) $(LFLAGS) $(BIN)/template1 $(OBJ)/template1.o

$(OBJ)/template1.o: $(SRC)/template1.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template1.cpp 
	mv *.o $(OBJ)

template2: $(OBJ)/template2.o
	$(CC) $(LFLAGS) $(BIN)/template2 $(OBJ)/template2.o

$(OBJ)/template2.o: $(SRC)/template2.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template2.cpp 
	mv *.o $(OBJ)

template3: $(OBJ)/template3.o
	$(CC) $(LFLAGS) $(BIN)/template3 $(OBJ)/template3.o

$(OBJ)/template3.o: $(SRC)/template3.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template3.cpp 
	mv *.o $(OBJ)

template4a: $(OBJ)/template4a.o
	$(CC) $(LFLAGS) $(BIN)/template4a $(OBJ)/template4a.o

$(OBJ)/template4a.o: $(SRC)/template4a.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template4a.cpp 
	mv *.o $(OBJ)

template4b: $(OBJ)/template4b.o
	$(CC) $(LFLAGS) $(BIN)/template4b $(OBJ)/template4b.o

$(OBJ)/template4b.o: $(SRC)/template4b.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template4b.cpp 
	mv *.o $(OBJ)

template4c: $(OBJ)/template4c.o
	$(CC) $(LFLAGS) $(BIN)/template4c $(OBJ)/template4c.o

$(OBJ)/template4c.o: $(SRC)/template4c.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/template4c.cpp
	mv *.o $(OBJ)

clean:
	@echo "Cleaning is in Progress"
	rm -f a.out template1
	rm -f *.o
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/template1 $(BIN)/template2 $(BIN)/template3
	rm -f $(BIN)/template4a $(BIN)/template4b $(BIN)/template4c
	@echo "Done!"
