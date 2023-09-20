#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {
    srand(time(0));
    int price = (rand() %1000) + 1;
    int userguessing;
    int numberoftry;
    //type(userguessing == int)
    //isinstance(userguessing,int)

    printf("Bonjour et Bienvenue dans: le Juste Prix\n");
    printf("Tu peux quitter le jeu à tout moment en entrant 0 ! \n Nous avons généré un nombre entre 1 et 1000,\n Essaie de le deviner !\n");
// j'ai adapté ma boucle afin que quitter le jeu sois plus ergonomique et moins longue pour l'utilisateur à intégrer en lui ajoutant l'option "quitter le jeu" en entrant 0 à tout moment,
// de ce fait l'utilisateur n'est gêné à devoir répondre à plusieur questions lors du jeu du style :("voulez-vous continuer oui: 1 ; non : 2") puis ("entrez votre réponse:")


    while(1){
        printf("Enter your number :\n");
        scanf("%d",&userguessing);
        getchar();
        numberoftry++;
        if(userguessing == 0){
            printf("Aurevoir !");
            break;
        }else if(userguessing > price){
            printf("C'est moins !\n");
        }else if(userguessing < price){
            printf("C'est plus!\n");
        }else if (userguessing == price){
            printf("Bien Joué vous avez Gagné en %d essais! Le prix était : %d euros\n",numberoftry,price);
            break;
        }}
    return 0;
}
