#include <stdio.h>

int main() {
    int inferior, superior;
    int soma = 0; // 

    printf("Informe o limite inferior: ");
    scanf("%d", &inferior); // 

    printf("\nInforme o limite superior: ");
    scanf("%d", &superior); // 

    printf("\nSaida (numeros pares no intervalo):\n");
    for (int i = inferior; i <= superior; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            soma = soma + i;
        }
    }

    printf("\n\nSoma dos pares: %d\n", soma);
    return 0;
}