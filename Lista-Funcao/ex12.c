#include <stdio.h>

// Função recursiva para calcular x elevado a y
int funcao(int x, int y) {
    if (y == 0) {
        return 1;
    } else {
        return x * funcao(x, y - 1);
    }
}

int main() {
    int x, y;
    printf("Informe um numero: ");
    scanf("%d", &x);
    printf("Informe outro numero (potencia): ");
    scanf("%d", &y);

    printf("O valor do numero %d elevado a %d eh %d\n", x, y, funcao(x, y));
    return 0;
}