#include <stdio.h>

int main(void){
    double reais[10], reaisAoQuadrado[10];
    int i;


    for( i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%lf", &reais[i]);

        reaisAoQuadrado[i] = reais[i] * reais[i];
    }

    printf("----LISTA DOS REAIS LIDOS----\n\n");
    for( i = 0; i < 10; i++){
        printf("A[%d]: %.2lf\n", i, reais[i]);
    }

    printf("----LISTA DOS REAIS LIDOS AO QUADRADO----\n\n");
    for( i = 0; i < 10; i++){
        printf("A[%d]: %.2lf\n", i, reaisAoQuadrado[i]);
    }


    return 0;

}