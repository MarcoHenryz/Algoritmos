#include <stdio.h>

// Função que converte horas, minutos e segundos para o total de segundos
int segundos(int hora, int minuto, int segundo) {
    return (hora * 3600) + (minuto * 60) + segundo;
}

int main() {
    int h, m, s;

    printf("Insira o numero de horas, minutos e segundos respectivamente: ");
    scanf("%d%d%d", &h, &m, &s);

    printf("O tempo em segundos eh de: %d\n", segundos(h, m, s));

    return 0;
}