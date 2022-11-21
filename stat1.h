#include <stdio.h>
#include <string.h>


typedef struct
{
    char idlist[9];
    char nomliste [30];
    int nb_condidat[3];
    char Orientation[20];
    int nbrvote;
} LS;


int nbreclamation(char *liste ,int *a);
