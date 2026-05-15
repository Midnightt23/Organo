#include <stdio.h>

int main (){
    int idade;
    float altura;
    char nome[20];
    int matricula;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("Digite sua altura \n");
    scanf("%f", &altura);

    printf("Digite seu nome \n");
    scanf("%s" , &nome);

    printf("Digite sua matricula \n");
    scanf ("%d", &matricula);

    printf("nome do aluno: %s \n", nome);
    printf("matricula: %d \n", matricula);
    printf("idade: %d \n", idade);
    printf("altura: %f \n", altura);

    return 0;
   
}