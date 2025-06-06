#include <stdio.h>

int main() {
    int matriz[3][3];
    int vetor_soma[3] = {0, 0, 0}; // Inicializa o vetor com zeros

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o numero para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz inserida:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Soma as colunas
    for (int j = 0; j < 3; j++) { // Itera sobre as colunas
        for (int i = 0; i < 3; i++) { // Itera sobre as linhas
            vetor_soma[j] += matriz[i][j];
        }
    }

    printf("\nVetor da soma das colunas: ");
    for (int j = 0; j < 3; j++) {
        printf("%d\t", vetor_soma[j]);
    }
    printf("\n");

    return 0;
}