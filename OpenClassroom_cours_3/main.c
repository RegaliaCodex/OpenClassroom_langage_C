// en c declarer fonction avant main comme ceci :       cependant cela se fait rarement on preferera utiliser des headers
/*
* int fonction(int a, double b);

*int main(int argc, char *argv[])
*{
*   fonction(a, b);
*   return  0;
*}
*int fonction(int a, double b)
*{
*   double c = 0;
*   c = a*b;
*   return c;
*}
*/

// dans un fichier mettre focntion concernant le meme theme

#include <stdio.h>
#include <stdlib.h>
#include "fichier1.h"

int var_glob = 0;
static int var_glob_fich = 0;   // variable globale utilisable uniquement dans CE FICHIER
// on utilise aussi static dans une fonction pour que la prochaine fois qu'elle soit appelee la fonction conserve en valeur sa memoire
// (utile quand une fonction est appele dans une boucle)

void fonc();

int main(int argc, char *argv[])
{
    coucou();
    fonc();
    return 0;
}

void fonc_1()
{
    printf("Salut !");
}

static void fonc_2()    // fonction accessible dans tout le fichier par a l'exterieur de celui ci
{
    printf("Hi");
}

// les compilations des fichiers .c sont stockées dans le repertoire lib

// une variable declare dans une fonction est efface de la memoire lors de la fin de la fonction  appele --> utilisation
//de variables globales si n veut les reutiliser
