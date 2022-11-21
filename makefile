programme:reclamation.o mainy.o
	gcc reclamation.o mainy.o -o prog
mainy.o:mainy.c
	gcc -c reclamation.c
reclamation.o:reclamation.c
	gcc -c reclamation.c

