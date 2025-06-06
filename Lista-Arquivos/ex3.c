#include <stdio.h>
#include <stdlib.h>

// Função para calcular a idade
int calcular_idade(int dia_nasc, int mes_nasc, int ano_nasc, int dia_atual, int mes_atual, int ano_atual) {
    int idade = ano_atual - ano_nasc;
    if (mes_atual < mes_nasc || (mes_atual == mes_nasc && dia_atual < dia_nasc)) {
        idade--;
    }
    return idade;
}

int main() {
    FILE *entrada, *saida;
    char nome[50];
    int dia_n, mes_n, ano_n;
    int dia_a, mes_a, ano_a;

    entrada = fopen("nascimentos.txt", "r");
    if (entrada == NULL) {
        printf("Erro: Arquivo 'nascimentos.txt' nao encontrado.\n");
        return 1;
    }

    saida = fopen("idades.txt", "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        fclose(entrada);
        return 1;
    }

    printf("Digite a data atual (dia mes ano): ");
    scanf("%d %d", &dia_a, &mes_a, &ano_a);

    fprintf(saida, "Relatorio de Idades (Data Base: %02d/%02d/%d)\n", dia_a, mes_a, ano_a);
    fprintf(saida, "--------------------------------------------\n");

    while (fscanf(entrada, "%s %d %d %d", nome, &dia_n, &mes_n, &ano_n) != EOF) {
        int idade = calcular_idade(dia_n, mes_n, ano_n, dia_a, mes_a, ano_a);
        fprintf(saida, "Nome: %-20s Idade: %d anos\n", nome, idade);
    }

    printf("Arquivo 'idades.txt' gerado com sucesso!\n");

    fclose(entrada);
    fclose(saida);
    return 0;
}