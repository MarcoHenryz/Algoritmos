#include <stdio.h>
#include <string.h>

void Imprimir_palavra(char *s) {
    printf("\nImprimindo palavra por palavra:\n");
    while (*s != '\0') {
        if (*s == ' ' || *s == '\n') {
            printf("\n");
        } else {
            printf("%c", *s);
        }
        s++; // Avança o ponteiro para o próximo caractere
    }
}

int main() {
    char string[61]; // 60 caracteres + '\0'

    printf("Insira uma frase com no maximo 60 caracteres:\n");
    fgets(string, sizeof(string), stdin);

    Imprimir_palavra(string);

    return 0;
}