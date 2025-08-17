/* 
    Arquivo relacionado às implementações das funções de fila dupla dinamica.
    data: 16-08-2025

    Autor: João Victor Oliveira
*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "FilaDuplaDinamica.h"

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
// Implementa insere_fila_inicio
void insere_fila_inicio(Fila *f, int n){
    No *novo; // nó que representa novo elemento a ser inserido.

    novo = (No*) malloc(sizeof(No)); // aloca novo nó dinamicamente
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui conteúdo do novo nó
    novo->anterior = NULL; // nó ponteiro anterior agora aponta para NULL, já que será o primeiro elemento.
    if(f->fim == NULL){ // verifica se a fila estava vazia.
        novo->proximo = NULL; // novo ponteiro-próximo agora aponta para NULL.
        f->inicio = novo;
        f->fim = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso a lista não esteja vazia.
    novo->proximo = f->inicio;
    f->inicio->anterior = novo;
    f->inicio = novo;

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa insere_fila_final()
void insere_fila_final(Fila *f, int n){
    No *novo; // no que representa novo elemento a ser inserido.

    novo = (No*) malloc(sizeof(No)); // aloca novo nó dinamicamente.
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui o conteúdo do novo nó.
    novo->proximo = NULL; // novo nó ponteiro-próximo agora aponta para NULL, já que será inserido no fim
    // verifica se a fila esta vazia.
    if(f->fim == NULL){
        novo->anterior = NULL; // já que a fila está vazia.
        f->inicio = novo;
        f->fim = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso a fila a não seja vazia.
    novo->anterior = f->fim;
    f->fim->proximo = novo;
    f->fim = novo;

    printf("Elemento inserido com sucesso.\n");
    return;
}
// implementa remove_fila_inicio
int remove_fila_inicio(Fila *f){
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
    f->inicio->anterior = NULL;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return auxiliar;
}
// Implementa remove_fina_final()
int remove_fila_final(Fila *f){
    // Verifica se a fila está vazia.
    if(fila_vazia(f)){
        printf("Fila vazia.\n");
        return -1;
    }
    No *sai;
    int auxiliar;
    // verifica se a fila é unitária
    if(f->inicio == f->fim){
        sai = f->fim; // sai agora aponta para o fim da fila
        auxiliar = sai->info; // auxiliar recebe a informação do nó que será retirado

        free(sai); // libera memória
        // Indica fila vazia.
        f->inicio = NULL; 
        f->fim = NULL;

        printf("Elemento removido com sucesso.\n");
        return auxiliar;
    }
    // Caso a fila tenha mais de um elemento:
    // ajuste de encadeamento.
    sai = f->fim;
    auxiliar = sai->info;
    f->fim = sai->anterior;
    f->fim->proximo = NULL;
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
