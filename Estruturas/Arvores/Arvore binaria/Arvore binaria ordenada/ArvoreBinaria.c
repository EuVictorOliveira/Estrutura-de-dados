/*
    Arquivo relacionado à implementação das funções de manipulação referentes à arvore binária
    Autor: João Victor Oliveira

    data da última moodificação: 01/09/2025

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
// Implementa inserir_arvore(). Foi modificado para implementar de maneira recursiva
Arvore* inserir_arvore_recursisva(Arvore *raiz, int n){
    // Primeiro, verifica se o valor já existe na arvore. Essa implementação de árvore binária não permite repetições
    if(buscar_elemento(raiz, n)){
        printf("Elemento ja existe na arvore\n");
        return raiz;
    }
    // Caso a arvore esteja vazia(caso base):
    if(arvore_vazia(raiz)){
        // Aloca novo nó e faz verificação de memória
        Arvore *novo;
        novo = (Arvore*) malloc(sizeof(Arvore));
        if(!novo){
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
        // Constrói o novo nó folha:
        novo->info = n;
        novo->esquerda = NULL; // tanto esquerda como direito serão NULL, já que sempre adicionamos um novo elemento como sendo uma folha da árvore(nó sem filhos)
        novo->direita = NULL;

        printf("Elemento inserido com sucesso.\n");
        return novo;
    }
    // caso recursivo:
    if(n < raiz->info)
        raiz->esquerda = inserir_arvore_recursisva(raiz->esquerda, n); // vai para esquerda caso n seja menor que a raiz(subarvore) atual
    else
        raiz->direita  = inserir_arvore_recursisva(raiz->direita, n); // vai para direita caso n seja maior que a raiz(subarvore) atual

    return raiz;
    
}
// Implementa inserir_arvore(). Insere na árvore sem recursão
void inserir_arvore(Arvore **raiz, int n){
    // verifica se o elemento já existe
    if(buscar_elemento(*raiz, n)){
        printf("Elemento existe na arvore.\n");
        return;
    }
    Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói novo nó-folha
    novo->esquerda = NULL;
    novo->info = n;
    novo->direita = NULL;

    if(arvore_vazia(*raiz)){
        *raiz = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }

    Arvore *auxiliar = *raiz;
    Arvore *pai = NULL;
    // Perocrre arvore até chegar no local correto de inserção
    while(auxiliar != NULL){
        pai = auxiliar;

        if(n < auxiliar->info)
            auxiliar = auxiliar->esquerda;
        else
            auxiliar = auxiliar->direita;
    }

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
void exibir_arvore_prefix(Arvore* raiz){
    // Verifica se a árvore está vazia.
    if(arvore_vazia(raiz))
        return;
    

    // Imprime a árvore de maneira pré-fixa(RAIZ, SAE, SAD):
    printf("%d ", raiz->info); // imprime valor do nó atual.
    exibir_arvore_prefix(raiz->esquerda); // chama função de maneira recursiva.
    exibir_arvore_prefix(raiz->direita); // chama função de maneira recursiva.

    return;
}
// Implementa exibir_arvore_infix()
void exibir_arvore_infix(Arvore *raiz){
    // Verifica se árvore está vazia.
    if(arvore_vazia(raiz)){
        return;
    }

    // Imprime a árvore de maneira infixada(SAE, RAIZ, SAD)(ou ordenada quanto aos valores):
    exibir_arvore_infix(raiz->esquerda); 
    printf("%d ", raiz->info);
    exibir_arvore_infix(raiz->direita);

    return;
}
// Implementa exibir_arvore_posfix()
void exibir_arvore_posfix(Arvore *raiz){
    // Verficia se árvore está vazia.
    if(arvore_vazia(raiz))
        return;

    // Imprime a árvore de maneira pós-fixada(SAE,SAD,RAIZ)
    exibir_arvore_posfix(raiz->esquerda);
    exibir_arvore_posfix(raiz->direita);
    printf("%d ", raiz->info);

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
// Implementa altura_arvore()
int altura_arvore(Arvore *raiz){
    // Verifica se árvore está vazia:
    if(arvore_vazia(raiz))
        return -1; // convenção bibliográfica

    // Faz chamadas recursivas
    int alturaEsquerda = altura_arvore(raiz->esquerda);
    int alturaDireita = altura_arvore(raiz->direita);

    // compara as alturas e retorna a maior.
    return (alturaEsquerda > alturaDireita ? alturaEsquerda : alturaDireita) + 1;

}
// Implementa nos_arvore
int nos_arvore(Arvore *raiz){
    // Vefifica se a árvore está vazia
    if(arvore_vazia(raiz))
        return 0; // indica que não há nenhum nó
    
    // Retorna a quantidade total de nós da árvore
    return 1 + nos_arvore(raiz->esquerda) + nos_arvore(raiz->direita);
}
// Implementa remover_folha()
Arvore* remove_folha(Arvore *raiz, int valor){
    // Verifica se árvore está vazia:
    if(arvore_vazia(raiz)){
        return NULL;
    }
    // Percorre a árvore recursivamente
    if(valor < raiz->info)
        raiz->esquerda = remove_folha(raiz->esquerda, valor);
    else if(valor > raiz->info)
        raiz->direita = remove_folha(raiz->direita, valor);
    else{
        if(raiz->esquerda == NULL && raiz->direita == NULL){
            free(raiz);

            printf("Folha removida com sucesso.\n");
            return NULL;
        }else
            printf("No encontrado, mas nao eh folha\n");
    }

    return raiz;

}
