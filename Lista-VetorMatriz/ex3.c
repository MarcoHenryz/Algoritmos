#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Informe o valor para a posicao [%d]: ", i);
        scanf("%d", &vetor[i]);

        // Verifica se o número já foi inserido antes
        for (int j = 0; j < i; j++) {
            if (vetor[j] == vetor[i]) {
                printf("Numero invalido (repetido).\n");
                i--; // Decrementa 'i' para que o usuário insira um novo valor na mesma posição.
                break;
            }
        }
    }

    printf("\nVetor final: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}