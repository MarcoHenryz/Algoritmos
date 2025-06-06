#include <stdio.h>
#include <stdlib.h>

// Função que verifica se 'x' está na matriz
int tem_na_matriz(int x, int **mat, int l, int c) {
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == x) {
                return 1; // Encontrou
            }
        }
    }
    return 0; // Não encontrou
}

int main() {
    int linhas, colunas;
    printf("Informe o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &colunas);

    // Aloca as linhas (ponteiros para as colunas)
    int **mat = (int**) malloc(linhas * sizeof(int*));
    if (mat == NULL) {
        printf("Memoria Insuficiente!\n");
        exit(1);
    }

    // Aloca as colunas para cada linha
    for (int i = 0; i < linhas; i++) {
        mat[i] = (int*) malloc(colunas * sizeof(int));
    }

    // Preenche a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Matriz [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int numero;
    printf("\nInforme um numero inteiro para buscar na matriz: ");
    scanf("%d", &numero);

    if (tem_na_matriz(numero, mat, linhas, colunas)) {
        printf("O numero ESTA contido na matriz.\n");
    } else {
        printf("O numero NAO ESTA contido na matriz.\n");
    }

    // Libera a memória da matriz
    for (int i = 0; i < linhas; i++) {
        free(mat[i]); // Libera cada linha
    }
    free(mat); // Libera o ponteiro para as linhas

    return 0;
}