#include "gestionutilisateur.h"
#include "statFeriel.h"




float TPE(char * filename)
{
    int nv=0, ne=0;
    user p;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d %d %d %s %s %s %s %d \n",
         p.prenom ,p.nom ,&p.genre ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role, &p.vote)!=EOF)
        {
            ne++;
            if(p.vote!=-1)
                nv++;
        }
    }
    return(nv/ne);
}

float agemoyen(char * filename){
    int np=0;//nbr de participants inscrit
    float aget=0;// somme de ts les ages
    float anneeCourante=2022;
    user p;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d %d %d %s %s %s %s %d \n",
         p.prenom ,p.nom ,&p.genre ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role, &p.vote)!=EOF)
        {   
            if(p.dateNaiss.a > 0){
            aget= aget + (anneeCourante- p.dateNaiss.a);
            np++;
            }    
            

        }
    }
    return(aget/np);
}