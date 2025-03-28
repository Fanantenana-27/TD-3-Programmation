/*

Algorithme Affichage d'un triangle de Pascal de degré N
Constante 
    TAILLE = 50;
Varible 
    i , j , N: entiers;
    tableau_Pascal : Tableau entiers [Taille][Taille+1];
Début
    Ecrire("Entrez le degré N du triangle de Pascal : ");
    Lire(N);
    Pour (i<-0;i<=N;i++)
        tableau_Pascal[i][0]<-1;
    FinPour
    Pour (j<-1;j<=N;j++)
        tableau_Pascal[0][j]<-0;
    FinPour
    Pour (i<-1;i<=N;i++)
        Pour (j<-1;j<=N;j++)
            tableau_Pascal[i][j]<-tableau_Pascal[i-1][j-1] + tableau_Pascal[i-1][j];
        FinPour
    FinPour
    Pour (i<-0;i<=N;i++)
        Pour (j<-0;j<=N;j++)
            Si (tableau_Pascal[i][j]<>0) Alors
                Ecrire(" ",tableau_Pascal[i][j]);
            FinSi
        FinPour
        Ecrire ("\n");
    FinPour
Fin

*/
#include <stdio.h>
#define TAILLE 1000
int main ()
{
    int i , j , N;
    int tableau_Pascal[TAILLE][TAILLE+1];
    printf("Entrez le degré N du triangle de Pascal : ");
    scanf("%d",&N);
    for (i=0;i<=N;i++)
    {
        tableau_Pascal[i][0]=1;
    }
    for (j=1;j<=N;j++)
    {
        tableau_Pascal[0][j]=0;
    }
    for (i=1;i<=N;i++)
    {
        for (j=1;j<=N;j++)
        {
            tableau_Pascal[i][j]=tableau_Pascal[i-1][j-1] + tableau_Pascal[i-1][j];
        }
    }
    for (i=0;i<=N;i++)
    {
        for (j=0;j<=N;j++)
        {
            if (tableau_Pascal[i][j]!=0)
            {
                printf(" %d ",tableau_Pascal[i][j]);
            }
        }
        printf("\n");
    }
    return (0);
}