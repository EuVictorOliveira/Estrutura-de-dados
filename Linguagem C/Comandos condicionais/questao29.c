#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
    int a, b, soma, qtdAcertos = 0;


    for(int i = 0; i < 5; i++){
        
        a = rand() % 100;
        b = rand() % 100;

        printf("Qual eh valor da soma de %d + %d: ", a, b);
        scanf("%d", &soma);

        if( soma == a+b ){
            printf("Voce acertou\n");
            qtdAcertos++;
        }else
            printf("Voce errou\n");

    
    }

    printf("Quantidade de acertos: %d\n", qtdAcertos);

    return 0;

}