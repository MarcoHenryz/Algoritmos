#include <stdio.h>
#include <stdlib.h>

// Função que aloca memória para um vetor de inteiros
int* alocar_vetor(int x) {
    if (x > 0) {
        // Aloca memória para um vetor de inteiros, não de ponteiros
        return (int*) malloc(x * sizeof(int));
    } else {
        return NULL; // Retorna NULL se o tamanho for inválido
    }
}

int main() {
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    int *v = alocar_vetor(tam);

    if (v == NULL) {
        printf("Memoria insuficiente ou tamanho invalido!\n");
    } else {
        printf("Preenchendo o vetor:\n");
        for (int i = 0; i < tam; i++) {
            printf("Vetor [%d] = ", i);
            scanf("%d", &v[i]);
        }
        printf("\nVetor lido: ");
        for (int i = 0; i < tam; i++) {
            printf("%d ", v[i]);
        }
        printf("\n");
        free(v); // Libera a memória
    }
    return 0;
}