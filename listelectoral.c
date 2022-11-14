#include "listelectoral.h"

int ajoutedecondidat(char * Listeselectorales, Listelectoral p )
{
    FILE * f=fopen(Listeselectorales, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %s %s %d %d\n",p.id,p.nom,p.prenom,p.Orientation,p.tete,p.nbrvote);
        fclose(f);
        return 1;
    }
    else
	return 0;
}
int modifierlaliste( char * Listeselectorales, int id, Listelectoral nouv )
{
    int test=0;
    Listelectoral p;
    FILE * f=fopen(Listeselectorales, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %d %d\n",&p.id,p.nom,p.prenom,p.Orientation,&p.tete,&p.nbrvote)!=EOF)
        {
            if(p.id==id)
            {
                fprintf(f2,"%d %s %s %s %d %d\n",nouv.id,nouv.nom,nouv.prenom,nouv.Orientation,nouv.tete,nouv.nbrvote);
                test=1;
            }
            else
                fprintf(f2,"%d %s %s %s %d %d\n",p.id,p.nom,p.prenom,p.Orientation,p.tete,p.nbrvote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(Listeselectorales);
    rename("nouv.txt", Listeselectorales);
    return test;

}
int supprimerlaliste(char * Listeselectorales, int id)
{
    int test=0;
    Listelectoral p;
    FILE * f=fopen(Listeselectorales, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %d %d\n",&p.id,p.nom,p.prenom,p.Orientation,&p.tete,&p.nbrvote)!=EOF)
        {
            if(p.id== id)
                test=1;
            else
                fprintf(f2,"%d %s %s %s %d %d\n",p.id,p.nom,p.prenom,p.Orientation,p.tete,p.nbrvote);
        }
    }
    fclose(f);
    fclose(f2);
    remove(Listeselectorales);
    rename("nouv.txt", Listeselectorales);
    return test;
}
Listelectoral chercher(char * Listeselectorales, int id)
{
    Listelectoral p;
    int test;
    FILE * f=fopen(Listeselectorales, "r");
    if(f!=NULL)
    {
        while(test==0&& fscanf(f,"%d %s %s %s %d %d\n",&p.id,p.nom,p.prenom,p.Orientation,&p.tete,&p.nbrvote)!=EOF)
        {
            if(p.id== id)
                test=1;
        }
    }
    fclose(f);
    if(test==0)
        p.id=-1;
    return p;

}

int voter(char * Listeselectorales, int id)
{
    int test=0;
    Listelectoral p;
    FILE * f=fopen(Listeselectorales, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %s %s %d %d\n",&p.id,p.nom,p.prenom,p.Orientation,&p.tete,&p.nbrvote)!=EOF)
        {
            if(p.id==id)
            {
                fprintf(f2,"%d %s %s %s %d %d\n",p.id,p.nom,p.prenom,p.Orientation,p.tete,p.nbrvote);
                test=1;
            }
            else
                fprintf(f2,"%d %s %s %s %d %d\n",p.id,p.nom,p.prenom,p.Orientation,p.tete,p.nbrvote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(Listeselectorales);
    rename("nouv.txt", Listeselectorales);
    return test;
}
