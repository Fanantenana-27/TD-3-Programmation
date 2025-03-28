
/*

Algorithme Calcul de nombre d'occurence d'un bigramme donné dans une chaîne de caractère 
Constante 
    TAILLE = 100;
Variables
    i, n, k, l : entiers
    chaine : Tableau Chaîne de caractère [TAILLE];
Début
    Ecrire ("Entrez une chaîne de caractères : ");
    fgets(chaine,N,stdin);
    n <- strlen(chaine); 
    k <- 0;
    Pour (i<-0;i<n;i++)
        Si ((chaine[i]>='a' Et chaine[i]<='z') OU (chaine[i]>='A' ET chaine[i]<='Z') ) 
            Si ((aine[i+1]>='a' ET chaine[i+1]<='z') OU (chaine[i+1]>='A' ET chaine[i+1]<='Z') )
                k <- k + 1;
            FinSi
        FinSi
    FinPour
    Ecrire (" ",k);
Fin

*/

#include <stdio.h>
#include <string.h>
#define TAILLE 100
int main ()
{    
    int i, n, k, l;
    char chaine[TAILLE];
    printf("Entrez une chaîne de caractères : ");
    fgets(chaine,TAILLE,stdin);
    n = strlen(chaine); 
    k=0;
    for (i=0;i<n;i++)
    { 
        if ((chaine[i]>='a' && chaine[i]<='z') || (chaine[i]>='A' && chaine[i]<='Z') )
        {
            if ((chaine[i+1]>='a' && chaine[i+1]<='z') || (chaine[i+1]>='A' && chaine[i+1]<='Z') )
            {
                k++;
            }
        }
    }
    printf("Le nombre d'occerence d'un bigramme dans cette chaîne est %d \n",k);
    return (0);
}