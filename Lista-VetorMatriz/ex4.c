#include <stdio.h>

int main() {
    float vetor[10];
    float aux;

    for (int i = 0; i < 10; i++) {
        printf("Informe o valor para a posicao [%d]: ", i);
        scanf("%f", &vetor[i]);

        // Ordena o elemento recém-inserido em relação aos anteriores
        for (int j = 0; j < i; j++) {
            if (vetor[i] < vetor[j]) {
                aux = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = aux;
            }
        }
    }

    printf("\nVetor ordenado: ");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}