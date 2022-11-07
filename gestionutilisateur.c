#include "gestionutilisateur.h"


int ajouter(char * filename, user u )
{
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf( f,"%s %s %d %d %d %d %s %s %s %s \n", p.prenom ,p.nom ,p.cin ,p.dateNaiss.j ,p.dateNaiss.m ,p.dateNaiss.a ,p.id ,p.md,p.bv, p.role );
        fclose(f);
        return 1;
    }
    else return 0;
}







int modifier( char * filename, int id, user nouv )
{
    int tr=0;
     ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s \n",
         &p.prenom ,&p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,&p.id ,&p.md,&p.bv, &p.role)!=EOF)
        {
            if(p.id== id)
            {
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s \n",
         nouv.prenom ,nouv.nom ,nouv.cin ,nouv.dateNaiss.j ,nouv.dateNaiss.m ,nouv.dateNaiss.a ,nouv.id ,nouv.md,nouv.bv, nouv.role);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s \n", p.prenom ,p.nom ,p.cin ,p.dateNaiss.j ,p.dateNaiss.m ,p.dateNaiss.a ,p.id ,p.md,p.bv, p.role );
        

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char * filename, int id)
{
    int tr=0;
     ;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s \n",
         &p.prenom ,&p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,&p.id ,&p.md,&p.bv, &p.role)!=EOF)
        {
            if(p.id== id)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s \n", p.prenom ,p.nom ,p.cin ,p.dateNaiss.j ,p.dateNaiss.m ,p.dateNaiss.a ,p.id ,p.md,p.bv, p.role );
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
 user chercher(char * filename, int id)
{
     ;
    int tr;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%s %s %d %d %d %d %s %s %s %s \n",
         &p.prenom ,&p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,&p.id ,&p.md,&p.bv, &p.role)!=EOF)
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

