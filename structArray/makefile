CC = gcc

ifeq ($(CC), cl)
		CFLAGS = -W1
		COUT = /Fe:
		CLEANUPOBJ = del *.obj
else
		CFLAGS = -Wall -g -O0 -std=c99
		COUT = -o
		CLEANUPOBJ = @echo DONE
endif

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
	$(CC) $(CFLAGS) $(INC) $^ $(COUT)$@
	$(CLEANUPOBJ)

run: $(EXEC)
	./$(EXEC)

clean:
	$(RM) $(EXEC)

cppcheck:
	cppcheck $(INC) --enable=all --verbose --std=c99 ./

valgrind: $(EXEC)
	valgrind --leak-check=full $^

