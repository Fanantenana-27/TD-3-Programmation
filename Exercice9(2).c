
/*

Algorithme 
Constante
    TAILLE = 100;
Variables 
    i , j , n , demi_indice , nombre : entiers 
    chaine : Tableau Chaîne de caractère [TAILLE];
Début
    Ecrire ("Entrez une chaîne de caractère : ");
    Lire (chaine);
    n <- strlen(chaine);
    demi_indice <- n/2;
    Si (n%2<>0) Alors
        Ecrire ("La chaîne n'est pas carrée \n");
        Sinon Si (n%2=0) Alors
                nombre <- 0;
                Pour (i<-0;i<demi_indice;i++)
                    Si (chaine[i]=chaine[demi_indice]) Alors
                        nombre <- nombre + 1;
                        demi_indice <- demi_indice + 1;
                    FinSi
                FinPour
                Si (nombre=(n/2)) Alors 
                    Ecrire ("La chaîne est carrée \n");
                    Sinon 
                    Ecrire ("La chaîne n'est pas carrée \n");
                FinSi
            FinSi
    FinSi
Fin

*/

#include <stdio.h>
#include <string.h>
#define TAILLE 100
int main ()
{
    int i , j , n , demi_indice , nombre ; 
    char chaine[TAILLE];
    printf("Entrez une chaîne de caractère : ");
    scanf("%s",chaine);
    n = strlen(chaine);
    demi_indice = n/2;
    if (n%2!=0)
    {
        printf("La chaîne n'est pas carrée \n");
    }
    else if (n%2==0)
    {
        nombre = 0;
        for (i=0;i<demi_indice;i++)
        {
            if (chaine[i]==chaine[demi_indice])
            {
                nombre++;
                demi_indice++;
            }
        }
        if (nombre==(n/2))
        {
            printf("La chaîne est carrée \n");
        }
        else 
        {
            printf("La chaîne n'est pas carrée \n");
        }
    }
    return (0);
}