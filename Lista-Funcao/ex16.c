#include <stdio.h>

// Função recursiva para encontrar o menor elemento
int menor(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    } else {
        int menor_do_resto = menor(vetor, tamanho - 1);
        if (menor_do_resto < vetor[tamanho - 1]) {
            return menor_do_resto;
        } else {
            return vetor[tamanho - 1];
        }
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

    printf("Menor: %d\n", menor(vetor, tamanho));
    return 0;
}