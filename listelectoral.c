#include "listelectoral.h"
#include <stdio.h>

int ajoutedeliste(char * Listeselectorales, Listelectoral P )
{
    FILE * f=fopen(Listeselectorales, "a");
    if(f!=NULL)
    {   
            fprintf(f,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
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
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF)
        {
            if(P.idlist==id)
            {
                fprintf(f2,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
                test=1;
            }
            else
                fprintf(f,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);

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
    Listelectoral P;
    FILE * f=fopen(Listeselectorales, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF)
        {
            if(P.idlist==id)
                test=1;
            else
                fprintf(f2,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
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
    Listelectoral P;
    int test=0;
    FILE * f=fopen(Listeselectorales, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF && test==0)
        {
            if(P.idlist==id)
                test=1;
        }
    }
    fclose(f);
    if(test==0)
        P.idlist=-1;
    return P;
}

int voter (char * Listeselectorales,char * usere, int iduser, int idlist)
{
    int test;
    Listelectoral P;
    user U;
    FILE * f1=fopen(Listeselectorales, "r");
    FILE * f2=fopen("allusers", "w");
    fclose(f2);
    FILE * f5=fopen("allusers", "r");
    FILE * f3=fopen("nouv.txt", "w");
    if(f1!=NULL && f2!=NULL && f3!=NULL)
    {
        while(fscanf(f5,"%s %s %c %d %d %d %d %s %s %s %s %d \n",U.prenom,U.nom,&U.genre,&U.cin,&U.dateNaiss.j,&U.dateNaiss.m,&U.dateNaiss.a,U.id,U.mdp,U.bv,U.role,&U.vote)!=EOF)
     {
        if (*U.id==iduser && U.vote==-1)
        {
            while(fscanf(f1,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF)
            {
                if(P.idlist==idlist)
                {
                    P.nbrvote++;
                    U.vote=P.idlist;
                    fprintf(f3,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
                    test=P.idlist;
                }
                else 
                {
                    fprintf(f3,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
                    test=0;
                }
                
            }
        }
    }    
    fclose(f1);
    fclose(f2);
    fclose(f3);
    remove(Listeselectorales);
    rename("nouv.txt", Listeselectorales);
    return test;
    }
}
int nbv (char * ListesElectorales, int * IdList)
{
    Listelectoral P;
    FILE * f=fopen(ListesElectorales, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF)
                {
        if (*IdList==P.idlist)
        return P.nbrvote;
        }
    }
    else
        return -1;
}
int L_ordre( char * ListesElectorales, Listelectoral t[])
{  
    int permut,j,aux;
    int nbrlistes=0;
    Listelectoral P;
    FILE * f1=fopen(ListesElectorales, "r");
    if(f1!=NULL)
    {      
        while(fscanf(f1,"%d %s %d %d %d %s %d \n",&P.idlist,P.nomliste,&P.condidat[0],&P.condidat[1],&P.condidat[2],P.Orientation,&P.nbrvote)!=EOF)
            {
                t[nbrlistes]=P;
                nbrlistes++;
            }
        do
           {
                permut=0;
                    for(j=0;j<nbrlistes;j++ )
                        {
                            if (t[j+1].nbrvote>t[j].nbrvote)
                                   {
                                        aux=t[j].nbrvote;
                                        t[j].nbrvote=t[j+1].nbrvote;
                                        t[j+1].nbrvote=aux ;
                                        permut=1;
                                    }
                            }
            }
                while (permut==1);
    }
    fclose(f1);
    FILE * f2=fopen("Listeselectoralestrie.txt", "w");
    if(f2!=NULL)
    {
        for (j=0;j<nbrlistes;j++)
        {
            fprintf(f2,"%d %s %d %d %d %s %d \n",P.idlist,P.nomliste,P.condidat[0],P.condidat[1],P.condidat[2],P.Orientation,P.nbrvote);
        }
    }
    return nbrlistes;
}
