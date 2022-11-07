#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{
    
    reclamation rec_x;
    int id_x

    int x=ajouter("les_reclamation.txt",rec_x);

    x=modifier("les_reclamation.txt",rec_x);

    if(x==1)
         printf("\nModification de reclamation avec succes");
    else printf("\nechec Modification");


    x=supprimer("les_reclamation.txt",rec_x);

    if(x==1)
         printf("\nSuppression de reclamation avec succes");
    else printf("\nechec Suppression");


    reclamation_x=chercher("les_reclamation.txt",id_x);

    if(reclamation_x.id==-1)
        printf("introuvable");

    return 0;
}

