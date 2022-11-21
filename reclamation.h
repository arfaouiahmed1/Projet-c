#ifndef RECLAMATION_H_INCLUDED
#define RECLAMATION_H_INCLUDED
#include <stdio.h>
#include <string.h>


typedef struct
{

    int id_observateur;
    int code_reclamation;
    int num_liste_reclamee;
    int num_bureau_de_vote;
    char type_reclamation[20];
    char texte_reclamation[5000];

} reclamation;


int ajouter(char *, reclamation );
int modifier( char *, int, reclamation );
int supprimer(char *, int );
int chercher(char *, int);
int afficher(char * );

/*int nbreclamation(int nb[], char * les_reclamation, char *  listeelectorale)*/

#endif 

