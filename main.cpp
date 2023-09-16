#include <iostream>




int main() {
    srand(time(0));
    int price = (rand() %1000) + 1;
    int userguessing;
    int numberoftry;

    printf("Bonjour et Bienvenue dans: le Juste Prix\n");
    printf("Tu peux quitter le jeu à tout moment en entrant 0 ! \n Nous avon généré un nombre entre 1 et 1000,\n Essaie de le deviner !\n");


    while(1){
        printf("Enter your number :\n");
        scanf("%d",&userguessing);
        numberoftry++;
        if(userguessing == 0){
            printf("Aurevoir !");
            break;
        }else if(userguessing > price){
            printf("C'est moins !\n");
        }else if(userguessing < price){
            printf("C'est plus!\n");
        }else if (userguessing == price){
            printf("Bien Joué vous avez Gagné en %d essais! Le prix était : %d\n",numberoftry,price);
            break;
        }}
    return 0;
}
