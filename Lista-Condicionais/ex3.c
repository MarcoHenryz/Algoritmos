#include <stdio.h>

int main(){
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero <= 0 || numero > 7){
        printf("O numero e invalido");
    }else{
        switch(numero){
            case 1:
                printf("Segunda-feira");
                break;
            case 2:
                printf("Terça-feira");
                break;
            case 3:
                printf("Quarta-feira");
                break;
            case 4:
                printf("Quinta-feira");
                break;
            case 5:
                printf("Sexta-feira");
                break;
            case 6:
                printf("Sabado");
                break;
            case 7:
                printf("Domingo");
                break;
    }
}
return 0;
}