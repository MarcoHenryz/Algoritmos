#include <stdio.h>

int main() {
    int par = 0, impar = 0; // 
    int x, soma = 0, z = 0; // 
    float resultado;

    while (z < 10) { // 
        printf("Informe um valor: ");
        scanf("%d", &x); // 

        if (x % 2 == 0) {
            par++; // 
        } else { 
            soma = soma + x; // 
            impar++; // 
        }
        z++; // 
    }

    if (impar > 0) {
        resultado = (float)soma / impar; // 
        printf("A media dos valores impares eh: %.2f\n", resultado); // 
    } else {
        printf("Nenhum numero impar foi inserido.\n");
    }

    printf("O total de valores pares eh: %d\n", par); // 
    return 0; // 
}