#include <stdio.h>

int main(void){
    int n, soma = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);


    for( int i = 1; i <= n; i++ ){
        soma += i;
    }


    printf("Soma dos primeiros %d termos naturais: %d\n", n, soma);                        







    return 0;

}