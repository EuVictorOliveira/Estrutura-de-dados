/*
    Implemente uma função que crie uma cópia de uma árvore binária. Essa
    função deve obedecer ao protótipo:


                                Arv* copia (Arv*a);


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
// Implementa copia().
Arvore* copia_arvore(Arvore* original){
    // Arvore vazia
    if(arvore_vazia(original))
        return NULL;

    Arvore *copia = cria_arvore(original->info, NULL, NULL);

    copia->esquerda = copia_arvore(original->esquerda);
    copia->direita = copia_arvore(original->direita);
    
    return copia;

}