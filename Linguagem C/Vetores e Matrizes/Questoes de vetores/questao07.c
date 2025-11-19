#include <stdio.h>

int main(void){
    int numeros[10], maior, posicao;

    for( int i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &numeros[i]);

        if( i == 0 )
            maior = numeros[i];
        else{

            if(numeros[i] > maior){
                posicao = i;
                maior = numeros[i];
            }

        }
    }

    printf("----LISTA DE ELEMENTOS----\n");
    for(int i = 0; i < 10; i++)
        printf("A[%d] = %d\n", i, numeros[i]);

    printf("Maior elemento: %d\n", maior);
    printf("Posicao: %d\n", ++posicao);



    return 0;

}