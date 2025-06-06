#include <stdio.h>
#include <math.h>

int main (){
    int numero;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if( numero % 3 == 0 && numero % 5 != 0){
    printf("O numero e divisivel por 3");
    }if(numero % 3 != 0 && numero % 5 == 0){
    printf("O valor e divisivel por 5");
    }

    return 0;
}