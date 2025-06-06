#include <stdio.h>

void desenha_losango(int n) {
    int espacos = n / 2;
    int simbolos = 1;

    // Parte de cima do losango
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < simbolos; j++) {
            printf("%%");
        }
        printf("\n");
        espacos--;
        simbolos += 2;
    }

    // Parte de baixo do losango
    espacos = 1;
    simbolos = n - 2;
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < espacos; j++) {
            printf(" ");
        }
        for (int j = 0; j < simbolos; j++) {
            printf("%%");
        }
        printf("\n");
        espacos++;
        simbolos -= 2;
    }
}

void desenha_triangulo(int n) {
    for (int i = 1; i <= n; i++) {
        // Imprime espaços à esquerda
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Imprime os símbolos
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("%%");
        }
        printf("\n");
    }
}


int main() {
    int n, escolha;

    printf("Qual figura voce quer? [1] Losangulo [2] Triangulo\n");
    scanf("%d", &escolha); // 

    printf("Quantas linhas deve ter?\n");
    scanf("%d", &n); // 

    if (escolha == 1) {
        if (n % 2 == 1) { 
            desenha_losango(n);
        } else {
            printf("Para um losango, o numero de linhas deve ser impar.\n");
        }
    } else if (escolha == 2) {
        desenha_triangulo(n);
    } else {
        printf("Opcao invalida.\n");
    }

    return 0;
}