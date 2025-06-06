#include <stdio.h>

void trocar(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main() {
    int num1, num2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num1);

    printf("Insira outro numero inteiro: ");
    scanf("%d", &num2);

    printf("\nAntes da funcao:\nNum1: %d\nNum2: %d\n", num1, num2);
    trocar(&num1, &num2);
    printf("\nDepois da funcao:\nNum1: %d\nNum2: %d\n", num1, num2);

    return 0;
}