#include <stdio.h>
#include <math.h>
    int main(){

    float raio, pi, valor;
    pi = 3.14;

    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);

    if( raio >= 0 ){
    valor = (pi * pow(raio, 2))/2;
    }else{
    valor = (pi * pow(raio, 2))/2;
    }
    
    printf("O valor da area sera %.2f\n", valor);
    return 0;
}