/*
    Arquivo referente à implementação das funções de manipulação
    de listas circulares com vetor.

    Autor: João Victor Oliveira.
    Data: 16-08-2025

 */
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularVetor.h"

// IMPLEMENTAÇÕES:

// Implementa cria_lista().
void cria_lista(ListaCircular *l){
    // Seta início e fim como sendo -1.
    l->inicio = -1;
    l->fim = -1;

    printf("Lista criada com sucesso.\n");
}
// Implementa inserir_inicio().
void inserir_inicio(ListaCircular *l, int n){
    // Verifica se a lista está cheia.
    if(lista_cheia(l)){
        printf("Lista cheia. Nao eh possivel inserir.\n");
        return;
    }
    // Caso lista vazia
    if(lista_vazia(l)){
        /// Incrementa inicio e fim, 0 nos dois indica lista unitária
        l->inicio = 0;
        l->fim = 0;

        l->vetor[l->inicio] = n; // atribui o valor
        printf("Elemento inserido com sucesso.\n");
        return;
    }
    l->inicio = (l->inicio - 1 + MAX) % MAX;
    l->vetor[l->inicio] = n;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_fim()
void inserir_fim(ListaCircular *l, int n){
    // Verifica se a lista está cheia
    if(lista_cheia(l)){
        printf("Lista cheia.\n");
        return;
    }
    // Caso lista vazia.
    if(lista_vazia(l)){
        l->inicio = 0;
        l->fim = 0;

        l->vetor[l->fim] = n;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    l->fim = (l->fim + 1 + MAX) % MAX; // acha novo fim
    l->vetor[l->fim] = n; // atribui valor

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa remove_inicio()
void remove_inicio(ListaCircular *l){
    // Verifica se a lista é vazia.
    if(lista_vazia(l)){
        printf("Lista vazia.\n");
        return;
    }
    // Verifica se a lista eh unitaria;
    if(l->inicio == 0 && l->fim){
        l->inicio--;
        l->fim--;

        printf("Elemento removido com sucesso.\n");
        return;
    }
    l->inicio = (l->inicio + 1) % MAX;

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa remove_final()
void remove_final(ListaCircular *l){
    // Verifica se a lista é vazia.
    if(lista_vazia(l)){
        printf("Lista vazia.\n");
        return;
    }
    // Veriifica se a lista é unitária.
    if(l->inicio == 0 && l->fim == 0){
        l->inicio--;
        l->fim--;

        printf("Elemento removido com sucesso.\n");
        return;
    }
    l->fim = (l->fim - 1) % MAX;

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa exibir_lista
void exibir_lista(ListaCircular l){
    // Verifica se a lista está vazia.
    if(lista_vazia(&l)){
        printf("Lista vazia.\n");
        return;
    }

    int i;
    printf("Lista: ");
    for(i = l.inicio; i != l.fim; i = (i + 1) % MAX){
        printf("%d ", l.vetor[i]);
    }

    printf("%d", l.vetor[i]);

    printf("\n");
    return;
}
// Implementa lista_vazia()
int lista_vazia(ListaCircular *l){
    // Verifica se o inicio e o fim são iguais a -1
    if(l->inicio == -1 && l->fim == -1)
        return 1;
    
    return 0;
}
// Implementa lista_cheia()
int lista_cheia(ListaCircular *l){
    // Verifica se o incremento do fim é igual ao inicio.
    if(((l->fim + 1) % MAX) == l->inicio)
        return 1;

    return 0;
}
// Implementa limpar_lista()
void limpar_lista(ListaCircular *l){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("lista vazia.\n");
        return;
    }
    l->inicio = -1;
    l->fim = -1;

    printf("Lista esvaziada com sucesso.\n");
    return;
}