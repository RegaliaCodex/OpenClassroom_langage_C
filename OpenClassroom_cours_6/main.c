#include <stdio.h>
#include <stdlib.h>

void aff_tab(int *tab, int taille);
int somme_tab(int *tab, int taille);
double moytab(int *tab, int taille);
void coptab(int *tab1, int *tab2, int taille);
void maxtab(int *tab, int taille, int max);
void ordtab(int *tab, int taille);

int main(int argc, char *argv[])
{
    //Les pointeurs
    int age = 23;
    // %p indique que l'on affiche l'adresse du pointeur
    // & indique que l'on veut l'adresse du pointeur en hexa
    printf("Adresse de votre age = %p \n", &age);

    // declaration pointeur sans adresse
    int *pointeur = NULL;

    // declaration pointeur stockant adresse var age
    int *pointeurage = &age;
    // affiche l'age grace a %d
    printf("Votre age : %d \n", *pointeurage);

    // les pointeurs permettent de modifier directement la valeur stocke a l adresse lui etant attribue

    //maniere d'utiliser le scanf

    int nombre = 0;
    int *npointeur = &nombre;
    printf("entre un nombre \n");
    scanf("%d", npointeur);

    // declaration tableau
    int tab[4]; //tableau de 4 elements
    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    // renvoi adresse tableau
    printf("tableau : %d", tab);
    // renvoi valeur 0 tableau
    printf("tableau 0 %d", tab[0]);

    int valtab = 0;
    valtab = tab[1];
    // est pareil que :
    valtab = *(tab+1);

    // creation de tableau a taille dynamique (version compilateur c99) :
    int taille = 5;
    int tabdyn[taille];
    // cependant pas forcement reconnu par tous les compilateurs
    // -> dans ce cas utiliser allocation dynamique (voir plus tard)

    // initialisation tableau a 0
    int tab_1[5] = {0,0,0,0,0};
    //init tab avec val
    int tab_2[5] = {10,23};
    // -> donne 10,23,0,0,0
    int tab_3[5] = {0};
    // -> init tout le tableau a 0

    //fonction aff tab_2
    aff_tab(tab_2, 7);

    //fonction sommetab
    int s = 0;
    s = somme_tab(tab_2,5);
    printf("valeur somme tab %d \n", s);

    //fonction moytab
    double m = 0;
    m = moytab(tab_2,2);
    printf("valeur moyenne tab : %f \n", m);

    //fonction coptab
    int ctab_1[2] = {2,2};
    int ctab_2[2] = {0};
    coptab(ctab_1, ctab_2, 2);
    printf("tableau 2 copie ! \n");
    for(int i = 0; i<2; i++)
    {
        printf("%d\n", tab_2[i]);
    }

    //fonction maxtab
    maxtab(tab_2, 5, 11);
    printf("maxtab ! \n");
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", tab_2[i]);
    }

    //fonction ordtab
    int otab[4] = {15, 81, 22, 13};

    printf("tableau non ordonne ! \n");
    for(int i = 0; i<4; i++)
    {
        printf("%d\n", otab[i]);
    }

    ordtab(otab, 4);

    printf("tableau ordonne ! \n");
    for(int i = 0; i<4; i++)
    {
        printf("%d\n", otab[i]);
    }

    return 0;
}

aff_tab(int *tab, int taille)
{
    for(int i =0; i<taille; i++)
    {
        printf("val tab n° %d %d \n", i, tab[i]);
    }
}

int somme_tab(int *tab, int taille)
{
    int somme = 0;
    for(int i = 0; i<taille; i++)
    {
        somme = somme + tab[i];
    }

    return somme;
}

double moytab(int *tab, int taille)
{
    double somme = 0;
    double moyenne = 0;
    int i = 0;
    for(i = 0; i<taille; i++)
    {
        somme = somme + tab[i];
    }
    moyenne = somme/i;
    return moyenne;
}

void coptab(int *tab1, int *tab2, int taille)
{
    for(int i = 0; i<taille; i++)
    {
        tab2[i] = tab1[i];
    }
}

void maxtab(int *tab, int taille, int max)
{
    for(int i =0; i<taille; i++)
    {
        if(tab[i]<max)
        {
            tab[i] = 0;
        }
    }
}

void ordtab(int *tab, int taille)
{
    int tmp = 0;
    for(int i = 0; i<taille-1; i++)
    {
        for(int j = 0; j<taille-1; j++)
        {
            if(tab[j] > tab[j+1])
            {
                tmp = tab[j];
                tab[j] = 0;
                tab[j] = tab[j+1];
                tab[j+1] = 0;
                tab[j+1] = tmp;
                tmp = 0;
            }
        }
    }
}
