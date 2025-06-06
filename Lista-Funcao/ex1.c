#include <stdio.h>
#include <math.h>
 
float pi = 3.14;
// Função para calcular o volume de um cilindro
float volume(float r, float h) {
    return pi * pow(r, 2) * h; 
}

int main() {
    float raio, altura;

    printf("Insira o valor do raio do cilindro: ");
    scanf("%f", &raio);

    printf("Insira o valor da altura: ");
    scanf("%f", &altura);

    printf("O volume do cilindro eh de: %f\n", volume(raio, altura));

    return 0;
}