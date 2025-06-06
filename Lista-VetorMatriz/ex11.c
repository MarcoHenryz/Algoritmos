#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    char string_invertida[100];
    int tamanho, j = 0;

    printf("Informe uma string para inverter: ");
    fgets(string, 100, stdin);
    string[strcspn(string, "\n")] = '\0';

    tamanho = strlen(string);

    for (int i = tamanho - 1; i >= 0; i--) {
        string_invertida[j] = string[i];
        j++;
    }
    string_invertida[j] = '\0'; // Finaliza a string invertida

    printf("String original: %s\n", string);
    printf("String invertida: %s\n", string_invertida);

    return 0;
}