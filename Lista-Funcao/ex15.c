#include <stdio.h>
#include <math.h>

// Função recursiva para o somatório S
float s(int x) {
    if (x == 1) { // Caso base
        return (1.0 + pow(x, 2)) / x;
    } else if (x > 1) {
        return (1.0 + pow(x, 2)) / x + s(x - 1);
    } else {
        return 0; // Para x <= 0
    }
}

int main() {
    int numero;
    printf("Insira um valor inteiro positivo: ");
    scanf("%d", &numero);

    printf("O valor da sequencia eh: %f\n", s(numero));
    return 0;
}