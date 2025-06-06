#include <stdio.h>

int main() {
    int numero, cont = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero); // 

    if (numero <= 1) {
        cont = 0; // 
    } else {
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0) {
                cont++;
            }
        }
    }

    if (cont == 2) { 
        printf("O numero eh primo\n");
    } else {
        printf("O numero nao eh primo\n");
    }
    return 0;
}