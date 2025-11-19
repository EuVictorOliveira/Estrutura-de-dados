#include <stdio.h>

int main(void){
    int vetor[10], pares[10], impares[10];
    int qtdPares = 0, qtdImpares = 0;

    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0){
            pares[qtdPares] = vetor[i];
            qtdPares++;
        }else{
            impares[qtdImpares] = vetor[i];
            qtdImpares++;
        }

    }

    printf("Vetor de elementos pares:\n\n");
    for(int i = 0; i < qtdPares; i++){
        printf("%d\n", pares[i]);
    }

    printf("\nVetor de elementos impares:\n\n");
    for(int i = 0; i < qtdImpares; i++){
        printf("%d\n", impares[i]);
    }

    return 0;
}