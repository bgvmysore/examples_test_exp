main.exe: main.c src/si.c
	gcc -I inc main.c src/si.c -o main.exe

run: main.exe
	.\main.exe

clean:
	del *.exe
	clear

TEST.exe: .\src\si.c .\tests\test.c .\unity\unity.c
	gcc -Iinc -Iunity .\src\si.c .\tests\test.c .\unity\unity.c -o TEST.exe

runtest: TEST.exe
	./TEST.exe