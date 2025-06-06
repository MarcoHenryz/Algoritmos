#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, raiz1, raiz2, raiz3;

    printf("Insira os coeficientes a, b e c respectivamente: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a == 0) {
        printf("Nao e equação do segundo grau\n");
    } else {
        delta = b * b - (4 * a * c);

        if (delta < 0) {
            printf("Nao existe raiz real");
        } else if (delta == 0) {
            raiz3 = (-b + sqrt(delta)) / (2 * a);
            printf("A raiz e unica: %.2f", raiz3);
        } else if (delta > 0) {
            raiz1 = (-b + sqrt(delta)) / (2 * a);
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("As raízes são %.2f e %.2f", raiz1, raiz2);
        }
    }
    return 0;
}