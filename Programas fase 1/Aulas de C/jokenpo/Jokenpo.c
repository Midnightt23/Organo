#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int escolhajogador, escolhacomputador;
    srand (time(0));

    printf("***Jogo de Jokempo*** \n");
    printf("Escolha uma opção \n");
    printf ("1-Pedra \n");
    printf ("2-Papel \n");
    printf ("3-Tesoura \n");
    printf ("Escolha um: \n");
    scanf ("%d", &escolhajogador);

    escolhacomputador = rand () % 3 + 1;

    switch (escolhajogador)
    {
    case 1:
    printf ("jogador: Pedra - ");
    break;
       case 2:
    printf ("jogador: Papel - ");
    break;
       case 3:
    printf ("jogador: Tesoura - ");
    break;
    default:
    printf ("Opção Invalida \n");
    }


        switch (escolhacomputador)
    {
    case 1:
    printf ("Computador: Pedra - \n");
    break;
       case 2:
    printf ("Computador: Papel - \n");
    break;
       case 3:
    printf ("Computador: Tesoura - \n");
    break;
    }

    if (escolhajogador == escolhacomputador)
    {
        printf ("### Jogo empatou ### \n");

    }    else if ((escolhajogador == 1) && (escolhacomputador == 3) || 
                    (escolhajogador == 2) && (escolhacomputador == 1) ||
                    (escolhajogador == 3) && (escolhacomputador == 2))
    {
        printf ("### Parabéns, você ganhou! ### \n");
    }
        else {
            printf ("### Você perdeu ### \n");
        }        
    

    return 0;
}