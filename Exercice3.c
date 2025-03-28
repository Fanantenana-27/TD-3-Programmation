/*
Algorithme Suppression d'un élement X donné dans un tableau T de N entiers donné
Constante
    N = 100;
Variables 
    a , i , j , k , l , m , n , p : entiers 
    T : Tableau entier [N];
Début
    i <- 0;
    Faire 
        i <- i + 1; 
        Si (i > 3) Alors 
            Fin; 
        FinSi
        Ecrire ("Entrez la Taille du tableau :");
        Lire (n); 
    TantQue (n<1 OU n>N);
    Pour (i<-0;i<n;i++) 
        Ecrire ("Entrez l'element du tableau: ");
        Lire (T[i]);
    FinPour
    // Affichage du tableau initial
    Pour (i<-0;i<n;i++) 
        Ecrire (" ",T[i]);
    FinPour
    Ecrire ("\n");
    Ecrire ("Entrez la valeur de l'élément à supprimer : ");
    Lire (a);
    // Si l'utilisateur entre une valeur n'appartient pas dans le tableau
    p <- 0;
    Faire 
        Pour (i<-0;i<n;i++) 
            Si (T[i]= a) Alors 
                p <- p + 1 ;
            FinSi
        FinPour
        Si (p=0) Alors
            Ecrire ("La valeur que vous avez entrer n'appartient pas dans le tableau \n");
            Ecrire ("Veuillez retaper la valeur de l'élement à supprimer : ");
            Lire (a);
        FinSi
    TantQue  (p=0);
    // Effacher tous les occurences de a 
    p <- 0;
    Pour (i<-0;i<n;i++) 
        Si (T[i]=a) Alors 
            p <- p + 1;
        FinSi
    FinPour
    Pour (j<-0;j<p;j++) 
        Pour (i<-0;i<n-1;i++)
            Si (T[i]=a) Alors 
                m <- T[i];
                T[i] <- T[i+1];
                T[i+1] <- m;
            FinSi
        FinPour
    FinPour
    Pour (i<-0;i<n;i++)
        Si (T[i]<>a) Alors 
            Ecrire (" ",T[i]);
        FinSi
    FinPour
    Ecrire ("\n");
Fin



*/

#include <stdio.h>
#include <stdlib.h>
#define N 100 
int main ()
{
    int a , i , j , k , l , m , n , p; 
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
    // Affichage du tableau initial
    for (i=0;i<n;i++)
    {
        printf(" %d ",T[i]);
    }
    printf("\n");
    printf("Entrez la valeur de l'élément à supprimer : ");
    scanf("%d",&a);
    // Si l'utilisateur entre une valeur n'appartient pas dans le tableau
    p = 0;
    do
    {
        for (i=0;i<n;i++)
        {
            if (T[i]== a)
            {
                p++;
            }
        }
        if (p==0)
        {
            printf("La valeur que vous avez entrer n'appartient pas dans le tableau \n");
            printf("Veuillez retaper la valeur de l'élement à supprimer : ");
            scanf("%d",&a);
        }
    }
    while (p==0);
    // Effacher tous les occurences de a 
    p = 0;
    for (i=0;i<n;i++)
    {
        if (T[i]==a)
        {
            p++;
        }
    }
    for (j=0;j<p;j++)
    {
        for (i=0;i<n-1;i++)
        {
            if (T[i]==a)
            {
                m = T[i];
                T[i] = T[i+1];
                T[i+1] = m;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if (T[i]!=a)
        {
            printf(" %d ",T[i]);
        }
    }
    printf("\n");
    return (0);
}

