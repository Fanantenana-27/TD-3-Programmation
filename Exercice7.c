
/*

Algorithme Affichage de nombre de d'apparition du caractère 'a' et le nombre d'apparition de la suite 'es'
Constante
    TAILLE = 1000;
Variables
    i , k , l , n : entiers
    text : Tableau Chaîne de caractère [TAILLE];
    Ecrire ("Entrez un texte qui se termine par un point: ");
    Lire (text);
    n <- strlen(text);
    i <- 0;
    TantQue ( text[n-2] <> '.' )
        Ecrire ("Entrez un texte qui se termine par un point: ");
        fgets (text,TAILLE,stdin);
        n <- strlen(text);
    FinTantQue
    k <- 0;
    i <- 0;
    TantQue (text[i]<>'.') Faire
        Si (text[i]<>'a') Alors 
            k <- k + 1;
        FinSi
        i <- i + 1; 
    FinTantQue
    l <- 0;
    i <- 0;
    TantQue (text[i]<>'.')Faire 
        Si ((text[i]='e') Et (text[i+1]='s')) Alors 
            l <- l + 1;
        FinSi
        i <- i + 1;
    FinTantQue
    Ecrire ("Le nombre d'apparition de 'a' est ",k," et le nombre d'appariton de la suite 'es' est ",l);
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE 10000
int main ()
{
    int i , k , l , n;
    char text[TAILLE];
    printf("Entrez un texte qui se termine par un point: ");
    fgets (text,TAILLE,stdin);
    n = strlen(text);
    i = 0;
    while ( text[n-2] != '.' )
    {
        printf("Entrez un texte qui se termine par un point: ");
        fgets (text,TAILLE,stdin);
        n = strlen(text);
    }
    k = 0;
    i = 0;
    while (text[i]!='.')
    {
        if (text[i]=='a')
        {
            k++;
        }
        i++;
    }
    l = 0;
    i = 0;
    while (text[i]!='.')
    {
        if ((text[i]=='e') && (text[i+1]=='s'))
        {
            l++;
        }
        i++;
    }
    printf("Le nombre d'apparition de 'a' est %d  et le nombre d'appariton de la suite 'es' est %d \n",k,l);
    return(0);
}