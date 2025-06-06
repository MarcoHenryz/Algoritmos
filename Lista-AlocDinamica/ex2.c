#include <stdio.h>
#include <stdlib.h>

// Usando typedef para criar um tipo "Cadastro"
typedef struct {
    char nome[50];
    int idade;
    char endereco[50];
} Cadastro;

// Função para alocar e preencher os cadastros
Cadastro* criar_cadastros(int x) {
    Cadastro *v;
    v = (Cadastro*) malloc(x * sizeof(Cadastro));
    if (v == NULL) {
        printf("Memoria insuficiente!\n");
        exit(1);
    }

    for (int i = 0; i < x; i++) {
        printf("\n--- Inserindo dados da Pessoa [%d] ---\n", i + 1);
        printf("Insira o nome: ");
        scanf(" %[^\n]", v[i].nome); // Espaço antes de %[^\n] para consumir o newline
        printf("Insira a idade: ");
        scanf("%d", &v[i].idade);
        printf("Insira o endereco: ");
        scanf(" %[^\n]", v[i].endereco);
    }
    return v; // Retorna o ponteiro para o vetor alocado
}

int main() {
    int numero;
    printf("Insira a quantidade de cadastros a serem feitos: ");
    scanf("%d", &numero);

    Cadastro *v = criar_cadastros(numero);

    printf("\n--- Exibindo Cadastros ---\n");
    for (int i = 0; i < numero; i++) {
        printf("Nome: %s\n", v[i].nome);
        printf("Idade: %d\n", v[i].idade);
        printf("Endereco: %s\n\n", v[i].endereco);
    }

    free(v); // Libera a memória alocada
    return 0;
}