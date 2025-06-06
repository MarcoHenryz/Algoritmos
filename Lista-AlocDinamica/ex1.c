#include <stdio.h>

// Definição da estrutura para armazenar dados de uma pessoa
struct Pessoa {
    char nome[50];
    int matricula;
    float n1, n2, n3;
};

int main() {
    int tam;
    // Calcula o tamanho da estrutura Pessoa
    tam = sizeof(struct Pessoa);

    printf("Tamanho da struct Pessoa: %d bytes\n", tam);

    return 0;
}