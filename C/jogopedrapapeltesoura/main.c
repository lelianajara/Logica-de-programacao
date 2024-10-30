#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strcmp(strql, strq2) ==0
    //Pedra,papel ou tesoura!
    char player[256];
    char player2[256];

    printf("Player 1, sua vez...");
    scanf("%s",&player);

    printf("Player 2, sua vez...");
    scanf("%s",&player2);

    printf("\nAguarde, estamos calculando o resultado\n");
    if(strcmp(player,"papel")== 0) {

        if(strcmp(player2,"papel") ==0 ){
            printf("\nEmpate!");
        }else if (strcmp(player2,"tesoura\n")== 0) {
            printf("\nPlayer 2 ganhou, porque tesoura corta papel\n");
        } else if (strcmp(player2,"pedra")== 0) {
            printf("\nPlayer 2 perde, porque papel embrulha pedra\n");
        } else {
            printf("\nO player 2 jogou uma informacao invalida\n");
        }

    }else if(strcmp(player,"tesoura") == 0){

        if(strcmp(player2,"papel") ==0 ){
            printf("\nPerde porwue teoura corta papel!");
        }else if (strcmp(player2,"tesoura\n")== 0) {
            printf("\nEmpate\n");
        } else if (strcmp(player2,"pedra")== 0) {
            printf("\nPlayer 2 ganhou, porque pedra quebra tesoura\n");
        } else {
            printf("\nO player 2 jogou uma informacao invalida\n");
        }

    }else if(strcmp(player,"pedra") == 0){

        if(strcmp(player2,"papel") ==0 ){
            printf("\nPlayer 2 ganhou, porque papel embrulha pedra!");
        }else if (strcmp(player2,"tesoura\n")== 0) {
            printf("\nPlayer 1 ganhou, porque pedra quabra tesoura\n");
        } else if (strcmp(player2,"pedra")== 0) {
            printf("\nEmpate!\n");
        }

    }else {
            printf("\Voce jogou uma informacao invalida\n");
        }


    return 0;
}
