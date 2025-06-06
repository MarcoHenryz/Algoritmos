#include <stdio.h>
#include <stdlib.h>

// A função recebe a matriz, número de linhas e colunas
void salvar_matriz_em_arquivo(int **matriz, int linhas, int colunas) {
    FILE *arquivo = fopen("matriz.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo 'matriz.txt'.\n");
        return;
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            fprintf(arquivo, "%d ", matriz[i][j]);
        }
        fprintf(arquivo, "\n"); // Pula para a próxima linha no arquivo
    }

    printf("Matriz salva com sucesso em 'matriz.txt'.\n");
    fclose(arquivo);
}

int main() {
    int linhas = 3, colunas = 4;

    // Cria e preenche uma matriz de exemplo
    int **mat = (int**) malloc(linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++) {
        mat[i] = (int*) malloc(colunas * sizeof(int));
    }
    
    for(int i=0; i<linhas; i++) {
        for(int j=0; j<colunas; j++) {
            mat[i][j] = i * colunas + j + 1;
        }
    }

    // Chama a função para salvar a matriz
    salvar_matriz_em_arquivo(mat, linhas, colunas);
    
    // Libera a memória
    for(int i=0; i<linhas; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}