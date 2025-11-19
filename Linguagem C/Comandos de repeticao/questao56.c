#include <stdio.h>


int main(void){
    int nVerificado = 2;
    int somaPrimos = 0;

    while(nVerificado < 2000000){
        int ehPrimo = 1;

        for(int i = 2; i < nVerificado; i++){
            if( nVerificado % i == 0){
                ehPrimo = 0;
                break;
            }
        }

        if(ehPrimo){
            somaPrimos += nVerificado;
        }
        nVerificado++;
    }


    printf("As soma dos primos eh: %d\n", somaPrimos);

    return 0;

}
