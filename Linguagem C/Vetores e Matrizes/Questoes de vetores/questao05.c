#include <stdio.h>

int main(void){
    int numeros[10], qtdPares = 0;

    for( int i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0){
            qtdPares++;
        }
    }

    printf("O valor possui %d valores pares\n", qtdPares);


    return 0;

}