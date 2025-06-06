#include <stdio.h>

int main() {
    float matriz[3][3];
    float *p;

    // O ponteiro 'p' aponta para o início da matriz
    p = &matriz[0][0];

    printf("--- Enderecos da Matriz 3x3 ---\n");
    for (int i = 0; i < 9; i++) {
        // Imprime o endereço de cada posição usando aritmética de ponteiros
        printf("Endereco do elemento %d: %p\n", i, (void*)(p + i));
    }

    return 0;
}