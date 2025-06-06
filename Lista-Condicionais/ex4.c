#include <stdio.h>
int main()
{
    int horas, salario, nivel;

    printf("Insira o numero de horas trabalhadas e o nivel do professor de 1 a 3, respectivamente: ");
    scanf("%d%d", &horas,&nivel);

    if( nivel < 1 || nivel > 3){
        
        printf("O nivel e invalido");

    }else{
        switch (nivel){
        case 1:
            salario = 12 * horas;
            break;
        case 2:
            salario = 17 * horas;
            break;
        case 3:
            salario = 25 * horas;
            break;
        }

    printf("O salario e de %d", salario);
    }

return 0;
}