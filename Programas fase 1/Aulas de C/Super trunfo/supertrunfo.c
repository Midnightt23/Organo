#include <stdio.h>

int main (){


    //declaracao das variaveis referente as cartas
    
    char estado1[1], estado2[2];
    char codigo_da_carta1[2], codigo_da_carta2 [2];
    char nome_da_cidade1[25], nome_da_cidade2 [25];
    int populacao1, populacao2;
    float area_em_km1, area_em_km2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;


    //entrada de dados da primeira carta

    printf ("***Digite os dados da primeira carta***\n");

    printf ("Digite o estado \n");
    scanf ("%s", &estado1);

    printf ("Digite o codigo da carta \n");
    scanf ("%s", &codigo_da_carta1);

    printf ("Digite o nome da cidade \n");
    scanf ("%s", &nome_da_cidade1);

    printf ("Digite a populacao \n");
    scanf ("%d", &populacao1);

    printf ("Digite a area em km \n");
    scanf ("%f", &area_em_km1);

    printf ("Digito o PIB \n");
    scanf ("%f", &pib1);

    printf ("Digite o numero de pontos turisticos \n");
    scanf ("%d", &pontos_turisticos1);


    //entrada de dados da segunda carta

    printf ("***Digite os dados da segunda carta***\n");

    printf ("Digite o estado \n");
    scanf ("%s", &estado2);

    printf ("Digite o codigo da carta \n");
    scanf ("%s", &codigo_da_carta2);

    printf ("Digite o nome da cidade \n");
    scanf ("%s", &nome_da_cidade2);

    printf ("Digite a populacao \n");
    scanf ("%d", &populacao2);

    printf ("Digite a area em km \n");
    scanf ("%f", &area_em_km2);

    printf ("Digito o PIB \n");
    scanf ("%f", &pib2);

    printf ("Digite o numero de pontos turisticos \n");
    scanf ("%d", &pontos_turisticos2);


    //calculo de densidade populacional e pib per capito das cartas 1 e cartas 2

    densidade_populacional1 = populacao1 / area_em_km1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    densidade_populacional2 = populacao2 / area_em_km2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;


    //calculo do super poder cartas 1 e 2
    super_poder1 = (populacao1 + area_em_km1 + pib1 + pontos_turisticos1 + pib_per_capita1) - densidade_populacional1;
    super_poder2 = (populacao2 + area_em_km2 + pib2 + pontos_turisticos2 + pib_per_capita2) - densidade_populacional2;


    //Saida de dados digitados pelo usuario (carta1)

    printf ("***Carta1***\n");
    printf ("estado: %s \n", estado1);
    printf ("codigo_da_carta: %s \n", codigo_da_carta1);
    printf ("cidade: %s \n", nome_da_cidade1);
    printf ("populacao: %d \n", populacao1);
    printf ("area_em_km: %.2f \n", area_em_km1);
    printf ("pib: %.2f \n", pib1);
    printf ("pontos_turisticos: %d \n", pontos_turisticos1);
    printf ("densidade_populacional: %.2f \n", densidade_populacional1);
    printf ("pib_per_capita: %.2f \n", pib_per_capita1);
    printf("super_poder: %.2f \n", super_poder1);


    //Saida de dados digitados pelo usuario (carta2)

    printf ("***Carta2***\n");
    printf ("estado: %s \n", estado2);
    printf ("codigo_da_carta: %s \n", codigo_da_carta2);
    printf ("cidade: %s \n", nome_da_cidade2);
    printf ("populacao: %d \n", populacao2);
    printf ("area_em_km: %.2f \n", area_em_km2);
    printf ("pib: %.2f \n", pib2);
    printf ("pontos_turisticos: %d \n", pontos_turisticos2);
    printf ("densidade_populacional: %.2f \n", densidade_populacional2);
    printf ("pib_per_capita: %.2f \n", pib_per_capita2);
    printf ("super_poder: %.2f \n", super_poder2);


    //comparação entre carta 1 e carta2

    printf ("carta 1 é maior que a carta2 em população? %d\n", populacao1 > populacao2);
    printf ("carta 1 é maior que a carta2 em area? %d\n", area_em_km1 > area_em_km2);
    printf ("carta 1 é maior que a carta2 em pib? %d\n", pib1 > pib2);
    printf ("carta 1 é maior que a carta2 em pontos_turisticos? %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf ("carta 1 é maior que a carta2 em densidade_populacional? %d\n", densidade_populacional1 > densidade_populacional2);
    printf ("carta 1 é maior que a carta2 em pib per capita? %d\n", pib_per_capita1 > pib_per_capita2);
    printf ("carta 1 é maior que a carta2 em super poder? %d\n", super_poder1 > super_poder2);

    return 0;

}