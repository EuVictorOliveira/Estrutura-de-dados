#include <stdio.h>

int main(void){
    int vetor[10]; 


    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

    }

    for(int i = 0; i < 10; i++){
        int ehPrimo = 1;

        for(int j = 2; j < i; j++){

            if(vetor[i] % j == 0)
                ehPrimo = 0;
       
        }

        if(ehPrimo && vetor[i] != 1)
            printf("%d eh primo, posicao: %d\n", vetor[i], i+1);
        
    }

    return 0;

}