#include <stdio.h>

int main() {
    int valor, divisores, somatorio;

    for (int i = 1; i <= 10; i++) { // 
        printf("Insira um valor inteiro: ");
        scanf("%d", &valor); // 

        divisores = 0; // 
        somatorio = 0; // 

        // Loop para encontrar os divisores
        for (int x = 1; x <= valor; x++) { // 
            if (valor % x == 0) { // 
                divisores++; // 
            }
        }

        // Loop para o somatório de 1 até o valor
        for (int z = 1; z <= valor; z++) {
            somatorio = somatorio + z;
        }

        printf("O somatorio eh de: %d\n", somatorio);
        printf("O numero de divisores eh: %d\n", divisores);
    }
    return 0;
}