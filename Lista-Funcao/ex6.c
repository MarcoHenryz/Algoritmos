#include <stdio.h>

// Função fatorial recursiva
double fatorial(int x) {
    if (x == 0) {
        return 1;
    } else {
        return x * fatorial(x - 1);
    }
}

// Função que calcula o número de Euler (e)
double neperiano(int n) {
    double e = 0.0;
    for (int i = 0; i <= n; i++) {
        e += 1.0 / fatorial(i);
    }
    return e;
}

int main() {
    int numero;
    printf("Insira um numero de termos para a serie: ");
    scanf("%d", &numero);

    printf("O numero neperiano com %d termos eh %lf\n", numero, neperiano(numero));
    return 0;
}