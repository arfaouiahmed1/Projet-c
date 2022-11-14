#ifndef listelectoral_h_INCLUDED
#define liste_electoral_h_INCLUDED
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nom [20];
    char prenom [20];
    int id;
    char orientation;
    int tete;
} Listelectoral;

int creationduneliste(char *,Listelectoral);
int ajoutedecondidat(char *, Listelectoral );
int modifierlaliste( char *, int, Listelectoral );
int supprimerlaliste(char *, int, Listelectoral );
int voter (char *,
Listelectoral chercher(char *, int);

#endif // listelectoral_h_INCLUDED

