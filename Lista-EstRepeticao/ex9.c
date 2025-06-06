#include <stdio.h>

int main() {
    int maior, menor, numero;

    printf("Informe um numero: ");
    scanf("%d", &numero); // 

    menor = numero; // 
    maior = numero; // 

    for (int i = 2; i <= 30; i++) { // 
        printf("Informe um numero: ");
        scanf("%d", &numero); // 

        if (numero > maior) {
            maior = numero; // 
        } else if (numero < menor) {
            menor = numero; // 
        }
    }
    printf("O maior numero eh %d e o menor numero eh %d\n", maior, menor); // 
    return 0;
}