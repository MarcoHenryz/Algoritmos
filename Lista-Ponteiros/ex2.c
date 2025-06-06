#include <stdio.h>

int main() {
    int num3, num4;
    int *p1, *p2;

    printf("Insira um numero inteiro: ");
    scanf("%d", &num3);

    printf("Insira outro numero inteiro: ");
    scanf("%d", &num4);

    p1 = &num3;
    p2 = &num4;

    printf("\nEndereco de p1: %p\n", (void*)p1);
    printf("Endereco de p2: %p\n", (void*)p2);

    if (p1 > p2) {
        printf("O maior endereco eh de p1, com o conteudo: %d\n", *p1);
    } else {
        printf("O maior endereco eh de p2, com o conteudo: %d\n", *p2);
    }

    return 0;
}