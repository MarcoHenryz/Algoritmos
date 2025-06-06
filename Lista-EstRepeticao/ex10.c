#include <stdio.h>

int main() {
    int n, numero, tabuada;

    for (n = 1; n <= 20; n++) { // 
        printf("\nInforme um numero para ver sua tabuada: ");
        scanf("%d", &numero); // 

        for (int z = 1; z <= 10; z++) { // Tabuada do 1 ao 10
            tabuada = numero * z; // 
            printf("%d x %d = %d\n", numero, z, tabuada);
        }
    }
    return 0;
}