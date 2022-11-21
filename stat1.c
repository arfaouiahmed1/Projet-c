#include <stdio.h>
#include<string.h>
#include "stat1.h"

int nbreclamation(char *Liste ,int *a)
{ 
char num_liste[30];
LS Listelectoral;
int b=0;
printf("Enter id de la liste electorale : ");
scanf("%s",num_liste);
FILE *f = fopen(Liste, "r");
 if (f != NULL) 
{
while (fscanf(f,"%s %s %d %d %s \n",Listelectoral.idlist,Listelectoral.nomliste,&Listelectoral.nb_condidat,Listelectoral.Orientation,Listelectoral.nbrvote)!=EOF)
{
if (strcmp(num_liste, Listelectoral.idlist) == 0 )
b++;
}
*a=b;
}
fclose(Liste);
return b;}
