/*
Algoritme Afffichage de l'élement le plus proche de la moyenne 
Constante
    TAILLE = 100; 
Variables
    i , j , k , l , somme , n , max , min : entiers ;
    moyenne : Réel ;
    T : Tableau entier [TAILLE];
    Tab1 : Tableau entier [TAILLE];
    Tab2 : Tableau entier [TAILLE];
Début
    i <- 0;
    Faire 
        i <- i + 1; 
        Si (i > 3) Alors
            Fin;
        FinSi
        Ecrire ("Entrez la Taille du tableau :");
        Lire (n); 
    TantQue (n<1 OU n>TAILLE);
    Pour (i<-0;i<n;i++) 
        Ecrire ("Entrez l'element du tableau: ");
        Lire ("%d",&T[i]);
    FinPour
    somme <- 0;
    Pour (i<-0;i<n;i++)
        somme <- somme + T[i];
    FinPour
    moyenne <- (réel)somme / n; //Calculer la moyenne des élements du tableau
    Pour (i<-0;i<n;i++)
        Ecrire ("  ",T[i]);
    FinPour
    Ecrire (" ",moyenne);
    k <- 0;
    j <- 0;
    Pour (i<-0;i<n;i++)
        Si (T[i]>=moyenne) Alors 
            k <- k + 1;
            Tab1[j] <- T[i]; // Stocker dans un autre tableau Tab1 tous élements supérieur à la moyenne
            j <- j + 1;
        FinSi
    FinPour
    l <- 0;
    j <- 0;
    Pour (i<-0;i<n;i++)
        Si (T[i]<moyenne) Alors 
            l <- l + 1;
            Tab2[j] = T[i]; // Stocker dans un autre tableau Tab2 tous élements inférieur à la moyenne
            j <- j + 1;
        FinSi
    FinPour
    min <- Tab1[0];
    Pour (i<-0;i<k-1;i++)
        Si (Tab1[i+1]<Tab1[i]) Alors
            min <- Tab1[i+1]; // Cherchons le minimum dans le tableau Tab1 qui contient tous élements supérieur à la moyenne
        FinSi
    FinPour
    max <- Tab2[0];
    Pour (i<-0;i<l-1;i++)
        Si (Tab2[i+1]>T[i]) Alors 
            max <- Tab2[i+1]; // Cherchons le maximum dans le tableau Tab1 qui contient tous élements inférieur à la moyenne
        FinSi
    FinPour
    // Comparer les valeurs de la difference entre le minimum et la moyenne et la difference entre le maximum et la moyenne    
    Si ( (min - moyenne) < (moyenne - max) ) Alors
        Ecrire (" L'élement le plus proche de la moyenne est \n",min);
        Sinon Si( (min - moyenne) > (moyenne - max) ) Alors
                Ecrire(" L'élement le plus proche de la moyenne est  \n",max);
                Sinon Si ( (min - moyenne) = (moyenne - max) )
                        Ecrire (" Les élements le plus proche de la moyenne sont %d et %d \n",max,min);
                    FinSi
        FinSi
    FinSi
Fin
    
*/
#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100 
int main ()
{
    int i , j , k , l , somme, n , max , min;
	float moyenne;
    float T[TAILLE];
    int Tab1[TAILLE];
    int Tab2[TAILLE];
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
    while (n<1 || n>TAILLE);
    for (i=0;i<n;i++)
    {
        printf("Entrez l'element du tableau: ");
        scanf("%f",&T[i]);
    }
    somme = 0;
    for (i=0;i<n;i++)
    {
        somme = somme + T[i];
    }
    moyenne = (float)somme / n; //Calculer la moyenne des élements du tableau
    for (i=0;i<n;i++)
    {
        printf("%f",T[i]);
    }
    printf(" \n moyenne = %.2f \n",moyenne);
    k=0;
    j=0;
    for (i=0;i<n;i++)
    {
        if (T[i]>=moyenne)
        {
            k++;
            Tab1[j] = T[i]; // Stocker dans un autre tableau Tab1 tous élements supérieur à la moyenne
            j++;
        }
    }
    l=0;
    j=0;
    for (i=0;i<n;i++)
    {
        if (T[i]<moyenne)
        {
            l++;
            Tab2[j] = T[i]; // Stocker dans un autre tableau Tab2 tous élements inférieur à la moyenne
            j++;
        }
    }
    min = Tab1[0];
    for (i=0;i<k-1;i++)
    {
        if(Tab1[i+1]<min)
        {
            min = Tab1[i+1]; // Cherchons le minimum dans le tableau Tab1 qui contient tous élements supérieur à la moyenne
            j++;
        }
    }
    max = Tab2[0];
    for (i=0;i<l-1;i++)
    {
        if(Tab2[i+1]>max)
        {
            max = Tab2[i+1]; // Cherchons le maximum dans le tableau Tab1 qui contient tous élements inférieur à la moyenne
        }
    }
    // Comparer les valeurs de la difference entre le minimum et la moyenne et la difference entre le maximum et la moyenne
    if ( (min - moyenne) < (moyenne - max) ) 
    {
        printf(" L'élement le plus proche de la moyenne est %d \n",min);
    }
    else if ( (min - moyenne) > (moyenne - max) )
    {
        printf(" L'élement le plus proche de la moyenne est %d \n",max);
    }
    else if ( (min - moyenne) == (moyenne - max) )
    {
        printf(" Les élements le plus proche de la moyenne sont %d et %d \n",max,min);
    }
    return (0);
}    

      
