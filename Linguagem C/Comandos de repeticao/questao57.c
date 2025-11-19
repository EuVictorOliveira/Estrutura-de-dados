#include <stdio.h>


int main(void){
    int a, b;
    int nVerificado;
    int qtdPrimos = 0; 

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    nVerificado = a+1;

    while(nVerificado < b){
        int ehPrimo = 1;

        for(int i = 2; i < nVerificado; i++){
            if( nVerificado % i == 0){
                ehPrimo = 0;
                break;
            }
        }

        if(ehPrimo){
            qtdPrimos++;
        }
        nVerificado++;
    }


    printf("A quantidade de primos entre %d e %d eh: %d\n", a, b, qtdPrimos);

    return 0;

}
