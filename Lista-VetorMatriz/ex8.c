#include <stdio.h>
#include <string.h> // Biblioteca recomendada para manipulação de strings

int main() {
    char string[256];
    int cont = 0;

    printf("Escreva uma palavra ou frase de ate 255 caracteres: ");
    fgets(string, 256, stdin); // 'fgets' é mais seguro que 'gets'

    // Remove o '\n' que o fgets adiciona no final
    string[strcspn(string, "\n")] = '\0';

    // A função strlen já faz a contagem de forma eficiente
    cont = strlen(string); 

    printf("A quantidade de caracteres que a string possui eh de: %d\n", cont);

    return 0;
}