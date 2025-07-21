/*
    Arquivo referente à implementação das funções de manipulação
    de listas estáticas com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025

 */
// CABEÇALHO
#include <stdio.h>
#include <stlib.h>
#include "ListaEstatica.h"

// IMPLETAÇÕES DAS FUNÇÕES

// Implementa cria_lista()
void cria_lista(Lista *l){
    l->ctr = -1; // Atribui valor -1 ao controle. Isso indica que a lista está vazia.
    return;
}
// Implementa insere_final()
void insere_final(Lista *l, int n){

    // Verifica se a lista esta cheia. Encerra chamado em caso afirmativo.
    if(lista_cheia(l)){
        printf("Erro. Lista cheia.\n");
        return;
    }

    l->ctr++; // incrementa controle. Indica que novo elemento será inserido.
    l->vetor[l->ctr] = n; // Posiciona elemento na última posição da lista.

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa insere_meio().
void insere_meio(Lista *l, int posicao, int n){
    // Verifica se a lista esta cheia.
    if(lista_cheia(l)){
        printf("Erro. Lista cheia.\n");
        return;
    }
    // Desloca todos os elementos a partir da posição à direita
    for(int i = l->ctr; i >= posicao; i--)
        vetor[i+1] = vetor[i];
    l->vetor[posicao] = n; // insere elemento na posição.
    l->ctr++; // incrementa controle

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa insere_inicio()
void insere_inicio(Lista *l, int n){
    // Verifica se a lista esta cheia.
    if(lista_cheia(l)){
        printf("Erro. Lista cheia.\n");
        return;
    }
    // Desloca todos os elementos da lista à direita.
    for(int i = l->ctr; i <= 0; i--)
        vetor[i+1] = vetor[i];
    l->vetor[0] = n; // Insere n no início da lista.
    l->ctr++; // Incrementa o controle.

    printf("Elemento inserido com sucesso.\n");
    return;
}
// implementa remove_final()
void remove_final(Lista *l){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista está vazia.\n");
        return;
    }

    l->ctr--; // Decrementa em 1, retirando último elemento.
    return;
}
// implementa remove_meio()
void remove_meio(Lista *l, int posicao){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista está vazia.\n");
        return;
    }
    //Desloca todos os elementos posteriores a posição para a esquerda.
    for(int i = posicao; i < l->ctr; i++)
        l->vetor[i] = l->vetor[i+1];
    l->ctr--; // Decrementa controle em 1.

    printf("Elemento removido.\n");
    return;
}
// Implementa remove_inicio()
void remove_inicio(Lista *l){
    // Verifica se a lista está vazia.
    if(lista_vazia(l)){
        printf("Erro. Lista está vazia\n");
        return;
    }
    // Desloca todos os elementos para a esquerda.
    for(int i = 0; i < l->ctr; i++)
        l->vetor[i] = l->vetor[i+1];
    l->ctr--; // Decrementa controle em 1.
    
    printf("Elemento removido.\n");

}
// Implementa exibir_lista()
void exibir_lista(Lista l){
    printf("Lista: ");

    // Percorre a lista exibindo elementos.
    for(int i = 0; i <= l.ctr; i++){
        printf("%d ", l.vetor[i]);
    }
    printf("\n");
}
// Implementa limpar_lista()
void limpar_lista(Lista *l){
    l->ctr = -1; // atribui -1 ao controle, indicando lista vazia.
    printf("Lista esvaziada.\n");
}
// Implementa lista_cheia()
int lista_cheia(Lista *l){
    if(l->ctr == 9)
        return 1;  // Função retorna 1 se controle for igual a 9, o que indica lista cheia.

    return 0;
}
// Implementa lista_vazia()
int lista_vazia(Lista *l){
    if(l->ctr == -1)
        return 1; // Função retorna 1 se controle for igual a -1, o que indica lista vazia.
    
    return 0;
}