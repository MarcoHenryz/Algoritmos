#include <stdio.h>

int main() {
    int codigo;
    float preco, valor;

    printf("Insira o preco do produto: ");
    scanf("%f", &preco);

    printf("1- A vista em dinheiro ou cheque, recebe 10 por cento de desconto\n");
    printf("2- A vista no cartao de credito, recebe 15 por cento de desconto\n");
    printf("3- Em duas vezes, preco normal de etiqueta sem juros\n");
    printf("4- Em duas vezes, preco normal de etiqueta mas juros de 10 por cento\n");
    printf("Selecione o codigo do pagamento desejado:");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            valor = preco * 0.9;
            break;
        case 2:
            valor = preco * 0.85;
            break;
        case 3:
            valor = preco;
            break;
        case 4:
            valor = preco * 1.10;
            break;
    }
    printf("O valor a ser pago pelo produto sera de %.2f", valor);

    return 0;
}