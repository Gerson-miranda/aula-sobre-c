#include <stdio.h>

int main(){
    int numero;
    printf("digite o numero");

    canf("%d",&numero);

    if (numero%2 == 0){
        printf("O numero é par!");
    }else{
        printf("O numero é impar!");
    }

}