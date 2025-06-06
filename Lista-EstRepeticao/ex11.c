#include <stdio.h>
#include <math.h>

int main() {
    float media = 0, soma = 0, desvio = 0, soma_desvio = 0;
    int n;

    printf("Informe a quantidade de numeros: \n");
    scanf("%d", &n); // 

    if (n <= 0) return 1; 

    float vetor[n];

    // Leitura dos números e cálculo da soma
    for (int i = 0; i < n; i++) {
        printf("Informe um numero: ");
        scanf("%f", &vetor[i]); // 
        soma += vetor[i]; // 
    }

    // Cálculo da média
    media = soma / n; // 
    printf("A media dos numeros eh: %.2f\n", media); // 

    // Cálculo do somatório para o desvio padrão
    for (int i = 0; i < n; i++) {
        soma_desvio += pow(vetor[i] - media, 2);
    }

    // Cálculo final do desvio padrão
    desvio = sqrt(soma_desvio / n); // 
    printf("O desvio padrao do conjunto eh: %.2f\n", desvio); // 

    return 0;
}