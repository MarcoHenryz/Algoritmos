#include <stdio.h>

int main() {
    float matriz[3][6];
    float soma_impares = 0;
    float soma_2_4 = 0;
    float media;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Informe o valor para a posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Soma das colunas ímpares (colunas 1, 3, 5 - índices 0, 2, 4)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j += 2) { // j = 0, 2, 4
            soma_impares += matriz[i][j];
        }
    }
    printf("\nSoma das colunas impares: %.2f\n", soma_impares);

    // Média dos elementos das colunas 2 e 4 (índices 1 e 3)
    for (int i = 0; i < 3; i++) {
        soma_2_4 += matriz[i][1]; // Coluna 2
        soma_2_4 += matriz[i][3]; // Coluna 4
    }
    media = soma_2_4 / 6;
    printf("Media dos elementos das colunas 2 e 4: %.2f\n", media);

    // Substituir os valores da sexta coluna (índice 5)
    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    // Printando a nova matriz
    printf("\nNova matriz com a coluna 6 modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}