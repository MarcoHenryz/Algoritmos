#include <stdio.h>

void imprimir_vetor(int *vetor, int tam) {
    printf("\nDobro dos valores:\n");
    for (int i = 0; i < tam; i++) {
        printf("%d\n", 2 * *(vetor + i));
    }
}

int main() {
    int vetor[5];

    for (int i = 0; i < 5; i++) {
        printf("Insira um numero inteiro para a posicao [%d]: ", i);
        // Usa aritmética de ponteiros para ler o valor
        scanf("%d", vetor + i);
    }

    imprimir_vetor(vetor, 5);
    return 0;
}