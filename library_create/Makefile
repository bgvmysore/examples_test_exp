staticlib: example.o
	ar rcs libexample.a $^
	del example.o

dynamiclib:
	gcc -fPIC -shared -oexample.dll src/example.c

example.o: src/example.c
	gcc -c $^ -o $@

