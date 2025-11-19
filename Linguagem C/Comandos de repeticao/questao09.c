#include <stdio.h>

int main(void){
    int N, i = 1, qtdImpares = 0;

    printf("Informe um valor inteiro: ");
    scanf("%d", &N);

    while(qtdImpares < N){
      
        if( i % 2 != 0 ){
            printf("%d\n", i);
            qtdImpares++;
        }

        i++;

    }






    return 0;

}