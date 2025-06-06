#include <stdio.h>
#include <stdlib.h>

// Função que aloca e preenche o vetor
int* preencher(int tam, int x) {
    if (tam > 0) {
        int *v = (int*) malloc(tam * sizeof(int));
        if (v == NULL) {
            printf("Memoria Insuficiente!\n");
            exit(1);
        }
        for (int i = 0; i < tam; i++) {
            v[i] = x;
        }
        return v;
    } else {
        return NULL;
    }
}

int main() {
    int tam, num;
    printf("informe o tamanho do vetor: ");
    scanf("%d", &tam);

    printf("Informe um numero inteiro para preencher: ");
    scanf("%d", &num);

    int *v = preencher(tam, num);

    if (v != NULL) {
        printf("Vetor preenchido: ");
        for (int i = 0; i < tam; i++) {
            printf("%d ", *(v + i));
        }
        printf("\n");
        free(v);
    }
    return 0;
}