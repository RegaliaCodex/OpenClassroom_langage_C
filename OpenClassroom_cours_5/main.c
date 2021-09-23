#include <stdio.h>
#include <stdlib.h>
//on peut mettre #include "fichier.h" si on veut inclure un autre code

// utilisation de define
#define VAR 10
#define LONGUEUR    100
#define LARGEUR     10
#define RECTANGLE   (LONGUEUR*LARGEUR)
// on peut utiliser un define sans valeur
#define CONSTANTE
// definition d une macro
#define COUCOU() printf("coucou \n");
// peut etre aussi utilise comme ceci :
#define CONV()  printf("hello \n"); \
                printf("Bonjour\n"); \
                printf("ca va ?\n");
#define MAJEUR(age) if(age>=18) \
                    printf("Vous etes majeur \n");

// utilisation de condition dans le define
#if condition1

#elif condition2

#endif // condition1

#define WINDOWS
#ifdef WINDOWS
    //code source windows
#endif // WINDOWS

#ifdef LINUX
    //code source linux
#endif // LINUX

#ifdef MAC
    //code source MAC
#endif // MAC

/* dans un fichier.h toujours ecrire de la maniere suivante :
*ifndef DEF_NOM_FICHIER
*
*#define DEF_NOM_FICHIER
*
*contenue du fichier.h
*
*#endif
*/

int main()
{
    int var = VAR; // var vaut VAR vaut 10
    int aire = RECTANGLE;

    // utilisation de define predefeni
    // __LINE__
    // __FILE__
    // __DATE__
    // __TIME__

    printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
    printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);

    // utilisation de la macro
    COUCOU()
    CONV()
    MAJEUR(23)

    return 0;
}
