#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUNOS 50
#define NOTA_APROVACAO 6.0

typedef struct {
    char nome[50];
    float n1, n2;
    float media;
    int ativo; // 1 para ativo, 0 para removido
} Aluno;

Aluno turma[MAX_ALUNOS];
int total_alunos = 0;
char nome_arquivo[100] = "turma.dat";

void carregar_dados() {
    FILE *f = fopen(nome_arquivo, "rb");
    if (f == NULL) {
        printf("Arquivo de dados nao encontrado. Um novo sera criado ao salvar.\n");
        return;
    }
    total_alunos = fread(turma, sizeof(Aluno), MAX_ALUNOS, f);
    fclose(f);
    printf("Dados carregados de '%s'.\n", nome_arquivo);
}

void inserir_aluno() {
    if (total_alunos >= MAX_ALUNOS) {
        printf("Turma cheia!\n");
        return;
    }
    printf("Nome do aluno: ");
    scanf(" %[^\n]", turma[total_alunos].nome);
    printf("Nota 1: ");
    scanf("%f", &turma[total_alunos].n1);
    printf("Nota 2: ");
    scanf("%f", &turma[total_alunos].n2);
    turma[total_alunos].media = (turma[total_alunos].n1 + turma[total_alunos].n2) / 2.0;
    turma[total_alunos].ativo = 1;
    total_alunos++;
    printf("Aluno inserido com sucesso!\n");
}

void exibir_alunos(int status) { // 0=todos, 1=aprovados, 2=reprovados
    printf("\n--- Lista de Alunos ---\n");
    for (int i = 0; i < total_alunos; i++) {
        if (turma[i].ativo) {
            int aprovado = turma[i].media >= NOTA_APROVACAO;
            if (status == 0 || (status == 1 && aprovado) || (status == 2 && !aprovado)) {
                 printf("Nome: %-20s N1: %.2f, N2: %.2f, Media: %.2f (%s)\n",
                       turma[i].nome, turma[i].n1, turma[i].n2, turma[i].media,
                       aprovado ? "Aprovado" : "Reprovado");
            }
        }
    }
}

void salvar_dados() {
    FILE *f = fopen(nome_arquivo, "wb");
    if (f == NULL) {
        printf("Erro ao salvar os dados!\n");
        return;
    }
    fwrite(turma, sizeof(Aluno), total_alunos, f);
    fclose(f);
    printf("Dados salvos com sucesso em '%s'.\n", nome_arquivo);
}

int main() {
    int opcao;
    carregar_dados();

    do {
        printf("\n--- Gerenciador de Notas ---\n");
        printf("1. Inserir aluno e notas\n");
        printf("2. Exibir alunos e medias\n");
        printf("3. Exibir alunos aprovados\n");
        printf("4. Exibir alunos reprovados\n");
        printf("5. Salvar dados em Disco\n");
        printf("6. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: inserir_aluno(); break;
            case 2: exibir_alunos(0); break;
            case 3: exibir_alunos(1); break;
            case 4: exibir_alunos(2); break;
            case 5: salvar_dados(); break;
            case 6: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}