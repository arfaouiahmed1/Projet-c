#include <stdio.h>
#include <string.h>
#include "gestionutilisateur.h"
#include "statFeriel.h" 

int main()
{
    user us={"feriel","bg",'f',14,26,07,2002,"identif","mdp","bv1","electeur",-1};
    user us1={"fe","bc",'f',34,26,07,2003,"id1","mdp1","bv1","electeur",0};
    user us2={"f","b",'f',12,26,07,2002,"id2","mdp2","bv1","agent",2};

    int x=ajouter("allusers.txt", us);
    int r=ajouter("allusers.txt", us2);
    int r1= ajouter("allusers.txt", us1);
    printf("hello world");
    
    if(x==1 && r==1 && r1==1)
        printf("\n ajout de point avec succÈs");
    else printf("\n echec ajout");
        

    int v = modifier("allusers.txt",14,us2 );

    if(v==1)
        printf("\n Modification de point avec succes");
    else printf("\n echec Modification");



    x=supprimer("allusers.txt",34 );
    if(x==1)
        printf("\n Suppression de point avec succÈs");
    else printf("\n echec Suppression");

    printf("age moy des particip     \n ");
    float aG = agemoyen("allusers.txt");
    printf("age moy des particip: %f  \n",aG);

    printf("\n tpeee    \n ");
    float ttt = TPE("allusers.txt");
    printf("\n result tpeee :%f",ttt);




    user c=chercher("allusers.txt",20 );
    if(strcmp(us2.id ,"-1")== 0)
        printf("introuvable");
    else
        printf("%s %s %d %d %d %d %s %s %s %s %d %c \n", c.prenom ,c.nom ,c.cin ,c.dateNaiss.j ,c.dateNaiss.m ,c.dateNaiss.a ,c.id ,c.mdp,c.bv, c.role,c.vote,c.genre );
   
    return 0;
}
