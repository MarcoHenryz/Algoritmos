#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int intersecao[10];
    int cont = 0;

    printf("--- Preencha o primeiro vetor ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Informe um numero para a posicao [%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n--- Preencha o segundo vetor ---\n");
    for (int i = 0; i < 10; i++) {
        printf("Informe um numero para a posicao [%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    // Encontrar interseção
    for (int i = 0; i < 10; i++) {
        for (int z = 0; z < 10; z++) {
            if (vetor1[i] == vetor2[z]) {
                // Evita adicionar duplicados no vetor de interseção
                int achou = 0;
                for (int k = 0; k < cont; k++) {
                    if (intersecao[k] == vetor1[i]) {
                        achou = 1;
                        break;
                    }
                }
                if (!achou) {
                    intersecao[cont] = vetor1[i];
                    cont++;
                }
                break;
            }
        }
    }

    // Imprimir o vetor de interseção
    if (cont > 0) {
        printf("\nIntersecao dos dois vetores: ");
        for (int i = 0; i < cont; i++) {
            printf("%d ", intersecao[i]);
        }
        printf("\n");
    } else {
        printf("\nNao ha elementos em comum.\n");
    }

    return 0;
}