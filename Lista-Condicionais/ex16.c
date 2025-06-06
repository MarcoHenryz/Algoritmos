#include <stdio.h>

int main() {
    int valor, c100, c50, c10, c5, c1;

    printf("Informe um valor em reais:");
    scanf("%d", &valor);

    if (valor > 0) {
        c100 = valor / 100;
        valor = valor % 100;

        c50 = valor / 50;
        valor = valor % 50;

        c10 = valor / 10;
        valor = valor % 10;

        c5 = valor / 5;
        valor = valor % 5;

        c1 = valor;

        printf("O numero de cedulas sera de %d cedulas de 100 reais\n%d cedulas de 50 reais\n%d cedulas de 10 reais\n%d cedulas de 5 reais\n%d cedulas de 1 real", c100, c50, c10, c5, c1);
    } else {
        printf("Valor invalido.");
    }

    return 0;
}