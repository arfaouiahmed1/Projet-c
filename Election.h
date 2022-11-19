#ifndef ELECTION_H_INCLUDED
#define ELECTION_H_INCLUDED

typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;

typedef struct
{
    int id;
    char Name[20];
    int nb_habitant;
    int nb_conseiller;
    char municipalite[20];
    Date DDDC;
    Date DFDC;
    Date DDV;
    Date DFV;
}Election;

int ajouter(Election E, char ElecList []);
int modifier(int id, Election N, char * ElecList);
int supprimer(int id, char * ElecList);
Election chercher(int id, char * ElecList);


#endif
