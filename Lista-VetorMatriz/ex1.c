#include <stdio.h>
#include <math.h>

int main() {
    float vetor[10];
    float vetor2[10];

    for (int i = 0; i < 10; i++) {
        printf("Insira um numero: ");
        scanf("%f", &vetor[i]);
        vetor2[i] = pow(vetor[i], 2);
    }

    printf("\nValores originais:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }

    printf("\n\nValores ao quadrado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetor2[i]);
    }
    printf("\n");

    return 0;
}