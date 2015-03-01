PWD=`pwd`
OBJ=$(PWD)/obj
BIN=$(PWD)/bin
SRC=$(PWD)/src
HEADERS=$(PWD)/headers
CC=gcc
CFLAGS=-g -c -I$(HEADERS)/

all: func_driver func_stack
	$(CC) $(OBJ)/func_driver.o $(OBJ)/func_stack.o -o $(BIN)/func_out

func_driver:
	$(CC) $(CFLAGS) $(SRC)/func_driver.c -o $(OBJ)/func_driver.o

func_stack:
	$(CC) $(CFLAGS) $(SRC)/func_stack.c -o $(OBJ)/func_stack.o

clean:
	rm -v $(OBJ)/*.o $(BIN)/func_out
