/*
    Arquivo relacionado às implementações das funções para manipulação de pilha com vetor.
    data: 15-08-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "PilhaVetor.h"

// Implementa cria_pilha().
void cria_pilha(Pilha *p){
    p->ctr = -1;

    printf("Pilha criada com sucesso.\n");
    return;
}
// Implementa push().
void push(Pilha *p, int n){
    // Verifica se a pilha está cheia.
    if(p->ctr == MAX - 1){
        printf("Erro. Pilha cheia.\n");
        return;
    }
    p->ctr++;
    p->vetor[p->ctr] = n;

    printf("Elemento inserido no topo com sucesso.\n");
    return;

}
// Implementa pop().
int pop(Pilha *p){
    // Verifica se a pilha está vazia.
    if(pilha_vazia(p)){
        printf("Erro. Pilha vazia.\n");
        return -1;
    }
    int auxiliar; // auxiliar para guardar elemento do topo da pilha.
    auxiliar = p->vetor[p->ctr];
    p->ctr--;

    return auxiliar;

}
// Implementa top().
int top(Pilha *p){
    // Verifica se a pilha está vazia.
    if(pilha_vazia(p)){
        printf("Erro. Pilha vazia.\n");
        return -1;
    }

    return p->vetor[p->ctr];
}

// Implementa pilha_vazia().
int pilha_vazia(Pilha *p){
    // Faz verificação
    if(p->ctr == -1)
        return 1;

    return 0;
}
// Implementa esvaziar_pilha().
void esvaziar_pilha(Pilha *p){
    p->ctr = -1;

    printf("Pilha esvaziada com sucesso.\n");
    return;
}