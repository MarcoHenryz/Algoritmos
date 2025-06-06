#include <stdio.h>

int main() {
    int numero;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0; // 

    do {
        printf("Insira um numero (negativo para parar): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 25) {
            cont1++;
        } else if (numero > 25 && numero <= 50) {
            cont2++;
        } else if (numero > 50 && numero <= 75) {
            cont3++;
        } else if (numero > 75 && numero <= 100) {
            cont4++;
        }
    } while (numero >= 0); // 

    printf("Foram lidos %d numeros no intervalo [0-25]\n", cont1);
    printf("Foram lidos %d numeros no intervalo [26-50]\n", cont2); // 
    printf("Foram lidos %d numeros no intervalo [51-75]\n", cont3); // 
    printf("Foram lidos %d numeros no intervalo [76-100]\n", cont4); // 

    return 0;
}