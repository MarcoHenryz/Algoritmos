#include <stdio.h>

// Função que encontra o maior fator primo de um número
int primo(int x) {
    int maior_fator = 0;
    int i = 2;

    if (x <= 1) return 0; // Não há fator primo para 0 ou 1

    while (x > 1) {
        if (x % i == 0) {
            if (i > maior_fator) {
                maior_fator = i;
            }
            x = x / i;
        } else {
            i++;
        }
    }
    return maior_fator;
}

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("O maior fator primo de %d eh: %d\n", numero, primo(numero));

    return 0;
}