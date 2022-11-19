#include "Election.h"
#include <stdio.h>
#include <string.h>
int main()
{
    int choix, N, T, ind=0;
    Election S, E;

do
{
do
{
    printf("1.Ajouter une election\n");
    printf("2.Modifier une election\n");
    printf("3.Supprimer une election\n");
    printf("4.Chercher une election\n");
    printf("5.Quitter\n");
    scanf("%d",&choix);
}
while(choix<1 || choix>5);
switch(choix)
{
case 1:

    printf("Election id:");
    scanf("%d",&E.id);
    printf("Nom d'election:");
    gets(E.Name);
    printf("Date du debut de la declaration de conditature:");
    scanf("%d %d %d",&E.DDDC.jour,&E.DDDC.mois,&E.DDDC.annee);
    printf("Date de la fin de la declaration de conditature:");
    scanf("%d %d %d",&E.DFDC.jour,&E.DFDC.mois,&E.DFDC.annee);
    printf("Date du debut de vote:");
    scanf("%d %d %d",&E.DDV.jour,&E.DDV.mois,&E.DDV.annee);
    printf("Date de la fin de vote:");
    scanf("%d %d %d",&E.DFV.jour,&E.DFV.mois,&E.DFV.annee);
    T= ajouter(E,"ElecList.txt");
    if (T==1)
        printf("Ajout reussi");
    else
        printf("echec");
    ind++;
    break;

case 2:
    printf("Election id:");
    scanf("%d",&E.id);
    printf("Nouveau nom d'election:");
    gets(E.Name);
    printf("Nouveau Date du debut de la declaration de conditature:");
    scanf("%d %d %d",&E.DDDC.jour,&E.DDDC.mois,&E.DDDC.annee);
    printf("Nouveau Date de la fin de la declaration de conditature:");
    scanf("%d %d %d",&E.DFDC.jour,&E.DFDC.mois,&E.DFDC.annee);
    printf("Nouveau Date du debut de vote:");
    scanf("%d %d %d",&E.DDV.jour,&E.DDV.mois,&E.DDV.annee);
    printf("Nouveau Date de la fin de vote:");
    scanf("%d %d %d",&E.DFV.jour,&E.DFV.mois,&E.DFV.annee);
    T= modifier(E.id, E, "ElecList.txt");
    if (T==1)
        printf("Modification reussi");
    else
        printf("echec");
    break;
case 3:
    printf("Election id:");
    scanf("%d",&N);
    T= supprimer(N, "ElecList.txt");
    if (T==1)
        {
            printf("Suppression reussi");
            ind--;
        }
    else
        printf("echec");
    break;
case 4:
    printf("Election id:");
    scanf("%d",&N);
    S= chercher(N, "ElecList.txt");
    if (S.id==-1)
        printf("Election inexistant");
    else
        printf("Election existant");
    break;
}
}
while(choix!=5);
}
