#include <stdio.h>
#include <stdlib.h>

int main() {
    int tam;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    if (tam <= 0) return 1;

    // Aloca memória para o vetor
    int *v = (int*) malloc(tam * sizeof(int));
    if (v == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }

    // Preenche o vetor
    for (int i = 0; i < tam; i++) {
        printf("Vetor [%d] = ", i);
        scanf("%d", &v[i]);
    }

    // Imprime o vetor
    printf("\nValores do vetor: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    free(v); // Libera a memória
    return 0;
}