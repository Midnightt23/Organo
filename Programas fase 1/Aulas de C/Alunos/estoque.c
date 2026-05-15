#include <stdio.h>

int main (){
    char produtoA[30] = "produtoA";
    char produtoB[30] = "produtoB";

    unsigned int estoqueA = 1580;
    unsigned int estoqueB = 2250;

    float precoA = 10.80;
    float precoB = 8.80;

    unsigned int estoqueMinimoA = 450;
    unsigned int estoqueMinimoB = 600;

    double ValortotalA;
    double ValortotalB;

    int resultadoA, resultadoB;

    printf ("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoA, estoqueA, precoA);
    printf ("Produto %s tem estoque %u e o valor unitario é %.2f\n", produtoB, estoqueB, precoB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf ("O produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf ("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    printf ("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", estoqueA * precoA, estoqueB * precoB,
    (estoqueA * precoA) < (estoqueB * precoB));

    

















    return 0;
}