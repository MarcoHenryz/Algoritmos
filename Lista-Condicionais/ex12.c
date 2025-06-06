#include <stdio.h>

int main() {
    int op;

    printf("Escolha uma das operacoes bases: \n1 Soma\n2 Subtracao\n3 Multiplicacao\n4 Divisao\nOperacao:");
    scanf("%d", &op);

    if (op < 1 || op > 4) {
        printf("Operacao invalida!");
    } else {
        float num1, num2, result;
        printf("Informe dois valores numericos: \n");
        scanf("%f%f", &num1, &num2);

        switch (op) {
            case 1:
                result = num1 + num2;
                break;
            case 2:
                result = num1 - num2;
                break;
            case 3:
                result = num1 * num2;
                break;
            case 4:
                result = num1 / num2;
                break;
        }
        printf("O resultado da operacao sera: %.2f", result);
    }
    return 0;
}