prog:stat.o mains.o
	gcc stat.o mains.o -o prog
mains.o:mains.c
	gcc -c mains.c
stat.o:stat.c
	gcc -c stat.c

