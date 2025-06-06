#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função que retorna um ponteiro para a string invertida
char* inverter(char *str) {
    int tamanho = strlen(str);
    char *invertida;

    // Aloca memória para a nova string
    invertida = (char*) malloc((tamanho + 1) * sizeof(char));
    if (invertida == NULL) {
        printf("Memoria Insuficiente\n");
        exit(1);
    }

    // Inverte a string
    for (int i = 0; i < tamanho; i++) {
        invertida[i] = str[tamanho - 1 - i];
    }
    invertida[tamanho] = '\0'; // Adiciona o caractere nulo no final

    return invertida;
}

int main() {
    char string[50];
    printf("Insira uma frase: ");
    scanf(" %[^\n]", string);

    char *str_invertida = inverter(string);

    printf("String invertida: %s\n", str_invertida);

    free(str_invertida); // Libera a memória da string invertida
    return 0;
}