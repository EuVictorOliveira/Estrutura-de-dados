#include <stdio.h>

int main(void){
    int n, i,j, qtdMultiplos = 0, k = 0;


    printf("Informe a qtd de numeros da sequencia: ");
    scanf("%d", &n);

    printf("Informe i: ");
    scanf("%d", &i);

    printf("Informe j: ");
    scanf("%d", &j);


    while(qtdMultiplos < n){

        if( k % i == 0 || k % j == 0){
            printf("%d,", k);
            qtdMultiplos++;
        }

        k++;
    }

    

    return 0;

}