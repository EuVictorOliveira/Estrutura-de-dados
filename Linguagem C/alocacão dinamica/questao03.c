/* Código referente ao exercício 03 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
               dinâmica de memória. Em seguida, leia do usuário seus valores e mostre quantos dos 
               números são pares e quantos são impares.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int Conta_pares(int*, int);
int Conta_impares(int*, int);

int main(void){
    int tamanhoVetor, *p;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    p = (int*) malloc(tamanhoVetor*sizeof(int));
    if(!p){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < tamanhoVetor; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("Qtd de pares: %d\nQtd de impares: %d\n", Conta_pares(p, tamanhoVetor), Conta_impares(p, tamanhoVetor));

    free(p);

    return 0;

}

int Conta_pares(int* vetor, int tamanho){
    int qtdPares = 0;

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 == 0)
            qtdPares++;
    }

    return qtdPares;

}

int Conta_impares(int* vetor, int tamanho){
    int qtdImpares = 0;

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % 2 != 0)
            qtdImpares++;
    }

    return qtdImpares;

}
