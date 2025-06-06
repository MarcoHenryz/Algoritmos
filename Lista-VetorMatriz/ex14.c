#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma1 = 0, soma2 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Informe o valor da matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma das duas diagonais
    for (int i = 0; i < 3; i++) {
        soma1 += matriz[i][i]; // Diagonal principal
        soma2 += matriz[i][3 - 1 - i]; // Diagonal secundária
    }

    printf("\nSoma da diagonal principal: %d\n", soma1);
    printf("Soma da diagonal secundaria: %d\n", soma2);

    return 0;
}