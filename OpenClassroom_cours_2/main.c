/*
L'ordinateur tire au sort un nombre entre 1 et 100.

Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.

L'ordinateur compare le nombre que vous avez entré avec le nombre « mystère » qu'il a tiré au sort. Il vous dit si le nombre mystère est supérieur ou inférieur à celui que vous avez entré.

Puis l'ordinateur vous redemande le nombre.

… Et il vous indique si le nombre mystère est supérieur ou inférieur.

Et ainsi de suite, jusqu'à ce que vous trouviez le nombre mystère
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void boucle_devine(int val_bool, int choix, int nb_rand)
{

    int essai = 0;
    while(val_bool)
    {
        essai++;
        printf("C'est votre %d essai \n", essai);

        printf("Entrez le nombre choisi par ordi \n");
        scanf("%d",&choix);

        val_bool = (choix==nb_rand) ? 0:1;
        if(choix > nb_rand)
        {
            printf("C'est moins \n");
        }
        else if(choix == nb_rand)
        {
            printf("Bravo vous avez trouve\n");
        }
        else{
            printf("C'est plus \n");
        }
    }
}

int main()
{
    printf("TP open classroom 1\n");

    int MAX = 100, MIN = 1;
    int choix = 0;
    int partie = 1;
    int val_bool = 1;
    int dif = 0;

    //initialise le generateur de nb aleatoire
    srand(time(NULL));

    do{

        //niveau de difficulte
        printf("Choisissez un niveau de difficulte : \n");
        printf("1 : entre 1 et 100 \n");
        printf("2 : entre 1 et 1000 \n");
        printf("3 : entre 1 et 10000 \n");
        scanf("%d",&dif);

        switch(dif)
        {
            case 1 :
                MAX = 100;
                break;
            case 2:
                MAX = 1000;
                break;
            case 3 :
                MAX = 10000;
                break;
            default :
                printf("Choix incorrect \n");
                break;
        }

        //tirage du nombre
        int nb_rand = (rand() % (MAX - MIN+1)) + MIN;
        printf("nombre aleatoire = %d \n", nb_rand);

        boucle_devine(val_bool,choix,nb_rand);

        printf("Voulez vous faire une autre partie ? (1 oui | 0 non) \n ");
        scanf("%d",&partie);

    }while(partie);


    printf("Fin \n");


    return 0;
}
