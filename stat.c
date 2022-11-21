#include "stat.h"


void taux ( char * liste, float * tn , float * te)


{
    int n=0,e=0,x=0;
    OBS observateur;
    FILE * f=fopen("liste.txt", "r");
    if(f!=NULL)
    {
        while (fscanf(f,"%d %s %s %s %s %d %s %s %s \n",&observateur.cin,observateur.nom,observateur.prenom,observateur.appartement,observateur.sexe,&observateur.age,observateur.nationalite,observateur.adresse,observateur.email)!=EOF) 
		
        {
              if((observateur.nationalite=="tunisien") || (observateur.nationalite=="tunisienne"))
               { n++;
                x++; }
                else 
                  { e++;
                    x++; }
        }
    }
    fclose(f); 
    *tn = (float)n/x;
    *te = (float)e/x;
}













/*int nbreclamation(int nb[], char * les_reclamation, char *  listeelectorale)
{
    int n=0,e==0,x=0;
    FILE * f=fopen(liste, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %s %d  \n",&Listelectoral.idlist,&Listelectoral.nomliste,&Listelectoral.nb_condidat,&Listelectoral.Orientation,&Listelectoral.nbrvote)!=EOF)
        {
              while(fscanf(f,"%d %d %d %d %s %s \n",&une_reclamation.id_observateur,&une_reclamation.code_reclamation,&une_reclamation.num_liste_reclamee,&une_reclamation.num_bureau_de_vote,&une_reclamation.type_reclamation,&une_reclamation.texte_reclamation)!=EOF)
              {
                   if(une_reclamation.num_liste_reclamee==Listelectoral.idlist)
               





}*/

