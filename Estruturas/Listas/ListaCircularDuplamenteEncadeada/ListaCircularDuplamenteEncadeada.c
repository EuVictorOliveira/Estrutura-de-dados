/*
    Arquivo relacionado às implementações das funções para manipulação de lista circular dinamica.
    data: 19-07-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularDuplamenteEncadeada.h"

// IMPLEMENTAÇÕES:
// Implementa cria_lista()
void cria_lista(No **lp){
    // Seta o conteúdo de lp para NULL, indicando lista vazia.
    *lp = NULL;

    printf("Lista criada com sucesso.\n");
    return;
}
// Implementa inserir_inicio()
void inserir_inicio(No **lp, int n){
    No *novo; // cria ponteiro para o novo nó.
    // Aloca memória dinamicamente
    novo = (No*) malloc(sizeof(No));
    if(!novo){ // verifica alocação
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui conteúdo ao novo nó
    // Caso 1: lista vazia
    if(*lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;
        novo->anterior = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista não vazia
    novo->proximo = *lp; // novo agora aponta para o início da lista.
    (*lp)->anterior->proximo = novo; // ultimo elemento agora aponta para o novo elemento no início da lista.
    novo->anterior = (*lp)->anterior; // o novo inicio agora aponta seu ponteiro-anterior para o final da lista.
    (*lp)->anterior = novo; // o antigo inicio agora aponta seu elemento anterior para o novo elemento.
    *lp = novo; // o início da lista agora aponta para o novo elemento.

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa inserir_meio()
void inserir_meio(No **lp, int n, int valorAnteior){
    No *novo; // cria ponteiro para o novo nó
    // Aloca memória dinamicamente
    novo = (No*) malloc(sizeof(No));
    if(!novo){ // verifica alocação
        printf("Erro alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui conteúdo ao novo nó.
    // Caso 1: lista vazia.
    if(*lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;
        novo->anterior = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista não vazia.
    No *auxiliar;// utilizar auxiliar para percorrer a lista.
    for(auxiliar = *lp; auxiliar->proximo != *lp && auxiliar->info != valorAnteior; auxiliar = auxiliar->proximo); // percorre a lista até chegar ao fim ou encontrar nó que possui aquele valor
    // Caso tenha chegado ao final da lista
    if(auxiliar->proximo == *lp){
        novo->proximo = *lp;
        novo->anterior = auxiliar;
        auxiliar->proximo->anterior = novo;
        auxiliar->proximo = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso inserção seja no meio
    novo->proximo = auxiliar->proximo;
    novo->anterior = auxiliar;
    auxiliar->proximo->anterior = novo;
    auxiliar->proximo = novo;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_fim()
void inserir_fim(No **lp, int n){
    No *novo; // ponteiro para o novo nó

    novo = (No*) malloc(sizeof(No)); // aloca memória dinamicamente
    if(!novo){
        printf("Erro alocar memória.\n");
        exit(1);
    }
    novo->info = n; // atribui conteúdo ao novo nó
    // Caso 1: lista vazia.
    if(*lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;
        novo->anterior = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista não vazia.
    // Ajusta encadeamento duplo.
    novo->proximo = *lp;
    novo->anterior = (*lp)->anterior;
    (*lp)->anterior->proximo = novo;
    (*lp)->anterior = novo;

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa remover_inicio()
void remover_inicio(No **lp){
    // Caso 1: lista vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // representa nó que será retirado
    // Caso 2: Lista unitária.
    if((*lp)->proximo == *lp){
        sai = *lp;

        free(sai);
        *lp = NULL; // agora a lista está vazia.
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista não unitária.
    sai = *lp; // sai agora aponta para o início da lista
    *lp = sai->proximo; // agora lp aponta para o segundo elemento(novo inicio)
    sai->anterior->proximo = *lp; // o final agora aponta para o novo inicio da lista
    (*lp)->anterior = sai->anterior; // agora o novo inicio aponta para o último elemento.

    free(sai); // libera sai.

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa remover_meio()
void remover_meio(No **lp, int valor){
    // Caso 1: Lista vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // representa nó que será liberado
    // Caso 2: lista unitária
    if((*lp)->proximo == *lp){
        sai = *lp;

        free(sai);
        *lp = NULL;
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista com múltiplos elementos.
    for(sai = *lp; sai->info != valor && sai->proximo != *lp; sai = sai->proximo); // percorre lista até o final ou até encontrar o nó que possui o valor do parâmetro da função
    // Caso seja o primeiro elemento da lista.
    if(sai->anterior->proximo == *lp){
        remover_inicio(lp);
        return;
    }
    // Caso não tenha encontrado valor
    if(sai->proximo == *lp && sai->info != valor){
        printf("Valor nao encontrado.\n");
        return;
    }
    // Caso tenha sido encontrado e seja o ultimo
    if(sai->proximo == *lp){
        remover_fim(lp);
        return;
    }
    // Caso esteja no meio
    sai->anterior->proximo = sai->proximo;
    sai->proximo->anterior = sai->anterior;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa remover_fim()
void remover_fim(No **lp){
    // Caso 1: lista vazia
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó que será retirado da lista
    // Caso 2: lista unitaria
    if((*lp)->proximo == *lp){
        sai = *lp;

        free(sai);
        *lp = NULL;
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista com múltiplos elementos
    sai = (*lp)->anterior; // sai agora aponta para o último elemento da lista.
    sai->anterior->proximo = *lp; // penúltimo elemento agora aponta para o início da lista.
    (*lp)->anterior = sai->anterior; // inicio da lista agora aponta para o penultimo elemento.
    
    free(sai); // libera a memória de sai.

    printf("Elemento removido com sucesso.\n");
    return ;

}
// Implementa exibir_lista()
void exibir_lista(No *l){
    // Verifica se a lista está vazia.
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // cria variável auxiliar.
    printf("Lista: [");
    for(auxiliar = l; auxiliar->proximo != l; auxiliar = auxiliar->proximo)
        printf("%d, ", auxiliar->info);

    printf("%d]\n", auxiliar->info);
    return;
}
// Implementa exibir_lista_inversa()
void exibir_lista_inversa(No *l){
    // Verifica se a lista está vazia.
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // cria variável auxiliar.
    printf("Lista: [");
    for(auxiliar = l->anterior; ; auxiliar = auxiliar->anterior){
        printf("%d", auxiliar->info);
        if(auxiliar == l) break; // termina ao imprimir o primeiro nó
        printf(", ");
    }
    printf("]\n");
}
// Implementa esvaziar_lista()
void esvaziar_lista(No **lp){
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }

    No *atual = *lp;
    No *proximo;

    do {
        proximo = atual->proximo;  
        free(atual);               
        atual = proximo;           
    } while(atual != *lp);        

    *lp = NULL;                    
    printf("Lista esvaziada com sucesso.\n");
}