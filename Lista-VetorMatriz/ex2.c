#include <stdio.h>

int main() {
    int vetor[10];

    // Pega os 10 elementos do vetor
    for (int i = 0; i < 10; i++) {
        printf("Informe o valor [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nVerificando valores iguais...\n");
    for (int i = 0; i < 10; i++) {
        for (int cont = i + 1; cont < 10; cont++) {
            if (vetor[i] == vetor[cont]) {
                printf("Valor igual encontrado: %d, nas posicoes: %d e %d\n", vetor[i], i, cont);
            }
        }
    }

    return 0;
}