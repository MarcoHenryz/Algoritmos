#include <stdio.h>
#include <math.h>

// Função recursiva para somar os cubos de 1 até x
int cubo(int x) {
    if (x == 0) {
        return 0;
    } else {
        return pow(x, 3) + cubo(x - 1);
    }
}

int main() {
    int x;
    printf("Informe um numero natural: ");
    scanf("%d", &x);
    printf("A soma dos cubos eh de: %d\n", cubo(x));
    return 0;
}