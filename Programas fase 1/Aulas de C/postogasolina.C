#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    // declaração de variaveis 
    float precogasolina = 6.80;
    float precoalcool = 4.90;
    float quantidadedelitros;
    int escolhadecombustivel;
    float valorfinal;
    float desconto;
    float valorposdesconto;

    //menu para usuario selecionar o tipo de combustivel abastecido
    printf ("***Escolha o combustivel abastecido***\n");
    printf ("1 - Gasolina\n");
    printf ("2 - Alcool\n");
    scanf ("%d", &escolhadecombustivel);
    switch (escolhadecombustivel)
    {
    case 1:
    printf ("Você escolheu Gasolina\n");
    break;
       case 2:
    printf ("Você escolheu Alcool\n");
    break;
    default:
    printf ("Opção Invalida\n");
    }

    // Opção para usuario digitar a quantidade de litros abastecidos
    printf ("Quantos litros de combustivel foram abastecidos?\n");
    scanf ("%f", &quantidadedelitros);

    //condição para calcular o valor do combustivel depois da escolha do usuario
    if (escolhadecombustivel == 1) {
        valorfinal = quantidadedelitros * precogasolina;
        if (quantidadedelitros < 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
        } else if (escolhadecombustivel == 2) {
        valorfinal = quantidadedelitros * precoalcool;
        if (quantidadedelitros < 20) {
            desconto = 0.03; 
        } else {
            desconto = 0.05;  
        }
    }
        valorposdesconto = valorfinal * (1 - desconto);

        printf ("O valor total a pagar é R$ %.2f \n", valorposdesconto);


    return 0;
}