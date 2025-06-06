#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int num;
    int quant;
    float preco;
} Produto;

int main() {
    int n, indice_maiorq = 0, indice_maiorp = 0;
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &n);
    
    if (n <= 0) return 1;

    Produto *p = (Produto*) malloc(n * sizeof(Produto));
    if (p == NULL) {
        printf("Memoria insuficiente\n");
        exit(1);
    }

    // Preenche os dados dos produtos
    for (int i = 0; i < n; i++) {
        printf("\n--- Produto [%d] ---\n", i + 1);
        printf("Informe o nome: ");
        scanf(" %[^\n]", p[i].nome);
        printf("Informe o codigo: ");
        scanf("%d", &p[i].num);
        printf("Informe a quantidade em estoque: ");
        scanf("%d", &p[i].quant);
        printf("Informe o preco: ");
        scanf("%f", &p[i].preco);
    }

    // Encontra os índices dos produtos com maior preço e quantidade
    for (int i = 1; i < n; i++) {
        if (p[i].preco > p[indice_maiorp].preco) {
            indice_maiorp = i;
        }
        if (p[i].quant > p[indice_maiorq].quant) {
            indice_maiorq = i;
        }
    }

    // Exibe os resultados
    printf("\n--- Resultados ---\n");
    printf("Produto com maior preco: %s (R$ %.2f)\n", p[indice_maiorp].nome, p[indice_maiorp].preco);
    printf("Produto com maior quantidade em estoque: %s (%d unidades)\n", p[indice_maiorq].nome, p[indice_maiorq].quant);

    free(p);
    return 0;
}