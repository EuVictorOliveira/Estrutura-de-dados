/* Exercício 3.1. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 19/07/2025

   Enunciado: Implemente uma função que receba como parâmetro um vetor de números
              reais (vet) de tamanho n e retorne quantos números negativos estão armazenados
              nesse vetor. Essa função deve obedecer ao protótipo:

                              int negativos (int n, float* vet);

   Autor: João Victor Oliveira.
*/
// CABEÇALHO:
#include <stdio.h>
#include <stdlib.h>

//PROTÓTIPOS:
int negativos(int n, float* vet);

// MAIN:
int main(void){
    int n;
    float* vetor;

    // Lê tamanho do vetor.
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    // Aloca vetor dinâmico e verifica pedido.
    vetor = (float *) malloc(n*sizeof(float));
    if(!vetor){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    // Leitura dos elementos.
    for(int i = 0; i < n; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    // Chamada da função
    int qtdNegativos = negativos(n, vetor);
    // Printa quantidade de negativos.
    printf("Qtd de negativos: %d\n", qtdNegativos);


    free(v) // Libera memória alocada.

    return 0;
}

int negativos(int n, float* vet){
    int qtdNegativos = 0;

    for(int i = 0; i < n; i++)
        if(vet[i] < 0)
            qtdNegativos++;

    return qtdNegativos;
}
