/*
    Arquivo relacionado às implementações das funções para manipulação de lista circular dinamica.
    data: 19-07-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularDinamica.h"

// IMPLEMENTAÇÕES.

// Implementa cria_lista().
void cria_lista(No **lp){
    // Seta o conteúdo para onde lp aponta como NULL, indicando lista vazia.
    *lp = NULL;

    printf("Lista criada com sucesso.\n");
    return;
}
// Implementa inserir_inicio()
void inserir_inicio(No **lp, int n){
    No* novo; // representa o novo elemento a ser inserido.
    // aloca memória dinamicamente.
    novo = (No*) malloc(sizeof(No));
    if(!novo){ // verifica alocação
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói novo nó:
    novo->info = n; 
    // Caso 1: lista vazia
    if( *lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista unitária com múltiplos elementos.
    No* auxiliar; // cria variável auxiliar que percorrerá a lista até o último elemento
    for(auxiliar = *lp; auxiliar->proximo != *lp; auxiliar = auxiliar->proximo);
    // Ajusta encadeamento:
    novo->proximo = *lp;
    *lp = novo;
    auxiliar->proximo = novo;

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa inserir_meio().
void inserir_meio(No **lp, int n, int valorAnterior){
    No* novo; // representa o novo elemento a ser inserido.
    // Aloca memória dinamicamente:
    novo = (No*) malloc(sizeof(No));
    if(!novo){// Verifica alocação
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui conteúdo ao nó.
    // Caso 1: lista vazia.
    if(*lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista não vazia.
    No* auxiliar; // cria variável auxiliar que percorrerá a lista
    for(auxiliar = *lp; auxiliar->info != valorAnterior && auxiliar->proximo != *lp; auxiliar = auxiliar->proximo); // percorre até achar o valor ou até o fim
    // Caso chegue ao fim:
    if(auxiliar->proximo == *lp){
        novo->proximo = *lp;
        auxiliar->proximo = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Inserção no meio
    novo->proximo = auxiliar->proximo;
    auxiliar->proximo = novo;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_fim()
void inserir_fim(No **lp, int n){
    No* novo; // representa o novo elemento a ser inserido.
    // Aloca memória dinacamicamente.
    novo = (No*) malloc(sizeof(No));
    if(!novo){ // verifica alocação
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui o conteúdo do novo nó.
    // Caso 1: lista vazia
    if(*lp == NULL){
        novo->proximo = *lp;
        *lp = novo;
        novo->proximo = novo;
        
        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso 2: lista unitária ou com múltiplos elementos.
    No* auxiliar; // cria variável auxiliar para percorrer  a lista até o último elemento
    for(auxiliar = *lp; auxiliar->proximo != *lp; auxiliar = auxiliar->proximo);
    novo->proximo = *lp;
    auxiliar->proximo = novo; // ajusta encadeamento.

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa remover_inicio
void remover_inicio(No **lp){
    // Caso 1: lista vazia
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No* sai; // representa nó que será retirado.
    sai = *lp; // sai agora aponta para o inicio da lista
    // Caso 2: lista unitária
    if(sai->proximo == sai){
        free(sai); // ibera memória do elemento.

        *lp = NULL; // torna a lista nulo.

        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista com múltiplos elementos.
    No* auxiliar; // variável para percorrer a lista até o fim
    for(auxiliar = *lp; auxiliar->proximo != *lp; auxiliar = auxiliar->proximo); // percorre lista até o final.
    *lp = sai->proximo; // o inicio da lista aponta agora para o segundo elemento.
    auxiliar->proximo = *lp; // agora o ultimo elemento aponta para o novo inicio da lista
    free(sai); // libera primeiro elemento da lista.

    printf("Elemento removido com sucesso.\n");
    return;
}
// Implementa remover_meio().
void remover_meio(No **lp, int valor){
    // Caso 1: lista vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó que será retirado.
    // Caso 2: lista unitária
    if((*lp)->proximo == *lp){
        if((*lp)->info == valor){
            sai = *lp;
            free(sai);

            *lp = NULL;
            printf("Elemento removido com sucesso.\n");
            return;
        }else{
            printf("Elemento nao encontrado.\n");
            return;
        }
    }
    // Caso 3: lista com múltiplos elementos.
    No* auxiliar; // variável auxiliar para percorrer a lista.
    auxiliar = *lp;
    for(sai = auxiliar->proximo; sai->info != valor && sai->proximo != *lp; auxiliar = sai, sai = sai->proximo); // percorre a lista até a condição ser satisfeita.
    // Caso o valor passado como parâmetro esteja no fim da lista.
    if(sai->proximo == *lp && sai->info == valor){
        remover_fim(lp);
        return;
    }
    // Caso não tenha encontrado o valor.
    if(sai->proximo == *lp && sai->info != valor){
        printf("Elemento nao encontrado.\n");
        return;
    }
    // Remoção no meio.
    auxiliar->proximo = sai->proximo;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa remover_fim()
void remover_fim(No **lp){
    // Caso 1: Lista vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No* sai; // representa nó que será retiradao.
    // Caso 2: lista unitária
    if((*lp)->proximo == *lp){
        sai = *lp;
        free(sai);

        *lp = NULL;
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista com múltiplos elementos.
    No* auxiliar; // representa variável auxiliar.
    auxiliar = *lp;
    for(sai = auxiliar->proximo; sai->proximo != *lp; auxiliar = sai, sai = sai->proximo); // percorre a lista até o fim, sendo sai o último e o auxiliar o penúltimo.
    // Ajusta encadeamento:
    auxiliar->proximo = *lp;
    free(sai); // libera último elemento.

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa exibir_lista().
void exibir_lista(No *l){
    // Verifica se a lista está vazia.
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // utilizado para percorrer a lista.
    printf("Lista: ");
    for(auxiliar = l; auxiliar->proximo != l; auxiliar = auxiliar->proximo)
            printf("%d ", auxiliar->info);
    printf("%d", auxiliar->info);
    
    printf("\n");
    return;
}
// Implementa esvaziar_lista.
void esvaziar_lista(No **lp){
    // Verifica se a lista está vazia.
    if(*lp == NULL){
        printf("Lista já está vazia.\n");
        return;
    }

    No *aux = *lp;
    No *temp;

    // Percorre todos os nós até voltar ao início
    for(; aux->proximo != *lp; aux = temp){
        temp = aux->proximo;  // guarda próximo nó
        free(aux);             // libera memória do nó atual
    }
    // Libera o último nó
    free(aux);

    *lp = NULL;  // lista agora está vazia
    printf("Lista esvaziada com sucesso.\n");

}