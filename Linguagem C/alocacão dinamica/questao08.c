/* Código referente ao exercício 08 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faca um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, 
               usando a funcao de alocacao dinamica de memoria CALLOC: 

                  (a) Faca um loop e verifique se o vetor contem realmente os 1500 valores inicializados 
                      com zero (conte os 1500 zeros do vetor).
                  (b) Atribua para cada elemento do vetor o valor do seu ındice junto a este vetor.
                  (c) Exibir na tela os 10 primeiros e os 10 ultimos elementos do vetor.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int qtdZeros = 0; 

    // Alocar vetor dinâmicamente e faz verificação.
    int *vetor = (int*) calloc(1500, sizeof(int));
    if(!vetor){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < 1500; i++){
        if(vetor[i] != 0)
            printf("Ha valor diferente de zero.\n");
        else
            qtdZeros++;

        vetor[i] = i;
    }

    printf("Qtd de zeros: %d\n", qtdZeros);
    
    printf("10 primeiros elementos: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    printf("10 ultimos elementos: ");
    for(int i = 1490; i < 1500; i++){
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;

}