#include <stdio.h>

// Função que imprime um triângulo de asteriscos
void triangulo(int x) {
    // Parte de cima do triângulo
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Parte de baixo do triângulo
    for (int i = x - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int numero;
    printf("Insira um numero: ");
    scanf("%d", &numero);
    triangulo(numero);
    return 0;
}