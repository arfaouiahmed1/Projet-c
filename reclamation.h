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


int ajouter(char *les_reclamations, reclamation une_reclamation );
int modifier( char *les_reclamations, int code, reclamation reclamation_modifiee );
int supprimer(char * les_reclamations, int code);
int chercher (char * les_reclamations, int code);
//int chercher(char *, int);
int afficher(char * les_reclamations);


#endif
