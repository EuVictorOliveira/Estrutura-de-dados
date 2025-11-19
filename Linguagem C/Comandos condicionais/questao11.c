#include <stdio.h>

int main(){
    int n, soma = 0;


    printf("Informe um numero inteiro: ");
    scanf("%d", &n);


    if( n >= 0){
        int aux = n;

        while( aux > 0){
            soma += aux % 10;
            aux /= 10;

        }

        printf("A soma dos digitos de %d eh: %d", n, soma);

    }else
        printf("Numero menor que 0, operacao invalida\n");






    return 0;

}