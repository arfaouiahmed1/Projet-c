#ifndef GESTIONUTILISATEUR_H_INCLUDED
#define GESTIONUTILISATEUR_H_INCLUDED
#include <stdio.h>
#include <string.h>

typedef struct Date
{
    int j,m,a;

} date;

typedef struct Utilsateur
{
    char prenom [20];
    char nom [20];
    char genre;// f ou m
    int cin;
    date dateNaiss;
    char id [20];
    char mdp [20];
    char bv [20];
    char role [20];
    int vote;// -1 n’a pas voté, 0 vote blanc sinon numéro de la liste

}user ;
//le type de  retour int c'est pour indiquer si la tache a été réalisée avec succés ou non// pour afficher des lsg plus tard exemple erreur d'ouverture de fichier, element introuvable
int ajouter(char *, user );
int modifier( char *, int, user );
int supprimer(char *, int );
user chercher(char *, int);

#endif // GESTIONUTILISATEUR_H_INCLUDED
 
