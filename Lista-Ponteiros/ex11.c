#include <stdio.h>
#include <stdlib.h>

void maior_menor(int *v, int tam, int *min, int *max) {
    if (tam <= 0) return;

    *min = *v; // Inicializa min e max com o primeiro elemento
    *max = *v;

    for (int i = 1; i < tam; i++) {
        if (*(v + i) < *min) {
            *min = *(v + i);
        }
        if (*(v + i) > *max) {
            *max = *(v + i);
        }
    }
}

int main() {
    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    if (tam <= 0) return 1;

    int *vetor = (int*) malloc(tam * sizeof(int));
    if (vetor == NULL) return 1;

    for (int i = 0; i < tam; i++) {
        printf("Insira o valor do vetor[%d]: ", i);
        scanf("%d", vetor + i);
    }

    int max, min;
    maior_menor(vetor, tam, &min, &max);

    printf("\nO maior elemento eh: %d\n", max);
    printf("O menor elemento eh: %d\n", min);

    free(vetor);
    return 0;
}