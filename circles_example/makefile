PROJECT_NAME = circles
SRC = ./source/circles.c

TST_SRC = ./unit_test/test_circles.c
TST_EXC = ./unit_test/UNITTEST.exe

BIN = ./bin
EXEC = $(BIN)/APP.exe

app: $(SRC)
	gcc $(SRC) ./source/main.c -o $(EXEC)
	@echo COMPILATION

clean: $(EXEC)
	del /q $(EXEC)
	@echo CLEAN

run: $(EXEC)
	$(EXEC)

# TESTING STUFF
test: $(SRC) ./unit_test/unity.c $(TST_SRC)
	gcc $(TST_SRC) $(SRC) ./unit_test/unity.c -o $(TST_EXC)

runtest: $(TST_EXC)
	@echo TESTING...
	$(TST_EXC)
	
testclean: $(TST_EXC)
	del /q $(TST_EXC)

