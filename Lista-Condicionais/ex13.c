#include <stdio.h>
#include <math.h>

int main() {
    float v1, v2, v3;

    printf("Informe 3 lados de um triangulo: \n");
    scanf("%f%f%f", &v1, &v2, &v3);

    if (v1 + v2 < v3 || v2 + v3 < v1 || v1 + v3 < v2) {
        printf("Nao e possivel formar um triangulo");
    } else {
        if (v1 == v2 && v2 == v3) {
            printf("O triangulo e equilatero");
        } else if (v1 == v2 || v2 == v3 || v1 == v3) {
            printf("O triangulo e isosceles");
        } else {
            printf("O triangulo e escaleno");
        }
    }
    return 0;
}