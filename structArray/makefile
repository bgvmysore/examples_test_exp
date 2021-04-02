CC = gcc
CFLAGS = -Wall -g -O0 -std=c99

PROJECT = StructArray
SRC = $(wildcard src/*.c)
BIN = bin

TEST_FW =
TEST_SRC =

INC = -Iinc

ifeq ($(OS),Windows_NT)
	RM = del
	EXEC = $(BIN)\$(PROJECT).exe
	EXEC_TEST = $(BIN)\tests_$(PROJECT).exe
else
	RM = rm
	EXEC = $(BIN)/$(PROJECT).out
	EXEC_TEST = $(BIN)/tests_$(PROJECT).out
endif

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(INC) $^ -o $@

run: $(EXEC)
	./$(EXEC)

clean:
	$(RM) $(EXEC)

cppcheck:
	cppcheck $(INC) --enable=all --verbose --std=c99 ./

valgrind: $(EXEC)
	valgrind --leak-check=full $^

