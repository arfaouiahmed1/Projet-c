#include "reclamation.h"






int ajouter(char *les_reclamations, reclamation une_reclamation )
{
    FILE * f=fopen(les_reclamations, "a");
    if(f!=NULL)
    {
        fprintf(f,"%d %d %d %d %s %s \n",une_reclamation.id_observateur,une_reclamation.code_reclamation,une_reclamation.num_liste_reclamee,une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation);
        fclose(f);
        return 1;
    }
    else return 0;
}

int modifier( char *les_reclamations, int code, reclamation reclamation_modifiee )
{
    int tr=0;
    reclamation une_reclamation ;
    FILE * f=fopen(les_reclamations, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %s \n",&une_reclamation.id_observateur,&une_reclamation.code_reclamation,&une_reclamation.num_liste_reclamee,&une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation)!=EOF)
        {
            if(une_reclamation.code_reclamation== code)
            {
                fprintf(f2,"%d %d %d %d %s %s \n",reclamation_modifiee.id_observateur,reclamation_modifiee.code_reclamation,reclamation_modifiee.num_liste_reclamee,reclamation_modifiee.num_bureau_de_vote,reclamation_modifiee.type_reclamation,reclamation_modifiee.texte_reclamation);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %s %s \n",une_reclamation.id_observateur,une_reclamation.code_reclamation,une_reclamation.num_liste_reclamee,une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation);

        }
    }
    fclose(f);
    fclose(f2);
    remove(les_reclamations);
    rename("nouv.txt", les_reclamations);
    return tr;
}


int supprimer(char * les_reclamations, int code)
{
    int tr=0;
    reclamation une_reclamation;
    FILE * f=fopen(les_reclamations, "r");
    FILE * f2=fopen("nouv.txt", "w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %s \n",&une_reclamation.id_observateur,&une_reclamation.code_reclamation,&une_reclamation.num_liste_reclamee,&une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation) !=EOF)
        {
            if(une_reclamation.code_reclamation== code)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %s %s \n",une_reclamation.id_observateur,une_reclamation.code_reclamation,une_reclamation.num_liste_reclamee,une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation);
        }
    }
    fclose(f);
    fclose(f2);
    remove(les_reclamations);
    rename("nouv.txt", les_reclamations);
    return tr;
}


int chercher (char * les_reclamations, int code)
{
    reclamation une_reclamation;
    int tr;
    FILE * f=fopen(les_reclamations, "r");
    if(f!=NULL)
    {
        while(tr==0&& fscanf(f,"%d %d %d %d %s %s \n",&une_reclamation.id_observateur,&une_reclamation.code_reclamation,&une_reclamation.num_liste_reclamee,&une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation)!=EOF)
        {
            if(une_reclamation.code_reclamation== code)
                tr=1;
        }
    }
    fclose(f);
    return tr;



int afficher(char * les_reclamations)
{
    reclamation une_reclamation;
    int tr=0;
    FILE * f=fopen(les_reclamations, "r");
    if(f!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %s %s \n",&une_reclamation.id_observateur,&une_reclamation.code_reclamation,&une_reclamation.num_liste_reclamee,&une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation)!=EOF)
             {
                 fprintf(f,"%d %d %d %d %s %s \n",une_reclamation.id_observateur,une_reclamation.code_reclamation,une_reclamation.num_liste_reclamee,une_reclamation.num_bureau_de_vote,une_reclamation.type_reclamation,une_reclamation.texte_reclamation);
                 tr=1;
        }             
     return tr;  
     
     }
}

