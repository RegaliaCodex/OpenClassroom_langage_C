//Sceance 1 formation openclassroom
/*
Nom du type |   Minimum |   Maximum
signed char     -127        127
int             -32767      32767
long            -2147483647 2147483647
float           -1x1037     1x1037
double          -1x1037     1x1037      -->privilégie double par rapport a float
unsigned char   0           255
unsigned int    0           65535
unsigned long   0           4294967295
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    //toujours initialiser vaiable avec une valeur par defaut
    int a = 0;
    //les constantes gardent la meme valeurs sur toute la duree du programme
    const int B = 12; // on ecrit les const en maj par convention

    /*  Affichage variables
    Format  |   Type attendu
    "%d"        int
    "%ld"       long
    "%f"        float ou double
    */

    printf("Hello world!\n");
    int c = a + B;
    printf("%d + %d = %d\n", a, B, c);

    int age = 0;
    printf("Saisissez age : \n");
    //scanf permet de detecter la valeur clavier
    //le type de variable est précisé (ici %d = int)
    scanf("%d", &age);
    printf("Votre age est bien : %d \n", age);

    /*  Raccourci
    ++  increm
    -- decrem
    *= affecte a var var*nb précisé -> var*=2 -> var = var * 2
    /=
    %=
    */

    //pour les fonctions mathématiques utiliser math.h

    //fonction valeur absolu    fabs()
    int nb_neg = -2;
    double abs = 0;
    abs = fabs(nb_neg);

    //arrondi au superieure     ceil()
    double dessus = 0, nb_1 = 52.71;
    dessus = ceil(nb_1);    //renvoi 53

    //arrondi a inferieure      floor()
    double dessous = 0, nb_2 = 52.71;
    dessous = ceil(nb_2);   //renvoi 52

    //eleve nombre a une puissance  pow()
    double result_1 = 0, nb_3 = 2;
    result_1 = pow(nb_3, 3);    //2^3

    //racine carre  sqrt()
    double result_2 = 0, nb_4 = 100;
    result_2 = sqrt(nb_4);      //donne 10

    //fonction trigo    sin(), cos(), tan()
    //                  asin(), acos(), atan()

    //fonction calcul exp(), log(), log10() ->log = loga népérien

    //conditions
    //négation :    if(!(age < 18)) si age n est pas inf a 18

    //Booleen
    int age_2  = 20;
    int majeur = 0;

    majeur = age_2 >= 18;
    printf("majeur vaut : %d car age_2 vaut %d\n", majeur, age_2);
    //majeur = 1 car age_2 est sup a 18
    //bool dans condition :
    //  if(1) -> la condition se réalise
    //  if(0) -> la condition if ne se realise pas mais le else se realise
    //  on peut remplacer 1 et 0 par valeur booleenne (ici majeur)

    int sexe = 0;
    if(majeur&&sexe)
    {
        printf("Mr est effectivement majeur \n");
    }
    else
    {
        printf("Desole vous n etes pas majeur et vous n etes pas un garcon");
    }

    /*le ternaire
    ex :
    if(majeur)
        age = 18;
    else
        age = 17;

    ternaire est :
    age = (majeur) ? 18:17
    autorisation = (age >= 18) ? 1 : 0
        -> affecte valeur a variable en fonction de valeur boolenne
    */



    return 0;
}
