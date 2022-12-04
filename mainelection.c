#include <stdio.h>
#include <string.h>
#include "listelectoral.h"

int main ()
{
    Listelectoral T[100];
    Listelectoral p1={1,"L1",111,112,113,"centre",-1};
    Listelectoral p2= {2,"L2",121,122,123,"gauche",-1};
    Listelectoral p3= {3,"L3",131,132,133,"droite",-1};
    int x=ajoutedeliste("Listeselectorales.txt", p1);
	x=ajoutedeliste("Listeselectorales.txt", p2);
	x=ajoutedeliste("Listeselectorales.txt", p3);
    x=modifierlaliste("Listeselectorales.txt",112,p2 );
    if(x==1)
        printf("\nModification du liste electoral avec succés");
    else
        printf("\nechec Modification");
    x=supprimerlaliste("Listeselectorales.txt",2);
    if(x==1)
        printf("\nSuppression du liste electoral avec succés \n");
    else 
        printf("\nechec Suppression");
    p3=chercher("Listeselectorales.txt",2);
    if(p3.idlist==-1)
        printf("\nintrouvable ");
    x=voter("Listeselectorales.txt","allusers.txt",111,1);
    if (x!=0 && x!=-1)
        printf("\nvote avec succés ");
    if (x!=0)
        printf("\nvote blanc ");
    if (x!=-1)
        printf("\n pas de vote ");
    x=nbv("Listeselectorales.txt",1);
    x=nbv("Listeselectorales.txt",3);
    x=L_ordre("Listeselectorales.txt",T);
    printf("Le nombre de liste electorales est :",x);   	
    return 0;
}
