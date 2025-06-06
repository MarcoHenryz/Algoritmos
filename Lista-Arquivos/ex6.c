#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    FILE *arquivo;

    // Abre o arquivo em modo de escrita binária ("wb")
    arquivo = fopen("atletas.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo binario.\n");
        return 1;
    }

    printf("--- Cadastro de 5 Atletas ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAtleta %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", atletas[i].nome);
        printf("Esporte: ");
        scanf(" %[^\n]", atletas[i].esporte);
        printf("Idade: ");
        scanf("%d", &atletas[i].idade);
        printf("Altura (m): ");
        scanf("%f", &atletas[i].altura);
    }

    // Escreve todo o array de atletas no arquivo de uma só vez
    fwrite(atletas, sizeof(Atleta), 5, arquivo);

    printf("\nDados dos atletas gravados com sucesso em 'atletas.bin'.\n");
    fclose(arquivo);
    return 0;
}