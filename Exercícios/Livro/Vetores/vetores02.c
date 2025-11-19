/* Exercício 3.2. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 19/07/2025

   Enunciado:  Implemente uma função que receba como parâmetro um vetor de números
               inteiros (vet) de tamanho n e retorne quantos números pares estão armazenados
               nesse vetor. Essa função deve obedecer ao protótipo:


                                int pares (int n, int* vet);


   Autor: João Victor Oliveira.
*/
// CABEÇALHO:
#include <stdio.h>
#include <stdlib.h>

// PROTÓTIPOS:
int pares(int n, int* vet);

// MAIN:
int main(void){
    int n;
    int* v;
    // Lê tamanho do vetor.
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);
    // Aloca vetor e vefirifica pedido.
    v = (int *) malloc(n*sizeof(int));
    if(!v){
        printf("Erro ao alocar memoria.\n");
        return 1;
    } 
    // Lê vetor
    for(int i = 0; i < n; i++){
        printf("Informe elemento %d: ", i+1);
        scanf("%d", &v[i]);
    }
    
    int qtdPares = pares(n, v);

    printf("Qtd pares: %d\n", qtdPares);

    free(v) // Libera memória alocada.
    return 0;
}

// Implementação:
int pares(int n, int* vet){
    int qtdPares = 0;
    
    for(int i = 0; i < n; i++)
        if(vet[i] % 2 == 0)
            qtdPares++;

    return qtdPares;
}