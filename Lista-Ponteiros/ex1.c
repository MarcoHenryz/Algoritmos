#include <stdio.h>

int main() {
    int num2;
    float num4;
    char c1;

    int *num1;
    float *num3;
    char *c;

    // Leitura dos valores iniciais
    printf("Insira um numero inteiro: ");
    scanf("%d", &num2);

    printf("Insira um numero real: ");
    scanf("%f", &num4);

    printf("Insira um caractere: ");
    scanf(" %c", &c1); // Espaço antes de %c para consumir o newline

    // Associa as variáveis aos ponteiros
    num1 = &num2;
    num3 = &num4;
    c = &c1;

    printf("\n--- Valores ANTES da modificacao ---\n");
    printf("Variavel inteira: %d\n", num2);
    printf("Variavel real: %.2f\n", num4);
    printf("Variavel char: %c\n", c1);

    // Modifica os valores usando os ponteiros
    *num1 = *num1 + 10;
    *num3 = *num3 * 2;
    *c = 'Z';

    printf("\n--- Valores DEPOIS da modificacao ---\n");
    printf("Variavel inteira: %d\n", num2);
    printf("Variavel real: %.2f\n", num4);
    printf("Variavel char: %c\n", c1);

    return 0;
}