/*
Algorithme Insertion d'un élement X dans tableau d'entier T trié
Constante 
    N = 100;
Variables
    i , j , a , n: entiers;
    T : Tableau entier [N];
Début
    i <- 0;
    Faire
        i <- i + 1;
        Si (i > 3) Alors
            Fin;
        FinSi
        Ecrire("Entrez la Taille du tableau :");
        Lire(n); 
    TantQue (n<1 || n>N);
    Pour (i<-0;i<n;i<-i+1)
        Ecrire("Entrez l'element du tableau: ");
        Lire(T[i]);
    FinPour
    Pour (i<-0;i<n;i<-i+1)
        Ecrire(" ",T[i]);       
    FinPour
    Pour (j<-0;j<n;j<-j+1)
        Pour (i<-0;i<n-1;i<-i+1)
            Si (T[i]>T[i+1]) Alors
                a <- T[i];
                T[i] <- T[i+1];
                T[i+1] <- a;
            FinSi
        FinPour
    FinPour
    Pour (i<-0;i<n;i<-i+1)
        Ecrire(" ",T[i]);       
    FinPour
    n <- n + 1;
    Ecrire("Entrez l'élément X : ");
    Pour (i<-0;i<n;i<-i+1)
        Si (i=n-1) Alors
            Lire(T[i]);
        FinSi
    FinPour
    Pour (i<-0;i<n;i<-i+1)
        Ecrire(" ",T[i]);       
    FinPour
    Pour (i<-n-1;i>0;i<-i-1)
        Si (T[i]<T[i-1]) Alors
            a <- T[i];
            T[i] <- T[i-1];
            T[i-1] <- a;
        FinSi
    FinPour
    Pour (i<-0;i<n;i<-i+1)
        Ecrire(" ",T[i]);       
    FinPour
Fin    
*/
#include <stdio.h>
#include <stdlib.h>
#define N 100
int main ()
{
    int i , j , a , n; 
    int T[N];
    i = 0;
    do
    {
        i++;
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la Taille du tableau :");
        scanf("%d", &n); 
    }
    while (n<1 || n>N);
    for (i=0;i<n;i++)
    {
        printf("Entrez l'element du tableau: ");
        scanf("%d",&T[i]);
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",T[i]);       
    }
    printf("\n");
    for (j=0;j<n;j++)
    {
        for (i=0;i<n-1;i++)
        {
            if (T[i]>T[i+1])
            {
                a = T[i];
                T[i] = T[i+1];
                T[i+1] = a;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",T[i]);       
    }
    printf("\n");
    n = n + 1;
    printf("Entrez l'élément X : ");
    for (i=0;i<n;i++)
    {
        if (i==n-1)
        {
            scanf("%d",&T[i]);
        }
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",T[i]);       
    }
    printf("\n");
    for (i=n-1;i>=0;i--)
    {
        if (T[i]<T[i-1]) 
        {
            a = T[i];
            T[i] = T[i-1];
            T[i-1] = a;
        }
    }
    for (i=0;i<n;i++)
    {
        printf(" %d ",T[i]);       
    }
    printf("\n");
    return (0);
}    