#include <stdio.h>

int main() {
    int x, y, z, soma;
    int cont = 0;

    while (cont < 5) {
        soma = 0;
        printf("Insira dois valores inteiros: ");
        scanf("%d%d", &x, &y); //

        if (x < y) {
            for (z = x; z <= y; z++) { //
                soma = soma + z; //
            }
        } else {
            for (z = y; z <= x; z++) { //
                soma = soma + z; //
            }
        }
        printf("A soma eh: %d\n", soma); //
        cont++;
    }
    return 0;
}