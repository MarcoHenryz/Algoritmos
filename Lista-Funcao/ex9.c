#include <stdio.h>
#include <math.h> // Usando a função round da biblioteca padrão

int main() {
    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    // A função round da biblioteca math.h já faz isso de forma correta e simples.
    printf("O numero arredondado eh %d\n", (int)round(numero));

    return 0;
}