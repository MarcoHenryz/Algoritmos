#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
} Atleta;

int main() {
    Atleta atletas[5];
    FILE *arquivo;
    int indice_mais_velho = 0;
    int indice_mais_alto = 0;

    // Abre o arquivo em modo de leitura binária ("rb")
    arquivo = fopen("atletas.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro: Arquivo 'atletas.bin' nao encontrado.\n");
        return 1;
    }

    // Lê os dados do arquivo para o array de atletas
    fread(atletas, sizeof(Atleta), 5, arquivo);
    fclose(arquivo);

    // Encontra o atleta mais alto e o mais velho
    for (int i = 1; i < 5; i++) {
        if (atletas[i].altura > atletas[indice_mais_alto].altura) {
            indice_mais_alto = i;
        }
        if (atletas[i].idade > atletas[indice_mais_velho].idade) {
            indice_mais_velho = i;
        }
    }

    printf("\n--- Destaques ---\n");
    printf("Atleta mais alto: %s (%.2f m)\n", atletas[indice_mais_alto].nome, atletas[indice_mais_alto].altura);
    printf("Atleta mais velho: %s (%d anos)\n", atletas[indice_mais_velho].nome, atletas[indice_mais_velho].idade);

    return 0;
}