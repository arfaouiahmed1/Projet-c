#ifndef LISTELECTORAL_H_INCLUDED
#define LISTELECTORAL_H_INCLUDED
#include <stdio.h>
typedef struct
{
    int idlist;
    char nomliste [30];
    int C[3];
    char Orientation[20];
    int nbrvote==0;
} Listelectoral;

int ajoutedeliste(char *, Listelectoral );
int modifierlaliste( char *, int, Listelectoral );
int supprimerlaliste(char *, int );
int voter (char *, int );
Listelectoral chercher(char *, int);
int nbv (char * , int *)
int L_ordre( char *, Listelectoral , char *);

#endif // LISTELECTORAL_H_INCLUDED
