#include "bureau.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{

bv b1={233,123456,45,7,"FF4","ariana"},b2={241,15432,55,9,"GT3","tunis"},b3;
int a;
a=ajouter(b1,"bv.txt");
if(a==1)
 printf("\najout du bureau de vote avec succés");
  else printf("\nechec d'ajout");
a=modifier(32,b2,"bv.txt");
if (a==1)
printf("\nmodification du bureau de vote avec sucés");
else printf("\n echec de modification");
a=supprimer(21,"bv.txt");
 if(a==1)
{printf("\nsupression du bureau de vote effectué avec succés");}
  else
{printf("\néchec de supression");}
b3=chercher(11,"bv.txt");
if(b3.id_bv==-1)
  {printf("\nbureau introuvable");}
else {printf("\nbureau trouvable");}
return 0;
}

