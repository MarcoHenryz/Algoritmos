#include <stdio.h>
#include <stdlib.h>

// Função que retorna um vetor com a soma das colunas
int* soma_das_colunas(int **mat, int n) {
    int *v = (int*) calloc(n, sizeof(int)); // Calloc já inicializa com 0
    if (v == NULL) {
        printf("Memoria Insuficiente!\n");
        exit(1);
    }

    for (int j = 0; j < n; j++) { // Itera nas colunas
        for (int i = 0; i < n; i++) { // Itera nas linhas
            v[j] += mat[i][j];
        }
    }
    return v;
}

int main() {
    int **mat, numero;
    printf("Insira um numero N para as linhas e colunas da matriz: ");
    scanf("%d", &numero);

    // Aloca as linhas
    mat = (int**) calloc(numero, sizeof(int*));
    if (mat == NULL) {
        printf("Memoria insuficiente!\n");
        return 1;
    }
    // Aloca as colunas
    for (int i = 0; i < numero; i++) {
        mat[i] = (int*) calloc(numero, sizeof(int));
    }

    // Preenche a matriz
    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            printf("Matriz [%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    int *p = soma_das_colunas(mat, numero);

    printf("\nVetor da soma das colunas: ");
    for (int i = 0; i < numero; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    // Libera a memória
    free(p);
    for (int i = 0; i < numero; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}