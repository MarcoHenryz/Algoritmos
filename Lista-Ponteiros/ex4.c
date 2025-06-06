#include <stdio.h>

int funcao(int *x, int *y) {
    *x = 2 * (*x);
    *y = 2 * (*y);
    return (*x) + (*y);
}

int main() {
    int num1, num2;

    printf("Insira um numero inteiro (A): ");
    scanf("%d", &num1);

    printf("Insira outro numero inteiro (B): ");
    scanf("%d", &num2);

    printf("\nSoma do dobro: %d\n", funcao(&num1, &num2));
    printf("Novo valor de A (dobro): %d\n", num1);
    printf("Novo valor de B (dobro): %d\n", num2);

    return 0;
}