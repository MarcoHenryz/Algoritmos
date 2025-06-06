#include <stdio.h>
#include <math.h>

int main() { // 
    int numero;
    float quadrado, raiz;

    do {
        printf("Informe um numero:\n");
        scanf("%d", &numero); // 

        if (numero <= 0) {
            printf("Numero invalido. Encerrando o programa.\n");
            break;
        }

        if (numero % 2 == 0) { // 
            quadrado = pow(numero, 2); // 
            printf("O quadrado do numero eh: %.0f\n", quadrado); // 
        } else { 
            raiz = sqrt(numero); // 
            printf("A raiz do numero eh: %.2f\n", raiz); // 
        }

    } while (numero > 0); // 

    return 0;
}