#include <stdio.h>
#include <string.h>
#include"gestionutilisateur.h"

int main()
{
    user us={"feriel","bg",14,26,07,2002,"id","mdp","bv1","electeur"};
    user us1={"fe","bc",34,26,07,2003,"id1","mdp1","bv1","electeur"};
    user us2={"f","b",12,26,07,2002,"id2","mdp2","bv1","agent"};

    int x=ajouter("allusers.txt", us);
    int r=ajouter("allusers.txt", us2);

    printf("hello world");
    
    if(x==1)
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

    user c=chercher("allusers.txt",12 );
    if(strcmp(us2.id ,"-1")== 0)
        printf("introuvable");
    return 0;
}
