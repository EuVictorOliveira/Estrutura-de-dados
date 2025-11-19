#include <stdio.h>

int DobraValor(int n){

    return n * 2;


}

int main(void){
    int n;


    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Dobro: %d\n", DobraValor(n));


    return 0;
    
}