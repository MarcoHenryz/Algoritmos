#include <stdio.h>

int main() {
    float salario, valor;
    int tempo;

    printf("Informe o valor do salario atual: \n");
    scanf("%f", &salario);

    printf("Informe o tempo que trabalha na empresa (em anos):");
    scanf("%d", &tempo);

    // Reajuste por faixa salarial
    if (salario <= 500) {
        valor = salario * 1.25;
    } else if (salario <= 1000) {
        valor = salario * 1.20;
    } else if (salario <= 1500) {
        valor = salario * 1.15;
    } else if (salario <= 2000) {
        valor = salario * 1.10;
    } else {
        valor = salario;
    }

    // Bônus por tempo de serviço
    if (tempo > 10) {
        valor = valor + 500;
    } else if (tempo >= 7 && tempo <= 10) {
        valor = valor + 300;
    } else if (tempo >= 4 && tempo <= 6) {
        valor = valor + 200;
    } else if (tempo >= 1 && tempo <= 3) {
        valor = valor + 100;
    }
    // Se o tempo for menor que 1, não há bônus.

    printf("O salario reajustado sera de: R$%.2f", valor);

    return 0;
}