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
