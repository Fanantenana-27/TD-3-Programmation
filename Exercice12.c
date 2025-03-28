/*

Algorithme Détermination si un caré est magique ou non 
Constante 
    TAILLE 50
Variable 
    i , j , k , n,somme_ligne,somme_colonne : entiers
    Tableau_carre : Tableau entier [TAILLE][TAILLE];
    Tableau_somme : Tableau entier [TAILLE];
Début
    i <- 0;
    Faire
        i <- i + 1 ;
        Si (i>=3) Alors 
            Fin;
        FinSi
        Ecrire("Entrez la taille du tableau : ");
        Lire(n);
    TantQue (n<2 ET n>TAILLE);
    Ecrire("Entrez les élement du tableau : \n");
    Pour (i<-0;i<n;i++) 
        Pour (j<-0;j<n;j++)
            Ecrire("Tableau_carre[",i,"][",j,"]]= ");
            Lire(Tableau_carre[i][j]);
        Pour
    Pour
    pour (i<-0;i<n;i++)
        somme_ligne <- 0;
        Pour (j<-0;j<n;j++) 
            somme_ligne <- somme_ligne + Tableau_carre[i][j];
        FinPour
        Tableau_somme[i] <- somme_ligne;
    FinPour
    Pour (jV0;j<n;j++) 
        somme_colonne <- 0;
        Pour (i<-0;i<n;i++)
            somme_colonne <- somme_colonne + Tableau_carre[i][j];
        FinPour
        Tableau_somme[n+j] <- somme_colonne;
    FinPour
    k <- 0;
    Pour (i<-0;i<n+n-1;i++) 
        Si (Tableau_somme[i]=Tableau_somme[i+1]) 
            k <- k + 1;
        FinSi
    FinPour
    Si (k=n+n-1) 
        Ecrire("Le carré est magique \n");
        Sinon
        Ecrire("Le carré n'est pas magique \n");
    FinSi
    Pour (i<-0;i<n;i++) 
        Pour (j<-0;j<n;j++)
            Ecrire(" ",Tableau_carre[i][j]);
        FinPour
        Ecrire ("= " , Tableau_somme[i] , " \n");
    FinPour
    Pour (i<-0;i<n;i++) 
        Ecrire("  =  ");
    FinPour
    Ecrire("\n");
    Pour (i<-n;i<n+n;i++) 
        Ecrire(" ",Tableau_somme[i]);
    FinPour
    Ecrire("\n");
Fin

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAILLE 50
int main ()
{
    int i , j , k , n,somme_ligne,somme_colonne;
    int Tableau_carre[TAILLE][TAILLE];
    int Tableau_somme[TAILLE];
    i=0;
    do 
    {
        i++;
        if(i>=3)
        {
            exit (0);
        }
        printf("Entrez la taille du tableau : ");
        scanf("%d",&n);
    }
    while (n<2 && n>TAILLE);
    printf("Entrez les élement du tableau : \n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("Tableau_carre[%d][%d]= ",i,j);
            scanf("%d",&Tableau_carre[i][j]);
        }
    }
    for (i=0;i<n;i++)
    {
        somme_ligne = 0;
        for (j=0;j<n;j++)
        {
            somme_ligne = somme_ligne + Tableau_carre[i][j];
        }
        Tableau_somme[i]=somme_ligne;
    }
    for (j=0;j<n;j++)
    {
        somme_colonne = 0;
        for (i=0;i<n;i++)
        {
            somme_colonne = somme_colonne + Tableau_carre[i][j];
        }
        Tableau_somme[n+j]= somme_colonne;
    }
    k=0;
    for (i=0;i<n+n-1;i++)
    {
        if (Tableau_somme[i]==Tableau_somme[i+1])
        {
            k++;
        }
    }
    if (k==n+n-1)
    {
        printf("Le carré est magique \n");
    }
    else
    {
        printf("Le carré n'est pas magique \n");
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("  %d  ",Tableau_carre[i][j]);
        }
        printf("= %d \n",Tableau_somme[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("  =  ");
    }
    printf("\n");
    for (i=n;i<n+n;i++)
    {
        printf(" %d  ",Tableau_somme[i]);
    }
    printf("\n");
    return (0);
}