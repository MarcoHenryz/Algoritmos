#include <stdio.h>
#include <math.h>

int main() {
    float salario, emprestimo;

    printf("Insira o valor do seu salario: \n");
    scanf("%f", &salario);

    printf("Insira o valor do emprestimo desejado: \n");
    scanf("%f", &emprestimo);

    if (emprestimo > 0.2 * salario) {
        printf("Emprestimo nao concedido");
    } else {
        printf("Emprestimo concedido");
    }
    return 0;
}