#include "point.h"

int ajouter(char *les_reclamations )
{
    FILE * f=fopen(les_reclamations, "a");
    if(f!=NULL)
    {
        fprintf(f,"%s %s %d %d %d\n",reclamation.nom,reclamation.prenom,reclamation.Date.jour,reclamation.Date.mois,reclamation.Date.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier( char * les_reclamations, int id, reclamation reclamation_modifiee )
{
    int tr=0;
    reclamation rec ;
    FILE * f=fopen(les_reclamations, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d\n",&reclamation.nom,&reclamation.prenom,&reclamation.Date.jour,&reclamation.Date.mois,&reclamation.Date.annee!=EOF)
        {
            if(p.id== id)
            {"
                fprintf(f2,"%s %s %d %d %d\n",reclamation_modifiee.nom,reclamation_modifiee.prenom,reclamation_modifiee.Date.jour,reclamation_modifiee.Date.mois,reclamation_modifiee.Date.annee);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %d\n",reclamation.nom,reclamation.prenom,reclamation.Date.jour,reclamation.Date.mois,reclamation.Date.annee");

        }
    }
    fclose(f);
    fclose(f2);
    remove(les_reclamations);
    rename("nouv.txt", les_reclamations);
    return tr;

}
int supprimer(char * les_reclamations, int id)
{
    int tr=0;
    point p;
    FILE * f=fopen(les_reclamations, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d\n",&reclamation.nom,&reclamation.prenom,&reclamation.Date.jour,&reclamation.Date.mois,&reclamation.Date.annee!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %d\n",reclamation.nom,reclamation.prenom,reclamation.Date.jour,reclamation.Date.mois,reclamation.Date.annee");
        }
    }
    fclose(f);
    fclose(f2);
    remove(les_reclamations);
    rename("nouv.txt", les_reclamations);
    return tr;
}
point chercher(char * les_reclamations, int id)
{
    reclamation rec;
    int tr;
    FILE * f=fopen(les_reclamations, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %d %d %d\n",&reclamation.nom,&reclamation.prenom,&reclamation.Date.jour,&reclamation.Date.mois,&reclamation.Date.annee)!=EOF)
        {
            if(p.id== id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        p.id=-1;
    return p;

}

