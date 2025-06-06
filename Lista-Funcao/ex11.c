#include <stdio.h>

// Função recursiva para SOMAR os elementos de um vetor
float soma_vetor(int vetor[], int x) {
    if (x == 0) {
        return 0;
    } else {
        return (vetor[x - 1] + soma_vetor(vetor, x - 1));
    }
}

int main() {
    int tamanho;
    printf("Insira o numero de elementos que deseja inserir: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) return 1;

    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Insira o numero para a posicao [%d] do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    float media = soma_vetor(vetor, tamanho) / tamanho;
    printf("A media eh de: %f\n", media);
    return 0;
}