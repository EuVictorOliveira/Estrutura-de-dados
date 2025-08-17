/*
    Arquivo relacionado às implementações das funções para manipulação de lista duplamente encadeada.
    data: 19-07-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaDuplamenteEncadeada.h"

// Implementa criar_lista
void criar_lista(No **lp){
    // Ao criar uma nova lista, ela está vazia. A lógica é análoga à criação de lista com encadeamento simples, onde o conteúdo de lp passa a ser NULL.
    *lp = NULL; // conteúdo de lp agora aponta para ponteiro nulo.

    if(*lp){
        printf("Erro ao criar lista.\n");
        return;
    }

    printf("Lista criada com sucesso.\n");
    return;
}
// Implementa inserir_inicio()
void inserir_inicio(No **lp, int n){
    No *novo; // Cria variável do tipo ponteiro para o novo nó.

    novo = (No*) malloc(sizeof(No)); // aloca memória dinamicamente.
    // Verifica se alocação foi bem-sucedida.
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->info = n;
    novo->anterior = NULL; // como a inserção ocorre no início, o ponteiro para o elemento anterior sempre será nulo.
    // Verifica se a lista é vazia.
    if(*lp == NULL){
        novo->proximo = NULL; // equivalente a novo->proximo = *lp já que o novo nó será o primeiro e último elemento simultaneamente.
        *lp = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Acerta o duplo encadeamento em caso de lista não vazia.
    novo->proximo = *lp; // novo proximo agora aponta para o nó do primeiro elemento da lista.
    (*lp)->anterior = novo; // o antigo primeiro elemento agora tem seu ponteiro-anterior apontando para novo.
    *lp = novo; // agora o inicio da lista aponta para o novo elemento.

    printf("Elemento inserido com sucesso.\n");
    return;
}
// Implementa inserir_meio()
void inserir_meio(No **lp, int n, int valorAnterior){
    No *novo; // Cria variável do tipo ponteiro para o novo nó.

    novo = (No*) malloc(sizeof(No)); // aloca memória para o novo nó dinamicamente.
    if(!novo){ // verifica se a alocação foi bem-sucedida.
        printf("Erro alocar memoria.\n");
        exit(1);
    }
    novo->info = n; // atribui o conteúdo do nó
    // Caso de lista vazia:
    if(*lp == NULL){
        // Tanto ponteiro-anterior quanto ponteiro-próximo apontam para NULL, já que novo é o primeiro elemento.
        novo->anterior = NULL; 
        novo->proximo = NULL;
        *lp = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso de lista não vazia.
    No *auxiliar; // criar nó auxiliar para percorrer a lista.
    for(auxiliar = *lp; auxiliar->info != valorAnterior && auxiliar->proximo != NULL; auxiliar = auxiliar->proximo); // percorre lista até encontrar o valor ou até chegar ao final.
    // Ajusta encadeamento:
    // Primeiro, verifica se ao auxiliar é o ultimo elemento da lista.
    if(auxiliar->proximo == NULL){
        novo->anterior = auxiliar;
        novo->proximo = NULL;
        auxiliar->proximo = novo;

        printf("Valor nao encontrado. Inserindo no fim.\n");
        return;
    }
    // Não sendo o auxiliar o ultimo elemento, podemos ajustar o encadeamento normalmente:
    novo->anterior = auxiliar;
    novo->proximo = auxiliar->proximo;
    auxiliar->proximo->anterior = novo;
    auxiliar->proximo = novo;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa inserir_fim().
void inserir_fim(No **lp, int n){
    No *novo; // Cria variável do tipo ponteiro para o novo nó.

    novo = (No*) malloc(sizeof(No)); // aloca memória para o novo nó dinamicamente.
    if(!novo){ // verifica se a alocação foi bem-sucedida
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Construção do novo nó:
    novo->info = n; // atribui o conteúdo.
    novo->proximo = NULL; // como será sempre o último elemento, o ponteiro para o próximo deve ser NULL.
    
    // Caso de lista vazia:
    if(*lp == NULL){
        novo->anterior = NULL;
        *lp = novo;

        printf("Elemento inserido com sucesso.\n");
        return; 
    }
    // Caso lista não vazia:
    No *auxilar; // Cria variável auxiliar para percorrer a lista até o fim.
    for(auxilar = *lp; auxilar->proximo != NULL; auxilar = auxilar->proximo); // percorre a lista até chegar ao fim
    // Ajusta encadeamento.
    auxilar->proximo = novo; // o ponteiro-próximo do ultimo elemento agora aponta para o novo nó
    novo->anterior = auxilar; // o ponteiro-anterior do novo nó agora aponta para novo.

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa remover_inicio().
void remover_inicio(No **lp){
    // Deve-se primeiro verificar se a lista está vazia. Em caso afirmativo, nada é feito
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó que representa elemento que será retirado.
    // Caso 1: lista unitária.
    if((*lp)->proximo == NULL){
        sai = *lp; // sai agora aponta para o iníco da lista.
        free(sai); // liberamos memória de sai.

        *lp = NULL; // Agora lista está vazia 
        printf("Elemento removido com sucesso.\n");
        return;
    }
    sai = *lp; // sai agora aponta para o inicio da lista.
    *lp = sai->proximo;
    sai->proximo->anterior = NULL; // atribui valor NULL ao ponteiro-anterior ao segundo elemento da lista, que após remoção passará a ser primeiro.
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa remover_meio().
void remover_meio(No **lp, int n){
    // Caso 1: lista vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // representa nó a ser removido.
    // Caso 2: lista unitária.
    if((*lp)->proximo == NULL && (*lp)->info == n){
        sai = *lp; // sai agora aponta para o inicio da lista.
        free(sai); // liberamos memoria de sai.

        *lp = NULL; // indica que a lista agora está vazia.
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 3: lista com múltiplos elementos.
    for(sai = *lp; sai->info != n && sai->proximo != NULL; sai = sai->proximo); // percorre lista até achar o valor ou até o final.
    // caso tenha sido encontrado e seja o primeiro:
    if(sai->anterior == NULL){
        remover_inicio(lp);
        return;
    }
    // Caso não tenha sido encontrado e seja o ultimo:
    if(sai->proximo == NULL && sai->info != n){
        printf("Elemento nao encontrado.\n");
        return;
    }
    // caso tenha sido encontrado e seja o ultimo:
    if(sai->proximo == NULL){
        remover_fim(lp);
        return;
    }
    // caso esteja no meio:
    sai->anterior->proximo = sai->proximo;
    sai->proximo->anterior = sai->anterior;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;
}
// Implementa remover_fim().
void remover_fim(No **lp){
    // Deve-se primeiro verificar se a lista está vazia. Em caso afirmativo, nada é feito.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó que representa elemento que será retirado.
    // Caso 1: lista unitária.
    if((*lp)->proximo == NULL){
        sai = *lp; // sai aponta agora para o inicio da lista
        free(sai); // liberamos sai

        *lp = NULL; // indica que a lista agora está vazia.
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Caso 2: lista não vazia  e não unitária.
    for(sai = *lp ; sai->proximo != NULL; sai = sai->proximo); // percorre a lista até sai ser o ultimo elemento.
    sai->anterior->proximo = NULL;
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;

}
// Implementa exibir_lista().
void exibir_lista(No *l){
    // Caso a lista esteja vazia.
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // nó auxiliar para percorrer a lista.
    printf("Lista: [");
    for(auxiliar = l; auxiliar != NULL; auxiliar = auxiliar->proximo){
        if(auxiliar->proximo)
            printf("%d, ", auxiliar->info);
        else
            printf("%d", auxiliar->info);
    }
    
    printf("]\n");
    return;

}
// Implementa exibir_lista_inverso().
void exibir_lista_inverso(No *l){
    // Caso a lista esteja vazia.
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // nó auxiliar para percorrer a lista.
    for(auxiliar = l; auxiliar->proximo; auxiliar = auxiliar->proximo); // percorre lista até chegar ao ultimo nó;
    printf("Lista inversa: [");
    for(; auxiliar != NULL; auxiliar = auxiliar->anterior){
        if(auxiliar->anterior)
            printf("%d, ", auxiliar->info);
        else
            printf("%d", auxiliar->info);
    }

    printf("]\n");
    return;

}
// Implementa esvaziar_lista()
void esvaziar_lista(No **lp){
    // Primeiro verifica se a lista está vazia
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar;
    while(*lp){
        auxiliar = *lp;
        *lp = auxiliar->proximo;
        free(auxiliar);
    }

    *lp = NULL;
    printf("Lista esvaziada com sucesso.\n");
    return;
}


