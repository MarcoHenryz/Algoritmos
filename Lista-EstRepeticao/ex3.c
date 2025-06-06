#include <stdio.h>

int main() {
    int soma = 0, z = 0, valor; // 
    float media;

    while (z < 10) { // 
        printf("Informe um valor: ");
        scanf("%d", &valor); // 
        soma = soma + valor; // 
        z++; // 
    }

    media = (float)soma / 10; // 
    printf("A media eh de: %.2f", media); // 
    return 0;
}