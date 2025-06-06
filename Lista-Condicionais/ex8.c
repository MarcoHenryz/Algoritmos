#include <stdio.h>
#include <math.h>

int main() {
    float peso, altura, valor;

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    valor = peso / pow(altura, 2);

    if (valor < 18.5) {
        printf("Abaixo do peso\n");
    } else if (valor >= 18.5 && valor < 25) {
        printf("Peso normal\n");
    } else if (valor >= 25 && valor <= 30) {
        printf("Acima do peso\n");
    } else if (valor > 30) {
        printf("Obeso\n");
    }
    return 0;
}