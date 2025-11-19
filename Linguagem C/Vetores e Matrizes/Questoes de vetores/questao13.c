#include <stdio.h>

int main(void){
    int numeros[5], maior, menor, posicaoMaior, posicaoMenor;;

    for( int i = 0; i < 5; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &numeros[i]);

        if( i == 0 ){
            menor = maior = numeros[i];
            posicaoMaior = posicaoMenor = 0;
        }
        else{

            if(numeros[i] > maior){
                posicaoMaior = i;
            }

            if(numeros[i] < menor){
                posicaoMenor = i;
            }

        }

    }

    printf("Posicao maior elemento: %d\n", ++posicaoMaior);
    printf("Posicao menor elemento: %d\n", ++posicaoMenor);



    return 0;
}