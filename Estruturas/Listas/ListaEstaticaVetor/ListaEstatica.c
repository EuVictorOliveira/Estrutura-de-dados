/*
    Arquivo referente à implementação das funções de manipulação
    de listas estáticas com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025

 */
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaEstatica.h"

// IMPLETAÇÕES DAS FUNÇÕES

// Implementa função para criação de lista. O controle deve ser iniciado com -1.
void cria_lista(Lista *l){
    l->ctr = -1;
    printf("Lista criada com sucesso.\n");
    return;
}

// Implementa função para inserção de elemento no início da lista.
void insere_inicio(Lista *l, int n){
    // Verifica se a lista está cheia.
    if(lista_cheia(l)){
        printf("Erro. A lista esta cheia.\n");
        return;
    }
    // Desloca os elementos para direita.
    for(int i = l->ctr; i >= 0; i--)
        l->vetor[i+1] = l->vetor[i];
    l->vetor[0] = n; // insere novo elemento passado como parâmetro.
    l->ctr++; // incrementa controle

    printf("Elemento inserido com sucesso.\n");
    return;

}

// Implementa função para inserção de elemento no meio da lista.
void insere_meio(Lista *l, int posicao, int n){
    // Verifica se a lista está cheia.
    if(lista_cheia(l)){
        printf("Erro. A lista esta cheia.\n");
        return;
    }
    // Desloca os elementos para a direita a partir da posição.
    for(int i = l->ctr; i >= posicao; i--)
        l->vetor[i+1] = l->vetor[i];
    l->vetor[posicao] = n; // insere novo elemento passado como parãmetro.
    l->ctr++; // incrementa controle.

    printf("Elemento inserido com sucesso.\n");
    return;

}

// Implementa função para inserção de elemento no fim da lista.
void insere_final(Lista *l, int n){
    // Verifica se a lista está cheia.
    if(lista_cheia(l)){
        printf("Erro. Lista cheia.\n");
        return;
    }
    l->ctr++; // incrementa controle.
    l->vetor[l->ctr] = n; // insere novo elemento no final.

    printf("Elemento inserido com sucesso.\n");
    return;
}

// Implementa função para limpar a lista.
void limpar_lista(Lista *l){

    if(lista_vazia(l)){
        printf("Erro. Lista vazia.\n");
        return;
    }

    l->ctr = -1; // Atribui -1 à lista. O que significa que a lista está vazia.
    printf("Lista esvaziada com sucesso.\n");
    return;

}

// Implementa função para verificar se a lista está cheia.
int lista_cheia(Lista *l){
    // Verifica se o controle é igual a 9. Isso indica lista cheia
    if(l->ctr == 9)
        return 1;

    return 0;

}

// Implementa função para verificar se a lista está vazia.
int lista_vazia(Lista *l){
    // Verifica se o controle é igual a -1. Isso indica lista vazia.
    if(l->ctr == -1)
        return 1;

    return 0;

}

// Implementa função para exibir a lista
void exibir_lista(Lista l){
    // Percorre a lista exibindo seus elementos.
    printf("Lista: ");
    for(int i = 0; i <= l.ctr; i++)
        printf("%d ", l.vetor[i]);

    printf("\n");
    return;

}

// Implementa função para remover elemento do inicio;
void remove_inicio(Lista *l){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista vazia.\n");
        return;
    }
    // Desloca todos os elementos para a esquerda, removendo o primeiro.
    for(int i = 0; i < l->ctr; i++)
        l->vetor[i] = l->vetor[i+1];
    l->ctr--; // decremento controle.

    printf("Elemento removido com sucesso.\n");
    return;
    
}

// Implementa função para remover elemento do meio da lista.
void remove_meio(Lista *l, int posicao){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista vazia.\n");
        return;
    }
    // Desloca todos os elementos para a esquerda a partir da posicao, removendo o elemento que estava na posição.
    for(int i = posicao; i < l->ctr; i++)
        l->vetor[i] = l->vetor[i+1];
    l->ctr--; // decrementa controle.

    printf("Elemento removido com sucesso.\n");
    return;

}

// Implementa função para remover elemento do final da lista.
void remove_final(Lista *l){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista vazia.\n");
        return;
    }
    l->ctr--; // Decrementa vetor.

    printf("Elemento inserido com sucesso.\n");
    return;

}