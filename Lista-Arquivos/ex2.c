#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char nome_produto[50];
    int quantidade;
    float valor_unitario, total_compra = 0.0;

    // Abre o arquivo no modo de leitura ("r")
    arquivo = fopen("compras.txt", "r");
    if (arquivo == NULL) {
        printf("Erro: Nao foi possivel encontrar o arquivo 'compras.txt'!\n");
        printf("Crie o arquivo no formato: Nome Quantidade Valor\n");
        return 1;
    }

    // Lê o arquivo linha por linha até o final (EOF - End Of File)
    while (fscanf(arquivo, "%s %d %f", nome_produto, &quantidade, &valor_unitario) != EOF) {
        printf("Lido: %s, Quantidade: %d, Valor: R$%.2f\n", nome_produto, quantidade, valor_unitario);
        total_compra += quantidade * valor_unitario;
    }

    printf("\nO valor total da compra eh: R$%.2f\n", total_compra);

    fclose(arquivo);
    return 0;
}