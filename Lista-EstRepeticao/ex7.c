#include <stdio.h>

int main() {
    int n;
    int cont = 1; // 

    printf("Insira um valor: ");
    scanf("%d", &n); // 

    for (int i = 1; i <= n; i++) { // Loop das linhas
        for (int j = 1; j <= i; j++) { // Loop das colunas (números por linha)
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }
    return 0; // 
}