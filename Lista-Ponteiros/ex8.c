#include <stdio.h>

void Preencher_vetor(int *v, int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        *(v + i) = valor;
    }
}

void Imprimir_vetor(int *v, int tam) {
    printf("\nVetor preenchido: ");
    for (int i = 0; i < tam; i++) {
        printf("%d ", *(v + i));
    }
    printf("\n");
}

int main() {
    int tam, valor;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tam);

    if (tam <= 0) return 1;

    printf("Insira um valor para preencher o vetor: ");
    scanf("%d", &valor);

    int vetor[tam];
    Preencher_vetor(vetor, tam, valor);
    Imprimir_vetor(vetor, tam);

    return 0;
}