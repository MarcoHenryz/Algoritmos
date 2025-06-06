#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Necessário para srand

int main() {
    int num1, num2;

    srand(time(NULL)); // 
    num1 = rand() % 100 + 1; //  

    do {
        printf("Tente acertar um numero aleatorio de 1 a 100: ");
        scanf("%d", &num2); // 

        if (num2 < num1) {
            printf("Mais alto!\n"); // 
        } else if (num2 > num1) {
            printf("Mais baixo!\n"); // 
        } else {
            printf("Voce acertou!\n"); // 
        }
    } while (num1 != num2); // 

    return 0; // 
}