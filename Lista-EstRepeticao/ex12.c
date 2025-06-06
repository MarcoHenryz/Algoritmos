#include <stdio.h>

int main() {
    int numero, proximo;
    int x = 0, z = 1; // 

    printf("Informe um numero inteiro (n-esimo termo de Fibonacci): \n");
    scanf("%d", &numero); // 

    if (numero < 1) { 
        printf("Numero invalido!"); // 
    } else if (numero == 1) {
        proximo = 0; // 
    } else if (numero == 2) {
        proximo = 1; // 
    } else {
        for (int i = 3; i <= numero; i++) { // 
            proximo = x + z; // 
            x = z; // 
            z = proximo; // 
        }
    }

    if (numero >= 1) {
        printf("O %d-esimo termo de Fibonacci eh: %d\n", numero, proximo); // 
    }

    return 0;
}