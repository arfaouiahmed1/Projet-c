#include "Election.h"
#include <stdio.h>

int ajouter(Election E, char ElecList [])
{
    FILE * f=fopen(ElecList, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",E.id,E.Name,E.DDDC.jour,E.DDDC.mois,E.DDDC.annee,E.DFDC.jour,E.DFDC.mois,E.DFDC.annee,E.DDV.jour,E.DDV.mois,E.DDV.annee,E.DFV.jour,E.DFV.mois,E.DFV.annee);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, Election N, char * ElecList)
{
    Election E;
    FILE * f1 =fopen(ElecList, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f1==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f1,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",&E.id,E.Name,&E.DDDC.jour,&E.DDDC.mois,&E.DDDC.annee,&E.DFDC.jour,&E.DFDC.mois,&E.DFDC.annee,&E.DDV.jour,&E.DDV.mois,&E.DDV.annee,&E.DFV.jour,&E.DFV.mois,&E.DFV.annee)!=EOF)
{
if(E.id!=id)
        fprintf(f2,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",E.id,E.Name,E.DDDC.jour,E.DDDC.mois,E.DDDC.annee,E.DFDC.jour,E.DFDC.mois,E.DFDC.annee,E.DDV.jour,E.DDV.mois,E.DDV.annee,E.DFV.jour,E.DFV.mois,E.DFV.annee);
else

  fprintf(f2,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",N.id,N.Name,N.DDDC.jour,N.DDDC.mois,N.DDDC.annee,N.DFDC.jour,N.DFDC.mois,N.DFDC.annee,N.DDV.jour,N.DDV.mois,N.DDV.annee,N.DFV.jour,N.DFV.mois,N.DFV.annee);

}
        fclose(f1);
        fclose(f2);
remove(ElecList);
rename("aux.txt", ElecList);
        return 1;
    }
}


int supprimer(int id, char * ElecList)
{
Election E;
    FILE * f1 =fopen(ElecList, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f1==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f1,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",&E.id,E.Name,&E.DDDC.jour,&E.DDDC.mois,&E.DDDC.annee,&E.DFDC.jour,&E.DFDC.mois,&E.DFDC.annee,&E.DDV.jour,&E.DDV.mois,&E.DDV.annee,&E.DFV.jour,&E.DFV.mois,&E.DFV.annee)!=EOF)
{
if(E.id!=id)
        fprintf(f2,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",E.id,E.Name,E.DDDC.jour,E.DDDC.mois,E.DDDC.annee,E.DFDC.jour,E.DFDC.mois,E.DFDC.annee,E.DDV.jour,E.DDV.mois,E.DDV.annee,E.DFV.jour,E.DFV.mois,E.DFV.annee);

}
        fclose(f1);
        fclose(f2);
remove(ElecList);
rename("aux.txt", ElecList);
        return 1;
    }
}


Election chercher(int id, char * ElecList)
{
Election E;
int tr=0;
    FILE * f=fopen(ElecList, "r");
 if(f!=NULL )
    {
    while(fscanf(f,"%d  %s  %d/%d/%d  %d/%d/%d  %d/%d/%d  %d/%d/%d\n",&E.id,E.Name,&E.DDDC.jour,&E.DDDC.mois,&E.DDDC.annee,&E.DFDC.jour,&E.DFDC.mois,&E.DFDC.annee,&E.DDV.jour,&E.DDV.mois,&E.DDV.annee,&E.DFV.jour,&E.DFV.mois,&E.DFV.annee)!=EOF && tr==0)
        {
            if(id==E.id)
            tr=1;
        }
    }
if(tr==0)
E.id=-1;
return E;

}
