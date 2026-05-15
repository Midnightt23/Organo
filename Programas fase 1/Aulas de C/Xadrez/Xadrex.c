#include <stdio.h>

int main() {

     int i = 1;
     int b = 1;
   

     //movimentação da torre usando while
    while (i <= 5) {
        printf("direita \n", i);   
        i++;
    }

    //movimentação da bispo usando  do while
    do {
         printf("cima esquerda \n", i);     
        b++;
     } while (b <= 5);
     

     //movimentação da rainha usando for
    for (int r = 1; r < 8; r++) {
        printf("esquerda \n");
    }

    //movimentação do cavalo usando loop alinhado em for
    int movcompleto = 1;

    while (movcompleto--)
    {
        for (int c = 0; c < 2; c++) {
            printf ("cima\n");
        }
            printf ("Direita\n");
    }
    

    return 0;
}