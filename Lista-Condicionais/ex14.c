#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dataValida = 1; // Flag para controlar a validade

    printf("Informe o dia:\n");
    scanf("%d", &dia);

    printf("Informe o mes: \n");
    scanf("%d", &mes);

    printf("Informe o ano \n");
    scanf("%d", &ano);

    if (mes < 1 || mes > 12 || dia < 1) {
        dataValida = 0;
    } else {
        // Verifica ano bissexto
        int bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

        if (mes == 2) { // Fevereiro
            if (bissexto && dia > 29) {
                dataValida = 0;
            } else if (!bissexto && dia > 28) {
                dataValida = 0;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { // Meses com 30 dias
            if (dia > 30) {
                dataValida = 0;
            }
        } else { // Meses com 31 dias
            if (dia > 31) {
                dataValida = 0;
            }
        }
    }

    if (dataValida) {
        printf("A data eh valida: %d/%d/%d", dia, mes, ano);
    } else {
        printf("Data invalida");
    }

    return 0;
}