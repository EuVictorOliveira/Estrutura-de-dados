#include <stdio.h>


int main(void){
    int n, nVerificado = 2;
    int qtdPrimos = 0, somaPrimos = 0;
    

    printf("Informe um inteiro nao negativo: ");
    scanf("%d", &n);


    while(qtdPrimos < n){
        int ehPrimo = 1;

        for(int i = 2; i < nVerificado; i++){
            if( nVerificado % i == 0){
                ehPrimo = 0;
                break;
            }
        }

        if(ehPrimo){
            somaPrimos += nVerificado;
            qtdPrimos++;
        }
        nVerificado++;
    }


    printf("As soma dos %d primeiros primos eh: %d\n", n, somaPrimos);

    return 0;

}