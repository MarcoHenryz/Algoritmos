#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *sorteados, *apostados, *acertados;
    int cont_acertos = 0;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Aloca memória para os vetores
    sorteados = (int*) malloc(6 * sizeof(int));
    apostados = (int*) malloc(6 * sizeof(int));

    // Gera 6 números aleatórios (sem repetição)
    for (int i = 0; i < 6; i++) {
        sorteados[i] = rand() % 60 + 1;
        // Lógica simples para evitar repetição (pode ser melhorada)
        for (int j = 0; j < i; j++) {
            if (sorteados[i] == sorteados[j]) {
                i--; // Gera outro número para a mesma posição
                break;
            }
        }
    }

    printf("--- Faca sua aposta (6 numeros de 1 a 60) ---\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero [%d] = ", i + 1);
        scanf("%d", &apostados[i]);
    }

    // Conta os acertos
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (apostados[i] == sorteados[j]) {
                cont_acertos++;
            }
        }
    }

    // Aloca memória para os números acertados
    if (cont_acertos > 0) {
        acertados = (int*) malloc(cont_acertos * sizeof(int));
        int k = 0;
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                if (apostados[i] == sorteados[j]) {
                    acertados[k] = apostados[i];
                    k++;
                }
            }
        }
    }

    // Exibe os resultados
    printf("\nNumeros sorteados pela loteria: ");
    for (int i = 0; i < 6; i++) printf("%d ", sorteados[i]);

    printf("\nTotal de acertos: %d\n", cont_acertos);
    if (cont_acertos > 0) {
        printf("Numeros acertados pelo jogador: ");
        for (int i = 0; i < cont_acertos; i++) printf("%d ", acertados[i]);
        printf("\n");
        free(acertados);
    }

    free(sorteados);
    free(apostados);
    return 0;
}