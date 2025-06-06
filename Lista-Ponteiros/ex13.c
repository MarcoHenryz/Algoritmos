#include <stdio.h>
#include <string.h>

void Quantidade_caracteres(char *s) {
    int cont = 0;
    // Percorre a string até encontrar o caractere nulo ('\0')
    while (*s != '\0') {
        cont++;
        s++; // Avança o ponteiro
    }
    printf("O numero de caracteres da string eh: %d\n", cont);
}

int main() {
    char string[51]; // 50 caracteres + '\0'

    printf("Insira uma frase de ate 50 caracteres:\n");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0'; // Remove o newline

    Quantidade_caracteres(string);

    return 0;
}