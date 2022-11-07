#ifndef reclamation.h
#define reclamation.h
#include <stdio.h>

typedef struct
{
    int jour,mois,annee;
    
} Date;

typedef struct
{
    char nom [20], prenom[20];
    Date d ;
    char contenue_reclamation[5000]
} reclamation;


int ajouter(char *les_reclamations, reclamation x );
int modifier( char *les_reclamations, reclamation x );
int supprimer(char *les_reclamations, reclamation x);
reclamation chercher(char *les_reclamations, reclamation x);

#endif 

