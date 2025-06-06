#include <stdio.h>

struct Horas {
    int h, m;
};

// Função que calcula a diferença de tempo em minutos
int minutos(struct Horas inicio, struct Horas final) {
    int minutos_inicio = inicio.h * 60 + inicio.m;
    int minutos_final = final.h * 60 + final.m;

    if (minutos_final >= minutos_inicio) {
        return minutos_final - minutos_inicio;
    } else { // O jogo passou da meia-noite
        return (24 * 60 - minutos_inicio) + minutos_final;
    }
}

int main() {
    struct Horas ini, fim;

    printf("Insira primeiro a hora e depois a minutagem de inicio do jogo: ");
    scanf("%d%d", &ini.h, &ini.m);

    printf("Insira primeiro a hora e depois a minutagem do fim do jogo: ");
    scanf("%d%d", &fim.h, &fim.m);

    printf("O numero de minutos total da duracao da partida eh de: %d\n", minutos(ini, fim));

    return 0;
}