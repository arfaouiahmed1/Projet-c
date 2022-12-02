#ifndef bureau_H_INCLUDED
#define bureau_H_INCLUDED

typedef struct
{
int id_bv;
int id_ag;
int cap_elect;
int cap_obs;
char salle[10];
char adresse[20];
}bv;

int ajouter(bv b , char * filename);
int modifier(int id, bv nouv, char * filename);
int supprimer(int id, char * filename);
bv chercher(int id, char * filename);

#endif // bureau_H_INCLUDED

