/* Código referente ao exercício 02 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
               dinamica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanhoVetor, *p;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    p = (int*) malloc(tamanhoVetor*sizeof(int));
    if(p == 0){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("Numero lidos: ");
    for(int i = 0; i < tamanhoVetor; i++){
        printf("%d ", p[i]);
    }

    printf("\n");

    free(p);


    return 0;
}