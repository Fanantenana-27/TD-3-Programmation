/*
Algorithme Verification de l'existence de T2 dans T1 et suppression de s élements de T2 dans T1
Constantes 
    maximum = 50; 
    max = 100;
Variables 
    i , j , k , l , m , n , p , q: entiers
    T1 : Tableau entier [maximum];
    T2 : Tableau entier [max];
Debut
    i <- 0;
    Faire
        i <- i + 1; 
        Si (i > 3) Alors
            Fin;
        FinSi
        Ecrire("Entrez la Taille du tableau T1:");
        Lire(n); 
    TantQue (n<1 OU n>maximum);
    i <- 0;
    Faire
        i <- i + 1; 
        Si (i > 3) Alors
            Fin;
        FinSi
        Ecrire("Entrez la Taille du tableau T2:");
        Lire(m); 
    TantQue (m<1 OU m>max);
    Pour (i<-0;i<n;i++)
        Ecrire("Entrez l'element du tableau T1 : ");
        Lire(T1[i]);
    FinPour
    Pour (i<-0;i<m;i++)
        Ecrire("Entrez l'element du tableau T2 : ");
        Lire(T2[i]);
    FinPour
    Ecrire("T1 : ");
    Pour (i<-0;i<n;i++)
        Ecrire(" ",T1[i]);
    FinPour
    k <- 0;
    j <- 0;
    Pour (i<-0;i<n;i++)
        Si (T1[i]=T2[j]) // Verifier que l'élément de l'indice i du tableau T2 appartient dans T1
            Si (j<m-1)  
                Si (T1[i+1]=T2[j+1]) // Verifier que l'élément de l'indice i+1 du tableau T2 appartient dans T1 si l'élément n'est pas l'élement du tableau de l'indice fin
                    Ecrire("T1[%d]=T2[%d]=%d\n",i,j,T1[i]);
                    j <- j + 1;
                FinSi
            FinSi
            Sinon Si (j=m-1) // Verifier que l'élément de l'indice fin du tableau T2 appartient dans T1
                Ecrire("T1[",i,"]=T2[",j,"]]="T1[i]);
                j <- j + 1;
                p <- i;
            FinSi
            Si (j = m) // Verifier que tous les élements du tableau T2 appartiennent dans T1
                Ecrire("T2 existe dans T1 ");
            FinSi
        FinSi
    FinPour
    q <- (p+1) - m; 
    Si (k = 1) // Suppression des éléments de T2 dans T1 s'ils appartiennent dans T1
        Pour (j<-0;j<m;j++)
            Pour (i<-q;i<n-1;i++)
                l <- T1[i];
                T1[i] <- T1[i+1];
                T1[i+1] <- l;
            FinPour
        FinPour
        Ecrire("T2 : ");
        Pour (i<-0;i<m;i++)
            Ecrire(" ",T2[i]);
        FinPour
        Ecrire("T1 : ");
        Pour (i<-0;i<n-m;i++)
            Ecrire(" ",T1[i]);
        FinPour
        Sinon Si (k = 0) // Si T2 n'existe pas T1
            Ecrire("T2 n'existe pas dans T1 ");
            Ecrire("T2 : ");
            Pour (i<-0;i<m;i++)
                Ecrire(" ",T2[i]);
            FinPour
            Ecrire("T1 : ");
            Pour (i<-0;i<n;i++)
                Ecrire(" ",T1[i]);
            FinPour
        FInSi
    FinSi    
Fin
*/

#include <stdio.h>
#include <stdlib.h>
#define maximum 50 
#define max 100
int main ()
{
    int i , j , k , l , m , n , p , q ;
    int T1[maximum];
    int T2[max];
    i = 0;
    do
    {
        i++; 
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la Taille du tableau T1:");
        scanf("%d", &n); 
    }
    while (n<1 || n>maximum);
    i = 0;
    do
    {
        i++; 
        if(i > 3)
        {
            exit(0);
        }
        printf("Entrez la Taille du tableau T2 :");
        scanf("%d", &m); 
    }
    while (m<1 || m>max);
    for (i=0;i<n;i++)
    {
        printf("Entrez l'element du tableau T1 : ");
        scanf("%d",&T1[i]);
    }
    for (i=0;i<m;i++)
    {
        printf("Entrez l'element du tableau T2 : ");
        scanf("%d",&T2[i]);
    }
    printf("T1 : ");
    for (i=0;i<n;i++)
    {
        printf(" %d ",T1[i]);
    }
    printf("\n");
    k = 0;
    j = 0;
    for (i=0;i<n;i++)
    {
        if (T1[i]==T2[j]) // Verifier que l'élément de l'indice i du tableau T2 appartient dans T1
        {
            if (j<m-1)  
            {
                if (T1[i+1]==T2[j+1]) // Verifier que l'élément de l'indice i+1 du tableau T2 appartient dans T1 si l'élément n'est pas l'élement du tableau de l'indice fin
                {
                    printf("T1[%d]=T2[%d]=%d\n",i,j,T1[i]);
                    j++;
                }
            }
            else if (j==m-1) // Verifier que l'élément de l'indice fin du tableau T2 appartient dans T1
            {
                printf("T1[%d]=T2[%d]=%d\n",i,j,T1[i]);
                j++;
                p = i;
            }
            if (j == m) // Verifier que tous les élements du tableau T2 appartiennent dans T1
            {
                printf("T2 existe dans T1 \n");
                k = 1;
            }
        }
    }
    q = (p+1) - m;
    if (k == 1) // Suppression des éléments de T2 dans T1 s'ils appartiennent dans T1
    {
        for (j=0;j<m;j++)
        {
            for (i=q;i<n-1;i++)
            {
                l = T1[i];
                T1[i] = T1[i+1];
                T1[i+1] = l;
            }
        }
        printf("T2 : ");
        for (i=0;i<m;i++)
        {
            printf(" %d ",T2[i]);
        }
        printf("\n");
        printf("T1 : ");
        for (i=0;i<n-m;i++)
        {
            printf(" %d ",T1[i]);
        }
        printf("\n");
    }
    else if (k == 0) // Si T2 n'existe pas T1
    {
        printf("T2 n'existe pas dans T1 \n");
        printf("T2 : ");
        for (i=0;i<m;i++)
        {
            printf(" %d ",T2[i]);
        }
        printf("\n");
        printf("T1 : ");
        for (i=0;i<n;i++)
        {
            printf(" %d ",T1[i]);
        }
        printf("\n");

    }
    return (0);
}
