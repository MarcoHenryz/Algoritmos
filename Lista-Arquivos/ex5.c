#include <stdio.h>
#include <ctype.h> // Para a função tolower

int main() {
    char nome_arquivo[100];
    FILE *arquivo;
    int contagem[26] = {0}; // Vetor para contar as letras de 'a' a 'z'
    int c;

    printf("Digite o nome do arquivo de texto: ");
    scanf("%s", nome_arquivo);

    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo '%s'.\n", nome_arquivo);
        return 1;
    }

    // Lê o arquivo caractere por caractere
    while ((c = fgetc(arquivo)) != EOF) {
        // Se for uma letra, converte para minúscula e incrementa o contador
        if (isalpha(c)) {
            contagem[tolower(c) - 'a']++;
        }
    }

    printf("\nContagem de letras no arquivo:\n");
    for (int i = 0; i < 26; i++) {
        if (contagem[i] > 0) {
            printf("Letra '%c': %d vezes\n", 'a' + i, contagem[i]);
        }
    }

    fclose(arquivo);
    return 0;
}