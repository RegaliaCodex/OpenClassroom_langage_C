#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    // les chaines de caracteres sont des tableaux de char
    char chaine[7];
    // une chaine de caractere doit se finir avec un '\0'
    chaine[0] = 'S';
    chaine[1] = 'a';
    chaine[2] = 'l';
    chaine[3] = 'u';
    chaine[4] = 't';
    chaine[5] = '\n';
    chaine[6] = '\0';

    // peut aussi etre declare de la maniere suivante :
    char chaine_1[] = "Salut\n"; // -> uniquement valable a l initialisation

    printf("%s", chaine);
    printf("%s", chaine_1);

    char prenom[100];
    printf("Entrez prenom : \n");
    scanf("%s",prenom);
    printf("Prenom est : %s \n", prenom);

    int longueur_chaine = 0;
    longueur_chaine = strlen(prenom);
    printf("Longueur chaine prenom est : %d \n", longueur_chaine);

    // fonction strcpy pour copier une chaine
    char txt[] = "txt", copie[100] = {0};
    strcpy(copie,txt); // destination, depart

    printf("txt : %s \n", txt);
    printf("copie : %s \n", copie);

    // fonction strcat concatenation de deux chaines
    char salut[100] = "Salut", bonjour [100] = "Bonjour";
    strcat(salut,bonjour); // destination,depart

    printf("salut : %s \n",salut);
    printf("bonjour : %s \n",bonjour);

    // fonction strcmp comparaison de deux chaines
    char comp1[100] = "On compare", comp2[100] = "On compare pas";

    if(strcmp(comp1,comp2) == 0)
    {
        printf("identique \n");
    }
    else
    {
        printf("non identique\n");
    }

    // fonction strchr recherche chaine de caractere
    char chtest[100] = "On recherche un caractere l'avez vous vue ?", *suitechaine = NULL;
    suitechaine = strchr(chtest, 'r');
    if(suitechaine != NULL)
    {
        printf("Voici fin de chaine depuis premier carac trouve : %s \n", suitechaine);
    }

    // fonction strpbrk similaire a strchr
    char *suitechaine1;

    suitechaine1 = strpbrk("Texte de test", "xds");
    printf("fonction strpbrk : %s \n",suitechaine1);

    // fonction strstr recherche chaine dans une autre
    char *suitechaine2;

    suitechaine2 = strstr("Texte de test", "test");
    if(suitechaine2 != NULL)
    {
        printf("Premiere occurence dans Texte de test : %s \n", suitechaine2);
    }

    // sprintf ecriture dans une chaine
    char chaine_2[100];
    int age  = 23;

    sprintf(chaine_2,"Tu as %d ans", age);
    printf("%s \n",chaine_2);

    return 0;


}
