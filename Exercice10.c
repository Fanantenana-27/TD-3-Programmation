
/*

Algorithme Cryptage d'une phrase en français
Constante
    TAILLE = 100;
Variables
    i , j , k , l , n , p , q , test: entiers
    phrase : Tableau Chaine de caractère [TAILLE];
    chiffre : Tableau caractère [10] = {'0','1','2','3','4','5','6','7','8','9'};
    voyelle : Tableau caractère [6] = {'a','e','u','i','o','y'};
Début
    Ecrire ("Entrez une phrase : ");
    Lire (phrase);
    n <- strlen (phrase);
    k <- 0;
    Pour (i<-0;i<n;i++) 
        Pour (j<-0;j<6;j++) 
            Si (phrase[i]=voyelle[j]) Alors 
                k <- k + 1; // Compter le nombre des voyelles dans la phrase
            FinSi
        FinPour
    FinPour
    i <- 0;
    TantQue (i<n) 
        Pour (j<-0;j<10;j++) 
            Si (phrase[i]=chiffre[j])  Alors // Vérifie s'il y a de chiffre dans la chaîne
                Ecrire ("Retapez la phrase : ");
                Lire (phrase);
                n <- strlen (phrase);
                i <- 0;
                k <- 0;
                Pour (i<-0;i<n;i++) 
                    Pour (j<-0;j<6;j++) 
                        Si (phrase[i]=voyelle[j]) Alors 
                            k <- k + 1; // Compter le nombre des voyelles dans la phrase
                        FinSi
                    FinPour
                FinPour 
                Sinon
                i <- i + 1;
            FinSi
        FinPour
    FinTantQue
    Si (TAILLE < n + (k*2)) Alors 
        Fin; 
    FinSi
    Ecrire ("Phrase en français : ");
    Ecrire (phrase);
    i <- 0;
    p <- n+(k*2);
    Pour (i<-0;i<p-1;i++) 
        Pour (j<-0;j<6;j++) 
            Si (phrase[i]=voyelle[j]) Alors
                Pour (k<-0;k<6;k++) 
                    Si (phrase[i-1]<>voyelle[k]) Alors 
                        test <- 0; 
                        Sinon 
                        test <- 1;
                        Fin;
                    FinSi
                FinPour
                Si (test = 0) Alors 
                    q <- n - 1;
                    TantQue (q>=i) 
                        phrase[q+2]<-phrase[q]; 
                        phrase[q+1]<-phrase[q-1];
                        q <- q - 1;
                    FinTantQue
                    // Ajouter 'I' et 'J' devant le voyellle
                    phrase[i]<-'I';
                    phrase[i+1]<-'T'; 
                    n <- strlen (phrase);
                    i <- i + 3;
                FinSi
            FinSi
        FinPour
    FinPour
    Ecrire ("Phrase en cryptée : ");
    Ecrire (phrase);
Fin

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAILLE 100
int main ()
{
    int i , j , k , l , n , p , q , test;
    char phrase[TAILLE];
    char chiffre [10] = {'0','1','2','3','4','5','6','7','8','9'};
    char voyelle [6] = {'a','e','u','i','o','y'};
    printf("Entrez une phrase : ");
    fgets (phrase,TAILLE,stdin);
    n = strlen (phrase);
    k = 0;
    for (i=0;i<n;i++)
    {
        for (j=0;j<6;j++)
        {
            if (phrase[i]==voyelle[j])
            {
                k++; // Compter le nombre des voyelles dans la phrase
            }
        }
    }
    i = 0;
    while (i<n)
    {
        for (j=0;j<10;j++)
        {
            if (phrase[i]==chiffre[j]) // Vérifie s'il y a de chiffre dans la chaîne
            {
                printf("Retapez la phrase : ");
                fgets (phrase,TAILLE,stdin);
                n = strlen (phrase);
                i=0;
                k=0;
                for (i=0;i<n;i++)
                {
                    for (j=0;j<6;j++)
                    {
                        if (phrase[i]==voyelle[j])
                        {
                            k++; // Compter le nombre des voyelles dans la phrase
                        }
                    }
                }
            }
            else
            {
                i++;
            }
        }
    }
    if (TAILLE < n + (k*2))
    {
        exit (0); 
    }
    printf("Phrase en français : ");
    puts(phrase);
    i=0;
    p=n+(k*2);
    for (i=0;i<p-1;i++)
    {
        for (j=0;j<6;j++)
        {
            if (phrase[i]==voyelle[j])
            {
                for (k=0;k<6;k++)
                {
                    if (phrase[i-1]!=voyelle[k])
                    {
                        test = 0;
                    }
                    else
                    {
                        test = 1;
                        break;
                    }
                }
                if (test == 0)
                {
                    q = n - 1;
                    while (q>=i)
                    {
                        phrase[q+2]=phrase[q]; 
                        phrase[q+1]=phrase[q-1];
                        q--;
                    }
                    // Ajouter 'I' et 'J' devant le voyellle
                    phrase[i]='I';
                    phrase[i+1]='T'; 
                    n = strlen (phrase);
                    i = i + 3;
                }
            }
        }
    }
    printf("Phrase en cryptée : ");
    puts(phrase);
    return (0);
}


    

