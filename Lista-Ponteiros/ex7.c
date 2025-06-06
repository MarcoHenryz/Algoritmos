#include <stdio.h>
#include <string.h>

void verificar(char *str, char *str2) {
    char *p1, *p2;
    int encontrado = 0;

    // Percorre a string principal
    while (*str != '\0') {
        p1 = str;
        p2 = str2;

        // Verifica se a substring começa na posição atual
        while (*p1 == *p2 && *p2 != '\0') {
            p1++;
            p2++;
        }

        // Se p2 chegou ao fim, a substring foi encontrada
        if (*p2 == '\0') {
            encontrado = 1;
            break;
        }
        str++;
    }

    if (encontrado) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string nao esta contida na primeira.\n");
    }
}

int main() {
    char string[50], string2[50];

    printf("Insira a primeira frase: ");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0; // Remove o newline do final

    printf("Insira a segunda frase (substring): ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = 0;

    verificar(string, string2);
    return 0;
}