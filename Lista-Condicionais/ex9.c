#include <stdio.h>

int main() {
    int a, b, soma, produto;
    int idh1, idh2, idm3, idm4;

    printf("Informe as idades dos dois homens:\n");
    scanf("%d%d", &idh1, &idh2);

    printf("Informe as idades das duas mulheres: \n");
    scanf("%d%d", &idm3, &idm4);

    if (idh1 > idh2) {
        a = idh1;
    } else {
        a = idh2;
    }

    if (idm3 < idm4) {
        b = idm3;
    } else {
        b = idm4;
    }

    soma = a + b;
    produto = idh1 * idm4; // OBS: O código original parece ter um erro de lógica aqui, pois multiplica idh1 por idm4. Se o objetivo fosse o produto das idades restantes, seria `(idh1 == a ? idh2 : idh1) * (idm3 == b ? idm4 : idm3)`. Transcrevi como no original.

    printf("A soma sera de %d\n", soma);
    printf("O produto sera de %d", produto);

    return 0;
}