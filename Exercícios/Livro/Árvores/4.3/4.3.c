/*
    Implemente uma função que retorne a quantidade de nós de uma árvore
    binária que possuem apenas um filho. Essa função deve obedecer ao protótipo:

                            int um_filho (Arv* a);

    autor: João Victor Oliveira
    data: 31/08/2025

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

// Implementa cria_arvore_vazia()
Arvore* cria_arvore_vazia(void){

    printf("Arvore vazia criada com sucesso.\n"); // imprime mensagem de sucesso.
    return NULL; // retorna NULL, o que indica árvore vazia.

}
// Implementa cria_arvore()
Arvore* cria_arvore(int info, Arvore* esquerda, Arvore* direita){
    Arvore *novo; // variável que representa novo nó(ou subárvore) da arvore.
    // Aloca memória para novo nó e vefifica sucesso:
    novo = (Arvore*) malloc(sizeof(Arvore));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = info;
    novo->esquerda = esquerda;
    novo->direita = direita;

    printf("Arvore criada com sucesso.\n");
    return novo;

}
// Implementa arvore_vazia()
int arvore_vazia(Arvore* raiz){
    return raiz == NULL; // verifica se a árvore está vazia.
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
Arvore* libera_arvore(Arvore* raiz){
    // Verifica se a árvore está vazia.
    if(!arvore_vazia(raiz)){
        libera_arvore(raiz->esquerda); // chama função recursivamente
        libera_arvore(raiz->direita); // chama função recursivamente

        free(raiz);
    }

    return NULL; // return NULL para indicar que a agora a árvore está vazia
}
// Implementa busca_elemento().
int busca_elemento(Arvore* raiz, int valor){
    // Vefifica se a árvore está vazia:
    if(arvore_vazia(raiz))
        return 0;

    return raiz->info == valor || busca_elemento(raiz->esquerda, valor) || busca_elemento(raiz->direita, valor); // utiliza recursão para buscar elemento.

}
// Implementa um_filho().
int um_filho(Arvore* raiz){
    // verifica se a árvore está vazia
    if(arvore_vazia(raiz))
        return 0;

    int nFilhoUnico = 0; // cria variável que representa número de nós com um único filho.
    if(((raiz->esquerda != NULL) && (raiz->direita == NULL)) || ((raiz->esquerda == NULL) && (raiz->direita != NULL))) // incrementa variável caso o nó atual tenha um único filho
        nFilhoUnico++;
    // Faz chamadas recursisvas
    nFilhoUnico += um_filho(raiz->esquerda);
    nFilhoUnico += um_filho(raiz->direita);

    // retorna valor final.
    return nFilhoUnico;

}