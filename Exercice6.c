/*
Algorithme Vérification si une chaîne est palindrome ou nom
Contsante
    TAILLE = 100;
Variables
    i , j , k , l ,n , m , indice_debut , indice_fin : entiers
    mot : Tableau Chaîne de caractère [TAILLE];
    Ecrire ("Entrez un mot : ");
    Lire (mot);
    n <- strlen (mot); 
    Si (n%2=0) Alors 
        j <- n/2;
        Si (mot[j-1]=mot[j]) Alors
            Ecrire ("La chaîne est palindrome \n");
            Sinon 
            crire ("La chaîne n'est pas palindrome \n");
        FinSi
        Sinon 
        k <- 0;
        l <- 0;
        indice_debut <- 0;
        indice_fin <- n-1;
        Pour (i<-0;i<n;i++) 
            Si (indice_debut<indice_fin) Alors
                l <- l + 1;
                Si (mot[indice_debut]=mot[indice_fin]) Alors
                    k <- k + 1;
                    indice_debut <- indice_debut + 1;
                    indice_fin <- indice_fin - 1; 
                FinSi
            FinSi
        FinPour
        Si (k=l) Alors 
            Ecrire ("La chaîne est palindrome \n");
            Sinon
            Ecrire ("La chaîne n'est pas palindrome \n");
        FinSi
    FinSi
Fin
 
*/

#include <stdio.h>
#include <string.h>
#define TAILLE 100
int main()
{
    int i , j , k , l ,n , m , indice_debut , indice_fin;
    char mot[TAILLE];
    printf("Entrez un mot : ");
    scanf ("%s",mot);
    n = strlen (mot); 
    if (n%2==0)
    {
        j = n/2;
        if (mot[j-1]==mot[j])
        {
            printf("La chaîne est palindrome \n");
        } 
        else
        {
            printf("La chaîne n'est pas palindrome \n");
        }
    }
    else
    {
        k=0;
        l=0;
        indice_debut=0;
        indice_fin=n-1;
        for (i=0;i<n;i++)
        {
            if (indice_debut<indice_fin)
            {
                l++;
                if (mot[indice_debut]==mot[indice_fin])
                {
                    k++;
                    indice_debut++;
                    indice_fin--;
                }
            } 
        }
        if (k==l)
        {
            printf("La chaîne est palindrome \n");
        }
        else
        {
            printf("La chaîne n'est pas palindrome \n");
        }
    }
    return (0);
}