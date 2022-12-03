prog:reclamation.o mainy.o
	gcc reclamation.o mainy.o -o prog
mainy.o:mainy.c
	gcc -c mainy.c
reclamation.o:reclamation.c
	gcc -c reclamation.c
