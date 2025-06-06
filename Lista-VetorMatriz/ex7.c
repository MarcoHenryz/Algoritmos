#include <stdio.h>

int main() {
    int vetor[20], vetor2[20], vetor_diferenca[20], vetor_soma[20], vetor_multiplicacao[20];

    printf("--- Preencha o primeiro vetor ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Informe um valor para a posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n--- Preencha o segundo vetor ---\n");
    for (int i = 0; i < 20; i++) {
        printf("Informe um valor para a posicao [%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 20; i++) {
        vetor_diferenca[i] = vetor[i] - vetor2[i];
        vetor_soma[i] = vetor[i] + vetor2[i];
        vetor_multiplicacao[i] = vetor[i] * vetor2[i];
    }

    printf("\nVetor diferenca: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor_diferenca[i]);
    }
    printf("\nVetor soma: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor_soma[i]);
    }
    printf("\nVetor multiplicacao: ");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor_multiplicacao[i]);
    }
    printf("\n");

    return 0;
}