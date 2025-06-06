#include <stdio.h>

int main() {
    int matriz[4][3][3];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                matriz[i][j][k] = i + j + k;
            }
        }
    }

    printf("Matriz tridimensional gerada (4x3x3):\n");
    for (int i = 0; i < 4; i++) {
        printf("\nCamada %d:\n", i);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d\t", matriz[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}