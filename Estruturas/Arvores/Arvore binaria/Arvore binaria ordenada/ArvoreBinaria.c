/*
    Arquivo relacionado à implementação das funções de manipulação referentes à arvore binária
    Autor: João Victor Oliveira

    data: 29/08/2025

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

// Implementa cria_arvore()
void criar_arvore(Arvore **raiz){
    *raiz = NULL; // seta conteúdo da raiz como sendo NULL, indicando arvore vazia.

    printf("Arvore criada com sucesso.\n");
    return;
}
// Implementa inserir_arvore()
void inserir_arvore(Arvore **raiz, int n){
    // Primeiro, verifica se o valor já existe na arvore. Essa implementação de árvore binária não permite repetições
    if(buscar_elemento(*raiz, n)){
        printf("Elemento ja existe na arvore\n");
        return;
    }
    // Aloca novo nó e faz verificação de memória
    Arvore *novo;
    novo = (Arvore*) malloc(sizeof(Arvore));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói o novo nó:
    novo->info = n;
    novo->esquerda = NULL; // tanto esquerda como direito serão NULL, já que sempre adicionamos um novo elemento como sendo uma folha da árvore(nó sem filhos)
    novo->direita = NULL;

    // Caso a arvore esteja vazia:
    if(arvore_vazia(*raiz)){
        *raiz = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }

    // Cria variávies auxiliaires
    Arvore *auxiliar = *raiz;
    Arvore *pai = NULL;

    // Percorre à árvore até que o auxiliar seja igual a NULL, indicando local adequado para inserção
    while(auxiliar != NULL){
        pai = auxiliar;
        if(n < auxiliar->info)
            auxiliar = auxiliar->esquerda;
        else
            auxiliar = auxiliar->direita;
    }
    // Verifica se n deve ser adicionado à esquerda ou à direita
    if(n < pai->info)
        pai->esquerda = novo;
    else
        pai->direita = novo;

    printf("Elemento inserido com sucesso.\n");

}
// Implementa arvore_vazia()
int arvore_vazia(Arvore *raiz){
    return raiz == NULL;
}
// Implementa exibir_arvore()
void exibir_arvore(Arvore* raiz){
    // Verifica se a árvore está vazia.
    if(arvore_vazia(raiz)){
        return;
    }

    // Imprime a árvore:
    printf("%d ", raiz->info); // imprime valor do nó atual.
    exibir_arvore(raiz->esquerda); // chama função de maneira recursiva.
    exibir_arvore(raiz->direita); // chama função de maneira recursiva.

    return;
}
// Implementa libera_arvore()
void liberar_arvore(Arvore** raiz){
    // Verifica se a árvore está vazia.
    if(!arvore_vazia(*raiz)){
        liberar_arvore(&(*raiz)->esquerda); // chama função recursivamente
        liberar_arvore(&(*raiz)->direita); // chama função recursivamente

        free(*raiz);
    }

    *raiz = NULL; // seta null, indicando que a árvore está vazia.
}
// Implementa busca_elemento().
int buscar_elemento(Arvore* raiz, int valor){
    // Vefifica se a árvore está vazia:
    if(arvore_vazia(raiz))
        return 0;

    return raiz->info == valor || buscar_elemento(raiz->esquerda, valor) || buscar_elemento(raiz->direita, valor); // utiliza recursão para buscar elemento.

}