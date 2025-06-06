#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

    printf("Informe um numero para verificar se eh perfeito: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    if (soma_divisores == numero) {
        printf("O numero %d eh perfeito.\n", numero);
    } else {
        printf("O numero %d nao eh perfeito.\n", numero);
    }

    return 0;
}