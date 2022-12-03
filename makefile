programme:stat1.o mainstat1.o
	gcc stat1.o mainstat1.o -o prog
mainstat1.o:mainstat1.c
	gcc -c mainstat1.c
stat1.o:stat1.c
	gcc -c stat1.c

