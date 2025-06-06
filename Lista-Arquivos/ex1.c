#include <stdio.h>
#include <stdlib.h>

// Função para converter decimal para binário e escrever no arquivo
void dec_para_binario(int n, FILE *arquivo) {
    if (n == 0) {
        fprintf(arquivo, "0\n");
        return;
    }
    
    // Usa um vetor para armazenar os bits do número binário
    int bits[32];
    int i = 0;
    while (n > 0) {
        bits[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Imprime os bits na ordem inversa no arquivo
    for (int j = i - 1; j >= 0; j--) {
        fprintf(arquivo, "%d", bits[j]);
    }
    fprintf(arquivo, "\n");
}

int main() {
    FILE *arquivo;
    int numero;

    // Abre o arquivo no modo de escrita ("w")
    arquivo = fopen("binarios.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    printf("Digite numeros inteiros positivos (um negativo para sair):\n");

    while (1) {
        printf("Numero: ");
        scanf("%d", &numero);

        // Condição de parada
        if (numero < 0) {
            break;
        }

        dec_para_binario(numero, arquivo);
    }

    printf("Resultados salvos em 'binarios.txt'.\n");
    fclose(arquivo); // Fecha o arquivo
    return 0;
}