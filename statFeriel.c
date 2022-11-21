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
    int aget=0;// somme de ts les ages
    int anneeCourante=2022;
    user p;
    FILE * f=fopen(filename, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%s %s %s %d %d %d %d %s %s %s %s %d \n",
         p.prenom ,p.nom ,&p.genre ,&p.cin ,&p.dateNaiss.j ,&p.dateNaiss.m ,&p.dateNaiss.a ,p.id ,p.mdp,p.bv, p.role, &p.vote)!=EOF)
        {   
            if(p.dateNaiss.a > 0){
            aget = aget + (anneeCourante - p.dateNaiss.a);
            //printf("age :  %d \n",aget);
            np++;
            }    
            

        }

    }
        //printf(" nbr part   %d \n ",np);

    return(aget/np);
}