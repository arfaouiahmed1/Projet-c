#include "gestionutilisateur.h"


int ajouter(char *filename, user u )
{
    
    FILE * f=fopen(filename, "a");
    if(f!=NULL)
    {
        fprintf( f,"%s %s %d %d %d %d %s %s %s %s %d %c \n", u.prenom ,u.nom ,u.cin ,u.dateNaiss.j ,u.dateNaiss.m ,u.dateNaiss.a ,u.id ,u.mdp,u.bv, u.role,u.vote,u.genre );
        fclose(f);
        return 1;
    }
    else return 0;
}



int modifier( char *filename, int id, user nouv )
{
    int tr=0;
    user p;
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %c \n",
         p.prenom ,p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role,&p.vote, &p.genre)!=EOF)
        {
            if((*p.id)== id)
            {
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %c \n",
         nouv.prenom ,nouv.nom ,nouv.cin ,nouv.dateNaiss.j ,nouv.dateNaiss.m ,nouv.dateNaiss.a ,nouv.id ,nouv.mdp,nouv.bv, nouv.role, nouv.vote,nouv.genre);
                tr=1;
            }
            else
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %c \n", p.prenom ,p.nom ,p.cin ,p.dateNaiss.j ,p.dateNaiss.m ,p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role,p.vote,p.genre );
        

        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;

}
int supprimer(char *filename, int id)
{
    int tr=0;
    user p; 
    FILE * f=fopen(filename, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %c \n",
         p.prenom ,p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role,&p.vote,&p.genre)!=EOF)
        {
            if(*p.id == id)
                tr=1;
            else
                fprintf(f2,"%s %s %d %d %d %d %s %s %s %s %d %c \n", p.prenom ,p.nom ,p.cin ,p.dateNaiss.j ,p.dateNaiss.m ,p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role,p.vote, p.genre );
        }
    }
    fclose(f);
    fclose(f2);
    remove(filename);
    rename("nouv.txt", filename);
    return tr;
}
 user chercher(char *filename, int id)
{
    user p;
    int tr=0;
    char vide[]="-1";
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%s %s %d %d %d %d %s %s %s %s %d %c\n",
         p.prenom ,p.nom ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role, &p.vote,&p.genre)!=EOF)
        {
            if(*p.id == id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0){
        //p.id = vide;
        strcpy(p.id,vide);
    }
    return p;

}

