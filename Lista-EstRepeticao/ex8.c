#include <stdio.h>

int main() {
    int x, maior, quantidade;
    int cont = 0; // 

    printf("Informe a quantidade de numeros a serem lidos: ");
    scanf("%d", &quantidade); // 

    if (quantidade > 0) {
        printf("Informe um numero: ");
        scanf("%d", &x); // 
        maior = x; // 
        cont = 1;

        for (int i = 2; i <= quantidade; i++) { // 
            printf("Informe um numero: ");
            scanf("%d", &x); // 

            if (x > maior) {
                maior = x; // 
                cont = 1; // 
            } else if (x == maior) {
                cont++; // 
            }
        }
        printf("O maior numero eh %d e ele apareceu %d vez(es)\n", maior, cont); // 
    }
    return 0;
}