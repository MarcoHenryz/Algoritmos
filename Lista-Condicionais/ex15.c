#include <stdio.h>

int main() {
    int ht, mt, h1, m1, h2, m2;
    float valor;

    printf("Informe a hora e minutagem de chegada: \n");
    scanf("%d%d", &h1, &m1);

    printf("Informe a hora e minutagem de saida: \n");
    scanf("%d%d", &h2, &m2);

    // Calcula a diferença de tempo
    if (h2 >= h1) {
        ht = h2 - h1;
    } else {
        ht = (24 - h1) + h2;
    }

    if (m2 >= m1) {
        mt = m2 - m1;
    } else {
        mt = (60 - m1) + m2;
        ht--; // Decrementa a hora, pois não completou a última hora
    }

    int total_minutos = ht * 60 + mt;
    int horas_cobradas = (total_minutos + 59) / 60; // Arredonda para cima

    if (horas_cobradas == 0 && total_minutos > 0) {
        horas_cobradas = 1;
    }
    
    if (horas_cobradas <= 2) {
        valor = horas_cobradas * 1.0;
    } else if (horas_cobradas > 2 && horas_cobradas <= 4) {
        valor = 2.0 + ((horas_cobradas - 2) * 1.4);
    } else {
        valor = 2.0 + 2 * 1.4 + ((horas_cobradas - 4) * 2.0);
    }

    printf("O valor a ser pago: R$ %.2f", valor);

    return 0;
}