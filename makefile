prog:gestionutilisateur.o mainUtil.o
	gcc gestionutilisateur.o mainUtil.o -o prog 
mainUtil.o:mainUtil.c
	gcc -c mainUtil.c 
gestionutilisateur.o:gestionutilisateur.c
	gcc -c gestionutilisateur.c 
