#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;

    int idade;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);

    printf("\nShow de bola,%s..Qual a sua idade?\n",nome);
    scanf("%d",&idade);

    printf("Ola, %s! vc tem %d anos",nome,idade);

    return 0;
}
