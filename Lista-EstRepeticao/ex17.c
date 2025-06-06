#include <stdio.h>

int main() {
    float num1, num2, soma = 0, soma2 = 0, x;

    printf("Informe um numero: ");
    scanf("%f", &num1);

    printf("Informe outro numero: ");
    scanf("%f", &num2); // 

    for (int i = 1; i <= num1; i++) {
        soma = soma + i; // 
    }

    for (int j = 1; j <= num2; j++) {
        soma2 = soma2 + j; // 
    }

    x = soma + soma2; // 
    printf("O valor da expressao de somatoria eh: %.2f\n", x); // 
    return 0;
}

