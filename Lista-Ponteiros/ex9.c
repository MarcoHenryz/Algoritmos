#include <stdio.h>
#include <stdlib.h> // Para alocação dinâmica

void Preencher_vetor(int *v, int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Insira um valor para a posicao [%d]: ", i);
        scanf("%d", v + i);
    }
}

void Imprimir_vetor(int *v, int tam) {
    printf("\nVetor: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

int main() {
    int tam;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    if (tam <= 0) return 1;

    int *vetor = (int*) malloc(tam * sizeof(int)); // Alocação dinâmica
    if (vetor == NULL) return 1; // Verifica se a alocação falhou

    Preencher_vetor(vetor, tam);
    Imprimir_vetor(vetor, tam);

    free(vetor); // Libera a memória alocada
    return 0;
}