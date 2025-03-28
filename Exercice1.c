/*
Algorithme Affichage du tableau de telle sorte que tous les entiers pairs se retrouvent avant les antiers impairs
Constante
    N = 100;
Variables
    i , j , a , k , n : entiers;
    T : Tableau entier [N];
Début
    i <- 0;
    Faire
        i <- i+1;
        Si (i > 3) Alors
            Fin;
        FinSi 
        Écrire("Entrez la taille du tableau :");
        Lire(n);
    TantQue (n<1 || n>N); 
    Pour (i<-0;i<n;i<-i+1)  
        Écrire("Entrez un nombre entier n ");
        Lire(T[i]);
    FinPour
    Pour (i<-0;i<n;i<-i+1)
        Ecrire(" ",T[i]);
    FinPour
    k <- 0;
    Pour (i<-0;i<n;i<-i+1)
        Si (T[i]%2<>0) Alors
            k <- k + 1;
        FinSi
    FinPour
    Pour (j<-0;j<k;j<-j+1)
        Pour (i<-0;i<n-1;i<-i+1)
            Si (T[i]%2<>0) Alors
                a <- T[i];
                T[i] <- T[i+1];
                T[i+1] <- a;
            FinSi
        FinPour
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
    int i , j , a , k , n; 
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
    k = 0;
    for (i=0;i<n;i++)
    {
        if ( T[i]%2!=0 )
        {
            k++;
        }
    }
    for (j=0;j<k;j++)
    {
        for (i=0;i<n-1;i++)
        {
            if (T[i]%2 != 0)
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
    return (0);
}
