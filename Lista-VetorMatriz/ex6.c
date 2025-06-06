#include <stdio.h>

int main() {
    int vetor1[10], vetor2[10];
    int uniao[20];
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

    // Adiciona todos os elementos do primeiro vetor à união
    for (int i = 0; i < 10; i++) {
        uniao[cont] = vetor1[i];
        cont++;
    }

    // Adiciona os elementos do segundo vetor que ainda não estão na união
    for (int i = 0; i < 10; i++) {
        int achou = 0;
        for (int j = 0; j < cont; j++) {
            if (vetor2[i] == uniao[j]) {
                achou = 1;
                break;
            }
        }
        if (!achou) {
            uniao[cont] = vetor2[i];
            cont++;
        }
    }

    printf("\nUniao dos dois vetores: ");
    for (int i = 0; i < cont; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");

    return 0;
}