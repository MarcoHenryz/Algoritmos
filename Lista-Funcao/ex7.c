#include <stdio.h>
#include <math.h>

float pi = 3.14;
// Função fatorial
double fatorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

// Função cosseno usando a série de Taylor
double cosseno(float x) {
    double result = 0;
    double radiano = (x * pi) / 180.0; // Converter graus para radianos

    // Série de Taylor para cosseno com 10 termos para boa precisão
    for (int i = 0; i <= 10; i++) {
        result += (pow(-1, i) / fatorial(2 * i)) * (pow(radiano, 2 * i));
    }
    return result;
}

int main() {
    float angulo;
    printf("Insira o valor do angulo em graus: ");
    scanf("%f", &angulo);

    printf("O valor do cosseno do angulo eh de: %f\n", cosseno(angulo));
    return 0;
}