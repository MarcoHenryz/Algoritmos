#include <stdio.h>
#include <stdlib.h>

// Função que multiplica duas matrizes
int** multiplicacao_de_matriz(int** mat1, int** mat2, int l1, int c1, int l2, int c2) {
    // A multiplicação só é possível se o número de colunas da 1ª for igual ao de linhas da 2ª
    if (c1 != l2) {
        return NULL;
    }

    // Aloca a matriz resultante
    int** mat = (int**) calloc(l1, sizeof(int*));
    for (int i = 0; i < l1; i++) {
        mat[i] = (int*) calloc(c2, sizeof(int));
    }

    // Realiza a multiplicação
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) { // ou k < l2
                mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return mat;
}

int main() {
    int l1, c1, l2, c2;
    printf("Informe o numero de linhas e colunas da matriz 1: ");
    scanf("%d %d", &l1, &c1);
    printf("Informe o numero de linhas e colunas da matriz 2: ");
    scanf("%d %d", &l2, &c2);

    // Aloca e preenche a Matriz 1
    int** mat1 = (int**) malloc(l1 * sizeof(int*));
    for (int i = 0; i < l1; i++) mat1[i] = (int*) malloc(c1 * sizeof(int));
    printf("\nPreencha a Primeira matriz:\n");
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Matriz 1 [%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Aloca e preenche a Matriz 2
    int** mat2 = (int**) malloc(l2 * sizeof(int*));
    for (int i = 0; i < l2; i++) mat2[i] = (int*) malloc(c2 * sizeof(int));
    printf("\nPreencha a Segunda matriz:\n");
    for (int i = 0; i < l2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Matriz 2 [%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    int** mat3 = multiplicacao_de_matriz(mat1, mat2, l1, c1, l2, c2);

    if (mat3 == NULL) {
        printf("\nNao eh possivel multiplicar as matrizes.\n");
    } else {
        printf("\nMultiplicacao das Matrizes:\n");
        for (int i = 0; i < l1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%d\t", mat3[i][j]);
            }
            printf("\n");
        }
        // Libera mat3
        for (int i = 0; i < l1; i++) free(mat3[i]);
        free(mat3);
    }

    // Libera mat1 e mat2
    for (int i = 0; i < l1; i++) free(mat1[i]);
    free(mat1);
    for (int i = 0; i < l2; i++) free(mat2[i]);
    free(mat2);

    return 0;
}