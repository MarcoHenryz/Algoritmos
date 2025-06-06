#include <stdio.h>

int main() {
    int valor;
    long long int resultado; 

    for (int i = 1; i <= 7; i++) { // 
        printf("Insira um valor: ");
        scanf("%d", &valor); // 

        resultado = 1; 

        if (valor < 0) {
            printf("Nao se calcula fatorial de numero negativo.\n");
        } else {
            for (int x = 1; x <= valor; x++) { // 
                resultado = resultado * x; // 
            }
            printf("O fatorial eh: %lld\n", resultado); // 
        }
    }
    return 0; // 
}