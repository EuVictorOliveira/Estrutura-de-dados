#include <stdio.h>

int main(void){
    int n, maior, menor, i = 0;


    while(1){

        printf("Informe um numero inteiro: ");
        scanf("%d", &n);


        if(i != 0){

            if(n == 0)
                break;
            
            if(n > maior)
                maior = n;

            if(n < menor)
                menor = n;

            continue;
        }

        if( i == 0 ){
            maior = menor = n;
            if(n == 0)
                break;

            i++;
        }
    }

        printf("MAIOR: %d\nMENOR: %d\n", maior, menor);

    return 0;
}