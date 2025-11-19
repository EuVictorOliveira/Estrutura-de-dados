#include <stdio.h>

void DesenhaLinha(int n){

    while(n--)
        printf("=");

}

int main(void){
    int qtdSimbolos;

    printf("Digite a qtd de simbolos: ");
    scanf("%d", &qtdSimbolos);

    DesenhaLinha(qtdSimbolos);
    printf("\n");

    return 0;

}