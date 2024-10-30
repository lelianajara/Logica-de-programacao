#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Ola!, qual o seu nome?\n");
    scanf("%s",nome);

    printf("\n Qual a sua idade?\n",idade);
    scanf("%d",idade);

    printf("\nAguarde enquanto estamos processando as informacoes\n");

    printf("A primeira letra do seu nome e:%c",nome[0]);

    if (idade >=18){
        printf("Vc eh maior de idade, ja eh um adulto,parabens");
    }


    return 0;
}
