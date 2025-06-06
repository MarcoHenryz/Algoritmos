#include <stdio.h>

// Função recursiva que imprime um número invertido
void inverso(int x) {
    if (x < 0) {
        printf("-");
        x = x * -1;
    }
    if (x != 0) {
        printf("%d", x % 10);
        inverso(x / 10);
    }
}

int main() {
    int numero;
    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);
    inverso(numero);
    printf("\n");
    return 0;
}