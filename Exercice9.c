
/*

Algoritme Dire si une chaîne est carrée ou non 
Constante 
    TAILLE = 100?
Variables
    n , m :entier;
    W : Tableau Chaîne de caractère [TAILLE];
    U : Tableau Chaîne de caractère [TAILLE];
Début
    Ecrire (" Entrez la chaîine : ");
    Lire (W);
    n <- strlen (W);
    m <- n/2;
    strncpy (U,W,m);
    Si (n%2 <> 0) Alors 
        Ecrire (" La chaîne n'est pas carrée \n");
        Sinon 
            Si ( strcmp (W,(strcat (U,U))) == 0) Alors 
                Ecrire (" La chaîne est  carrée \n");
                Sinon
                Ecrire (" La chaîne n'est pas carrée \n");
            FinSi
    FinSi 
Fin


*/

#include <stdio.h>
#include <string.h>
#define TAILLE 100
int main ()
{
    int n , m ;
    char W[TAILLE];
    char U[TAILLE];
    printf(" Entrez la chaîine : ");
    scanf("%s",W);
    n = strlen (W);
    m = n/2;
    strncpy (U,W,m);
    if (n%2 != 0)
    {
        printf (" La chaîne n'est pas carrée \n");
    }
    else
    {
        if ( strcmp (W,(strcat (U,U))) == 0)
        {
            printf (" La chaîne est  carrée \n");
        }
        else
        {
            printf (" La chaîne n'est pas carrée \n");
        }
    }
    return (0);
}
