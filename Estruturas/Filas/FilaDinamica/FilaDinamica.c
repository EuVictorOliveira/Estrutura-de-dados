/* 
    Arquivo relacionado às implementações das funções de fila utilizando vetor.
    data: 16-08-2025

    Autor: João Victor Oliveira
*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "FilaDinamica.h"

// IMPLEMENTAÇÕES:

// Implementa cria_fila()
void cria_fila(Fila **f){
    // Aloca memoria dinamicamente
    *f = (Fila*) malloc(sizeof(Fila));
    if(!(*f)){
        printf("Erro ao criar fila.\n");
        exit(1);
    }
    // Seta inicio e fim da fila como NULL
    (*f)->inicio = NULL;
    (*f)->fim = NULL;

    printf("Fila criada com sucesso.\n");
}
// Implementa insere_fila()
void insere_fila(Fila *f, int n){
    No *novo; // no que representa novo elemento a ser inserido.

    novo = (No*) malloc(sizeof(No)); // aloca novo nó dinamicamente.
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui o conteúdo do novo nó.
    novo->proximo = NULL; // novo nó agora aponta para o fim da fila
    // verifica se a fila esta vazia.
    if(f->fim == NULL){
        f->inicio = novo;
        f->fim = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso a fila a não seja vazia.
    f->fim->proximo = novo;
    f->fim = novo;

    printf("Elemento inserido com sucesso.\n");
    return;
}
// implementa remove_fila
int remove_fila(Fila *f){
    // Verifica se a fila está vazia.
    if(fila_vazia(f)){
        printf("Fila vazia.\n");
        return -1;
    }
    No *sai;
    int auxiliar; // variável auxiliar para retorno
    // Verifica se a fila é unitária
    if(f->inicio == f->fim){
        sai = f->inicio;
        auxiliar = sai->info;

        free(sai);
        f->inicio = NULL;
        f->fim = NULL;


        printf("Elemento removido com sucesso.\n");
        return auxiliar;
    }
    // caso a fila tenha multiplos elementos.
    sai = f->inicio;
    auxiliar = sai->info;
    f->inicio = sai->proximo;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return auxiliar;
}
// implementa fila_vazia
int fila_vazia(Fila *f){
    // Verifica se a fila está vazia.
    if(f->inicio == NULL)
        return 1;

    return 0;
}
// implementa exibir_fila()
void exibir_fila(Fila *f){
    // Verifica se a fila está vazia.
    if(fila_vazia(f)){
        printf("Fila vazia.\n");
        return;
    }
    No *auxiliar; // variável auxiliar para percorrer fila.
    printf("Fila: ");
    for(auxiliar = f->inicio; auxiliar != NULL; auxiliar = auxiliar->proximo)
        printf("%d ", auxiliar->info);

    printf("\n");
    return;
}
// Implementa libera_fila()
void libera_fila(Fila *f){
    No *auxiliar = f->inicio; // variável auxiliar.
    while(auxiliar != NULL){
        No *auxiliar2 = auxiliar->proximo;
        free(auxiliar);
        auxiliar = auxiliar2;
    }

    free(f);
    printf("Fila liberado com sucesso.\n");
    return;
}
