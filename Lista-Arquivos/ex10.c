#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int cod_vendedor;
    char nome_vendedor[50];
    float valor_venda;
    int mes;
} Venda;

const char *NOME_ARQUIVO = "vendas.dat";

// Função para criar/limpar o arquivo de dados
void criar_arquivo() {
    FILE *f = fopen(NOME_ARQUIVO, "wb");
    if (f == NULL) {
        printf("Erro ao criar o arquivo.\n");
    } else {
        printf("Arquivo '%s' criado/limpo com sucesso.\n", NOME_ARQUIVO);
        fclose(f);
    }
}

// Função para incluir um registro
void incluir_registro() {
    Venda nova_venda;
    printf("Codigo do vendedor: ");
    scanf("%d", &nova_venda.cod_vendedor);
    printf("Nome do vendedor: ");
    scanf(" %[^\n]", nova_venda.nome_vendedor);
    printf("Valor da venda: ");
    scanf("%f", &nova_venda.valor_venda);
    printf("Mes (1-12): ");
    scanf("%d", &nova_venda.mes);
    
    // Abre para adição binária ("ab")
    FILE *f = fopen(NOME_ARQUIVO, "ab");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }
    fwrite(&nova_venda, sizeof(Venda), 1, f);
    fclose(f);
    printf("Registro incluido. (Obs: Para manter ordenado, seria necessario reordenar o arquivo todo)\n");
}

// Função para imprimir todos os registros
void imprimir_registros() {
    Venda v;
    FILE *f = fopen(NOME_ARQUIVO, "rb");
    if (f == NULL) {
        printf("Arquivo nao encontrado ou vazio.\n");
        return;
    }
    printf("\n--- Registros de Vendas ---\n");
    while(fread(&v, sizeof(Venda), 1, f)) {
        printf("Cod: %d, Nome: %s, Valor: R$%.2f, Mes: %d\n",
               v.cod_vendedor, v.nome_vendedor, v.valor_venda, v.mes);
    }
    fclose(f);
}

// Função para excluir o arquivo de dados
void excluir_arquivo() {
    if (remove(NOME_ARQUIVO) == 0) {
        printf("Arquivo '%s' excluido com sucesso.\n", NOME_ARQUIVO);
    } else {
        printf("Erro ao excluir o arquivo.\n");
    }
}

// Implementação simplificada para as demais funções
void excluir_vendedor() { printf("Funcao 'Excluir Vendedor' nao implementada.\n"); }
void alterar_venda() { printf("Funcao 'Alterar Venda' nao implementada.\n"); }


int main() {
    int opcao;
    do {
        printf("\n--- Gerenciador de Vendas ---\n");
        printf("1. Criar arquivo de dados\n");
        printf("2. Incluir registro\n");
        printf("3. Excluir vendedor\n");
        printf("4. Alterar valor de venda\n");
        printf("5. Imprimir registros\n");
        printf("6. Excluir arquivo de dados\n");
        printf("7. Finalizar o programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: criar_arquivo(); break;
            case 2: incluir_registro(); break;
            case 3: excluir_vendedor(); break;
            case 4: alterar_venda(); break;
            case 5: imprimir_registros(); break;
            case 6: excluir_arquivo(); break;
            case 7: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 7);

    return 0;
}