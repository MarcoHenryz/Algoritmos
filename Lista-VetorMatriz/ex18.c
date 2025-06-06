#include <stdio.h>

int main() {
    int matriz[4][4];
    int matrizt[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Informe o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Gera a matriz transposta
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrizt[j][i] = matriz[i][j];
        }
    }

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", matrizt[i][j]);
        }
        printf("\n");
    }

    return 0;
}