#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale


int main()
{   int horario;
    int hora_cinema = 20;

    printf("Que horas sao?\n");

    scanf("%d", &horario);

    if (horario > hora_cinema) {
        printf("Passou do tempo limite! Voce se atrasou e nao pode entrar");
    }else if(horario < hora_cinema){
        printf("Espere mais um pouco, o cinema ainda esta fechado");
    }else{
        printf("Já está na hora de ir pro cinema, va antes que se atrase");
    }

    return 0;
}
