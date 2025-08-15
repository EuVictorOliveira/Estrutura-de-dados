/*
    Arquivo relacionado às implementações das funções para manipulação de pilha dinâmica implementada com lista 
    encadeada simples.
    data: 15-08-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "PilhaDinamica.h"

// Implementa cria_pilha()
void cria_pilha(No **topo){
    // Seta o ínicio da pilha como sendo NULL, o que indica pilha criada e vazia.
    *topo = NULL;

    printf("Pilha criada com sucesso.\n");
    return;

}
// Implementa push().
void push(No **topo, int n){
    No *novo; // variável que representa o novo nó

    novo = (No*) malloc(sizeof(No));// aloca novo nó dinamicamente
    // Verifica alocação:
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Construção do novo nó e inserção na pilha:
    novo->info = n;
    novo->proximo = *topo;
    *topo = novo;

    printf("Elemento inserido no topo com sucesso.\n");
    return;

}
// Implementa pop()
int pop(No **topo){
    // Verifica se a pilha está vazia
    if(pilha_vazia(topo)){
        printf("Erro. Pilha vazia.\n");
        return -1;
    }
    No *sai; // representa variável que será retirada.
    sai = *topo; // sai agora aponta para onde o topo aponta.
    *topo = sai->proximo; // topo passa a apontar para o próximo elemento da pilha.
    
    int auxiliar; // representa variável auxiliar que será retornada ao fim da função.
    auxiliar = sai->info; // auxiliar agora guarda o nó que será desempilhada.

    free(sai); // libera memória de sai.
    printf("Elemento desempilhado com sucesso.\n");

    return auxiliar;

}
// Implementa top().
int top(No **topo){
    // Verifica se a pilha está vazia.
    if(pilha_vazia(topo)){
        printf("Erro, Pilha vazia.\n");
        return -1;
    }
    
    return (*topo)->info;
}
// Implementa pilha_vazia().
int pilha_vazia(No **topo){
    // Faz verificação:
    if(*topo == NULL)
        return 1;

    return 0;

}
// Implementa esvaziar_pilha().
void esvaziar_pilha(No **topo){
    // Verifica se a pilha está vazia.
    if(pilha_vazia(topo)){
        printf("Erro. Pilha vazia.\n");
        return;
    }
    No *auxiliar; // representa nó auxiliar que será removida a cada iteração.
    while(*topo){
        auxiliar = *topo;
        *topo = auxiliar->proximo;

        free(auxiliar);
    }
    // Seta NULL no topo, indicando pilha vazia.
    *topo = NULL;
    printf("Pilha esvaziada com sucesso.\n");
    return;
}