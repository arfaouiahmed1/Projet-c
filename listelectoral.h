#ifndef LISTELECTORAL_H_INCLUDED
#define LISTELECTORAL_H_INCLUDED

typedef struct
{
    int idlist;
    char nomliste [30];
    int condidat[3];
    char Orientation[20];
    int nbrvote;

} Listelectoral;
typedef struct 
{
    int j,m,a;

} date;
typedef struct 
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

}user;

int ajoutedeliste(char *, Listelectoral );
int modifierlaliste( char *, int, Listelectoral );
int supprimerlaliste(char *, int );
int voter (char *, char *, int , int );
Listelectoral chercher(char *, int);
int nbv (char * , int *);
int L_ordre( char * , Listelectoral [] );
#endif // LISTELECTORAL_H_INCLUDED
