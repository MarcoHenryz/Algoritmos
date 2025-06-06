#include <stdio.h>

int main() {
    int a;
    int *b;
    int **c;
    int ***d;

    printf("Insira um valor inteiro: ");
    scanf("%d", &a);

    // Associando os ponteiros em cadeia
    b = &a;
    c = &b;
    d = &c;

    printf("\nValor original de A: %d\n", a);
    printf("Dobro (via *b): %d\n", 2 * (*b));
    printf("Triplo (via **c): %d\n", 3 * (**c));
    printf("Quadruplo (via ***d): %d\n", 4 * (***d));

    return 0;
}