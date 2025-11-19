#include <stdio.h>

int main(void){
    int vetor[10], impares = 0;


    for(int i = 0; i < 10; i++){

         printf("Informe o valor %d: ", i+1);
         scanf("%d", &vetor[i]);

         if(vetor[i] % 2 != 0 )
            impares++;

    }

    int vetorImpares[10];

    int preenchido = 0;
    for(int i = 0; i < 10; i++){

         if(vetor[i] % 2 != 0){
            vetorImpares[preenchido] = vetor[i];
            preenchido++;
        }

    }

    for(int i = 0; i < 10; i = i + 2){

        printf("%d %d\n", vetor[i], vetor[i+1]);

    }

    printf("\n\n");

    for(int i = 0; i < impares; i = i + 2){

        printf("%d %d\n", vetorImpares[i], vetorImpares[i+1]);

    }

    return 0;

}