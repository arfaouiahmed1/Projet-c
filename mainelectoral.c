#include <string.h>
#include "listelectoral.h"

int main ()
{
    Listelectoral p1={1,"Arfaoui","Ahmed","centre",1,0},
    p2= {2,"Arfaoui","Aymen","centre",0,0},
    p3= {3,"Arfaoui","Amin","centre",0,0};
    
    int x=ajoutedecondidat("Listeselectorales.txt", p1);
    x=modifierlaliste("Listeselectorales.txt",112,p2 );
    if(x==1)
        printf("\nModification du liste electoral avec succés");
    else printf("\nechec Modification");
    x=supprimerlaliste("Listeselectorales.txt",1 );
    if(x==1)
        printf("\nSuppression du liste electoral avec succés \n");
    else printf("\nechec Suppression");
    p3=chercher("Listeselectorales.txt",2 );
    if(p3.id==-1)
        printf("\nintrouvable ");
    return 0;
    x=voter("Listeselectorales.txt", 3);
}