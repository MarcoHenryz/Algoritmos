#include <stdio.h>
#include <stdlib.h>

void inserirDado(char *m, int posicao, int tam) {
    char dado;
    if (posicao >= 0 && posicao < tam) {
        printf("Digite o dado (char) a ser inserido na posicao %d: ", posicao);
        scanf(" %c", &dado); // Espaço para consumir o newline
        m[posicao] = dado;
        printf("Dado '%c' inserido com sucesso.\n", dado);
    } else {
        printf("Posicao invalida!\n");
    }
}

void consultarDado(char *m, int posicao, int tam) {
    if (posicao >= 0 && posicao < tam) {
        // Verifica se a posição foi inicializada (pode conter lixo de memória)
        if (m[posicao] >= 32 && m[posicao] <= 126) { // Caracteres imprimíveis
             printf("Dado na posicao %d: %c\n", posicao, m[posicao]);
        } else {
             printf("Dado na posicao %d (nao imprimivel): valor decimal %d\n", posicao, m[posicao]);
        }
    } else {
        printf("Posicao invalida!\n");
    }
}

int main() {
    int tam, opcao, posicao;
    printf("Digite o tamanho da memoria em bytes: ");
    scanf("%d", &tam);

    char *m = (char*) malloc(tam * sizeof(char));
    if (m == NULL) {
        printf("Memoria Insuficiente!\n");
        exit(1);
    }

    do {
        printf("\n--- Simulador de Memoria ---\n");
        printf("1 - Inserir dado\n2 - Consultar dado\n3 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posicao para inserir o dado (0 a %d): ", tam - 1);
                scanf("%d", &posicao);
                inserirDado(m, posicao, tam);
                break;
            case 2:
                printf("Digite a posicao a ser consultada (0 a %d): ", tam - 1);
                scanf("%d", &posicao);
                consultarDado(m, posicao, tam);
                break;
            case 3:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 3);

    free(m);
    return 0;
}