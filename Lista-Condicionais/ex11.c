#include <stdio.h>

int main() {
    int matricula;
    float n1, n2, n3, media, mediageral;

    printf("Informe o numero de matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Informe a nota da primeira avaliacao: ");
    scanf("%f", &n1);

    printf("Informe a nota da segunda avaliacao: ");
    scanf("%f", &n2);

    printf("Informe a nota da terceira avalicao: ");
    scanf("%f", &n3);

    printf("Informe a media obtida nos exercicios: ");
    scanf("%f", &media);

    mediageral = (n1 + n2 + n3 + media) / 4;

    if (mediageral >= 9) {
        printf("Conceito: A\n");
    } else if (mediageral >= 7.5 && mediageral < 9.0) {
        printf("Conceito: B\n");
    } else if (mediageral >= 6.0 && mediageral < 7.5) {
        printf("Conceito: C\n");
    } else if (mediageral >= 4.0 && mediageral < 6.0) {
        printf("Conceito: D\n");
    } else if (mediageral < 4.0) {
        printf("Conceito: E\n");
    }

    printf("Numero de matricula: %d\n", matricula);
    printf("Nota 1: %.1f, Nota 2: %.1f, Nota 3: %.1f, Media dos exercicios: %.1f\n", n1, n2, n3, media);
    printf("Media geral: %.1f\n", mediageral);

    if (mediageral >= 6.0) {
        printf("Aprovado!!!");
    } else {
        printf("Reprovado!!!");
    }

    return 0;
}