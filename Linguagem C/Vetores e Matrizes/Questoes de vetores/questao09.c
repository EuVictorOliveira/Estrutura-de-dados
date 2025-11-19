#include <stdio.h>

int main(void){
     int pares[6], qtdPares = 0, n, i = 0;

    while(qtdPares < 6){

        printf("Informe um numero: ");
        scanf("%d", &n);

        if( n % 2 == 0){
            pares[i] = n;
            qtdPares++;
            i++;
        }

    }

    printf("----LISTA EM ORDEM INVERSA----\n");
     for(int j = 5; j >= 0; j--){
        printf("%d\n", pares[j]);
     }

    return 0;

}