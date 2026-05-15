#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int numerojogador, numerocomputador, resultado;
    char tipocomparacao;

    srand (time(0));
    numerocomputador = rand() % 100 +1;

    printf("Bem vindo ao jogo maior, menor ou igual \n");
    printf ("Você deve escolher um numero e tipo de comparação \n");
    printf ("M - Maior \n");
    printf ("N - Menor \n");
    printf ("I - Igual \n");

    printf("Escolha a comparação: \n");
    scanf (" %c", &tipocomparacao);

    printf ("Escolha um numero de 1 a 100: \n");
    scanf ("%d", &numerojogador);

    printf ("O numero do computador é: %d\n", numerocomputador);

    switch (tipocomparacao)

    {
        case 'M' :
        case 'm' :
            resultado = numerojogador > numerocomputador ? 1 : 0 ;
        break;
        case 'N' :
        case 'n' :
            resultado = numerojogador < numerocomputador ? 1 : 0 ;
        break;
        case 'I' :
        case 'i' :
            resultado = numerojogador == numerocomputador ? 1 : 0 ;
        break;
        default:
        printf ("Opção invalida \n");
        break; 
        
        printf ("Voce escolheu: %d e o computador escolheu: %d \n", numerojogador, numerocomputador);

        if (resultado == 1)
        {
            printf ("Você venceu \n");
        } else {
            printf ("Você perdeu \n");
        }

    }




















    return 0;
}