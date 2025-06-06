#include <stdio.h>
#include <math.h>

int main() {
    int z;
    float a, b, c, total;

    printf("Escreva 3 numeros inteiros positivos: \n");
    scanf("%f%f%f", &a, &b, &c);

    printf("Escolha a media desejada: \n1- Geometrica\n2- Ponderada\n3- Harmonica\n4-Aritmedica\nMedia:");
    scanf("%d", &z);

    switch (z) {
        case 1:
            total = a * b * c;
            break;
        case 2:
            total = (a + 2 * b + 3 * c) / 6;
            break;
        case 3:
            total = 1 / (1 / a + 1 / b + 1 / c);
            break;
        case 4:
            total = (a + b + c) / 3;
            break;
    }
    printf("O resultado é %.2f", total);

    return 0;
}