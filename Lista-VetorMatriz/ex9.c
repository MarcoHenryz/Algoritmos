#include <stdio.h>
#include <string.h>
#include <ctype.h> // Para a função tolower

int main() {
    char string[256];
    int vogal = 0;
    char caractere;

    printf("Escreva uma frase ou palavra de ate 255 caracteres: ");
    fgets(string, 256, stdin);
    string[strcspn(string, "\n")] = '\0';

    // Conta as vogais
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]); // Converte para minúscula para facilitar a comparação
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogal++;
        }
    }
    printf("A frase possui %d vogais.\n", vogal);

    printf("Insira um caractere para substituir as vogais: ");
    scanf(" %c", &caractere);

    // Substitui as vogais
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            string[i] = caractere;
        }
    }

    printf("String modificada: %s\n", string);

    return 0;
}