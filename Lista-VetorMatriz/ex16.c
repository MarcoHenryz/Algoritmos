#include <stdio.h>

int main() {
    int matriz[7][7];
    int matriz2[7][7];
    int matriz3[7][7];

    printf("--- Informe a primeira matriz ---\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n--- Informe a segunda matriz ---\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    // Multiplicacao de matrizes
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            matriz3[i][j] = 0; // Inicializa o elemento da matriz resultante
            for (int k = 0; k < 7; k++) {
                matriz3[i][j] += matriz[i][k] * matriz2[k][j];
            }
        }
    }

    printf("\nMultiplicacao das duas matrizes:\n");
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            printf("%d\t", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
}