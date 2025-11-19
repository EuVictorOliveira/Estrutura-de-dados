/* Exercício 3.3. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 19/07/2025

   Enunciado:   Implemente uma função que receba como parâmetro um vetor de números
                inteiros (vet) de tamanho n e invertaaordem dos elementos armazenados nesse
                vetor. Essa função deve obedecer ao protótipo:


                                    void inverte (int n, int* vet);


   Autor: João Victor Oliveira.
*/
// CABEÇALHO:
#include <stdio.h>
#include <stdlib.h>

// PROTÓTIPOS: 
void inverte(int n, int *vet);

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

    inverte(n, v);

    printf("Vetor: ");
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }

    free(v); // Libera memória alocada.

    return 0;

}

// Implementação:
void inverte(int n, int *vet){
    int copia[n]; // Cria vetor cópia.
    int tamanho = n, i;

    n--; // Decremento necessario. Do contrário acessamos um espaço de memória que não é nosso. vet[10]
    for(i = 0; i < tamanho; i++, n--){
        copia[i] = vet[n];
    }

    for(i = 0; i < tamanho; i++){
        vet[i] = copia[i];
    }

}