#include <stdio.h>
#include <string.h>
#include"reclamation.h"

int main()
{
    
    reclamation r1={1,11,111,1111,"type1","aaaaaaaaaaaaaa"},r2={2,22,222,2222,"type2","zzzzzzzzzzzzzzzz"}
    reclamation une_reclamation,reclamation_modifiee,;
    int x,code_reclamation;


    x=ajouter("les_reclamation.txt",/*une_reclamation*/r1);

    if(x==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\nechec ajout");


    x=ajouter("les_reclamation.txt",/*une_reclamation*/r2);

    if(x==1)
        printf("\n ajout de reclamation avec succés");
    else printf("\nechec ajout");



    x=modifier("les_reclamation.txt",code_reclamation,reclamation_modifiee );

    if(x==1)
         printf("\nModification de reclamation avec succes");
    else printf("\nechec Modification");



    x=supprimer("les_reclamation.txt",code_reclamation);

    if(x==1)
         printf("\nSuppression de reclamation avec succes");
    else printf("\nechec Suppression");



    x=chercher("les_reclamation.txt",code_reclamation);

    if(x==0)
        printf("Réclamation introuvable");
    else printf("\n Recherche avec succes ");


    x=afficher("les_reclamations.txt");
    if(x==1)
         printf("\n Affichage de reclamation avec succes");
    else printf("\n Echec Affichage");


    return 0;
}

