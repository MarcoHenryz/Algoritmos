#include <stdio.h>
#include <stdlib.h>

// Função que lê a matriz do arquivo e a retorna
int** ler_matriz_de_arquivo(const char* nome_arquivo, int *linhas, int *colunas) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        return NULL; // Retorna NULL se não conseguir abrir o arquivo
    }

    // Lê as dimensões
    fscanf(arquivo, "%d %d", linhas, colunas);

    // Aloca as linhas da matriz
    int **matriz = (int**) malloc(*linhas * sizeof(int*));
    if (matriz == NULL) return NULL;

    // Aloca as colunas para cada linha e preenche com os dados
    for (int i = 0; i < *linhas; i++) {
        matriz[i] = (int*) malloc(*colunas * sizeof(int));
        if (matriz[i] == NULL) return NULL;
        for (int j = 0; j < *colunas; j++) {
            fscanf(arquivo, "%d", &matriz[i][j]);
        }
    }

    fclose(arquivo);
    return matriz;
}

int main() {
    int linhas, colunas;
    // Crie um arquivo 'matriz_dados.txt' com o conteúdo:
    // 3 4
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    int **minha_matriz = ler_matriz_de_arquivo("matriz_dados.txt", &linhas, &colunas);

    if (minha_matriz == NULL) {
        printf("Erro ao ler a matriz do arquivo 'matriz_dados.txt'.\n");
        return 1;
    }

    printf("Matriz lida do arquivo (%dx%d):\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d\t", minha_matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(minha_matriz[i]);
    }
    free(minha_matriz);

    return 0;
}