#include "listelectoral.h"

int ajoutedeliste(char * Listeselectorales, Listelectoral p )
{
    FILE * f=fopen(Listeselectorales, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote);
        fclose(f);
        return 1;
    }
    else
	return 0;
}
int modifierlaliste( char * Listeselectorales, int id, Listelectoral nouv )
{
    int test=0;
    Listelectoral P;
    FILE * f=fopen(Listeselectorales, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote)!=EOF)
        {
            if(p.id==id)
            {
                fprintf(f2,"%d %s %d %d %d %s %d \n",&nouv.id,&nouv.nomliste ,&nouv.C[0],&nouv.C[1],&nouv.C[2],&nouv.Orientation,&nouv.nbrvote);
                test=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote);

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
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote)!=EOF)
        {
            if(p.id== id)
                test=1;
            else
                fprintf(f2,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote);
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
        while(test==0&& fscanf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote)!=EOF)
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

int voter(char * Listeselectorales,char user, int id)
{
    int test=0;
    Listelectoral p;
    FILE * f1=fopen(Listeselectorales, "r");
    FILE * f2=fopen(user.txt, "r");
    FILE * f3=fopen("nouv.txt", "w");
    if(f1!=NULL && f2!=NULL && f3!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote)!=EOF)
        {
            if(p.id==id)
            {
                fprintf(f2,"%d %s %d %d %d %s %d \n",&nouv.id,&nouv.nomliste ,&nouv.C[0],&nouv.C[1],&nouv.C[2],&nouv.Orientation,&nouv.nbrvote);
                test=1;
            }
            else
                fprintf(f2,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote);

        }
    }
    fclose(f);
    fclose(f2);
    remove(Listeselectorales);
    rename("nouv.txt", Listeselectorales);
    return test;
}
int nbv (char * ListesElectorales, int * IdListe)
{
{
    Listelectoral p;
    FILE * f=fopen(ListesElectorales, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.id,&P.nomliste ,&P.C[0],&P.C[1],&P.C[2],&P.Orientation,&P.nbrvote)!=EOF)
                {
        if (idListe==P.id)
        return P.nbrvote;
        }
    }
    else
        return -1;
}
}
int L_ordre( char *ListesElectorales, Listelectoral t[], char * fichierusers)
 {  
    








 }