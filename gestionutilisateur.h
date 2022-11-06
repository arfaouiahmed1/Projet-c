#ifndef GESTIONUTILISATEUR_H_INCLUDED
#define GESTIONUTILISATEUR_H_INCLUDED
#include <stdio.h>
typedef struct
{
    char couleur [20];
    int id, x,y;
} point;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, point );
int modifier( char *, int, point );
int supprimer(char *, int );
point chercher(char *, int);

#endif // GESTIONUTILISATEUR_H_INCLUDED
