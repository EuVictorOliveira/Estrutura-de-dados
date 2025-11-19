#include <stdio.h>

int main(void){
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){

        if(vetor[i] < 0)
            vetor[i] = 0;

    }

     for(int i = 0; i < 10; i++){
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    
    }





    return 0;
}