#include "bureau.h"
#include<stdio.h>
int ajouter(bv b , char filename [])
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s %s\n",b.id_bv,b.id_ag,b.cap_elect,b.cap_obs,b.salle,b.adresse);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier(int id, bv nouv, char * filename)
{
bv b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %s %s\n",&b.id_bv,&b.id_ag,&b.cap_elect,&b.cap_obs,b.salle,b.adresse)!=EOF)
{
if(b.id_bv!=id)
        fprintf(f2,"%d %d %d %d %s %s\n",b.id_bv,b.id_ag,b.cap_elect,b.cap_obs,b.salle,b.adresse);
else

  fprintf(f2,"%d %d %d %d %s %s\n",b.id_bv,b.id_ag,b.cap_elect,b.cap_obs,b.salle,b.adresse);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
  
}

int supprimer(int id, char * filename)
{
bv b;
    FILE * f=fopen(filename, "r");
    FILE * f2 =fopen("aux.txt", "w");
    if(f==NULL || f2==NULL)
return 0;
else
    {
while(fscanf(f,"%d %d %d %d %s %s\n",&b.id_bv,&b.id_ag,&b.cap_elect,&b.cap_obs,b.salle,b.adresse)!=EOF)
{
if(b.id_bv!=id)
        fprintf(f2,"%d %d %d %d %s %s\n",b.id_bv,b.id_ag,b.cap_elect,b.cap_obs,b.salle,b.adresse);

}
        fclose(f);
        fclose(f2);
remove(filename);
rename("aux.txt", filename);
        return 1;
    }
}

bv chercher(int id, char * filename)
{
bv b; int tr=0;
    FILE * f=fopen(filename, "r");
 if(f!=NULL )
    {
while(fscanf(f,"%d %d %d %d %s %s\n",&b.id_bv,&b.id_ag,&b.cap_elect,&b.cap_obs,b.salle,b.adresse)!=EOF && tr==0)
{if(id==b.id_bv)
tr=1;
}
}
if(tr==0)
b.id_bv=-1;
return b;

}
