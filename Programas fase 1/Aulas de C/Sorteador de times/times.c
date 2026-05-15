#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_AMIGOS 100
#define MAX_NOME 50

// Função para embaralhar os índices (algoritmo de Fisher–Yates)
void embaralhar(int *array, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int numAmigos, numTimes;
    char amigos[MAX_AMIGOS][MAX_NOME];

    // Entrada de dados
    printf("Quantos amigos vão participar? ");
    scanf("%d", &numAmigos);
    getchar(); // limpar o \n do buffer

    if (numAmigos <= 0 || numAmigos > MAX_AMIGOS) {
        printf("Número inválido de amigos!\n");
        return 1;
    }

    for (int i = 0; i < numAmigos; i++) {
        printf("Nome do amigo #%d: ", i + 1);
        fgets(amigos[i], MAX_NOME, stdin);
        amigos[i][strcspn(amigos[i], "\n")] = '\0'; // remove o '\n'
    }

    printf("Quantos times deseja formar? ");
    scanf("%d", &numTimes);

    if (numTimes <= 0 || numTimes > numAmigos) {
        printf("Número inválido de times!\n");
        return 1;
    }

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Cria um vetor de índices e embaralha
    int indices[MAX_AMIGOS];
    for (int i = 0; i < numAmigos; i++) {
        indices[i] = i;
    }
    embaralhar(indices, numAmigos);

    // Distribui os amigos nos times
    printf("\n==== Times Sorteados ====\n");
    for (int t = 0; t < numTimes; t++) {
        printf("\nTime %d:\n", t + 1);
        for (int i = t; i < numAmigos; i += numTimes) {
            int idx = indices[i];
            printf("- %s\n", amigos[idx]);
        }
    }

    return 0;
}