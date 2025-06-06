#include <stdio.h>

int main() {
    int matriz[4][4];
    int cont = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Informe o valor para a matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > 10) {
                cont++;
            }
        }
    }

    printf("\nO total de numeros maiores que 10 eh: %d\n", cont);

    return 0;
}