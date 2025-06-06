#include <stdio.h>

// Função que retorna o n-ésimo termo da sequência de Fibonacci
int fibonacci(int x) {
    if (x <= 1) { // Caso base para n=1 (ou n=0)
        return 0;
    } else if (x == 2) { // Caso base para n=2
        return 1;
    } else {
        return fibonacci(x - 1) + fibonacci(x - 2);
    }
}

int main() {
    int numero;
    printf("Insira o numero do termo da sequencia de Fibonacci: ");
    scanf("%d", &numero);
    printf("O numero eh: %d\n", fibonacci(numero));
    return 0;
}