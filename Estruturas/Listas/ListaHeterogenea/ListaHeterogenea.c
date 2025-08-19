/*
    Arquivo referente à implementação das funções relacionadas à monipulação de listas heterogêneas.
    Data: 18-08-2025

    Autor: João Victor Oliveira.


*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaHeterogenea.h"
// IMPLEMENTAÇÕES:

// Implementa cria_lista().
void cria_lista(No **lp){
    // Seta conteúdo de lp para NULL
    *lp = NULL;

    printf("Lista criada com sucesso.\n");
    return;
}
// Implementa aloca_retangulo().
No* aloca_retangulo(float b, float h){
    // Cria variáveis do tipo ponteiro para retangulo e para o novo nó
    Retangulo *r;
    No* novo;
    // Faz as alocações e verificações:
    r = (Retangulo*) malloc(sizeof(Retangulo));
    if(!r){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo = (No*) malloc(sizeof(No));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói a retângulo:
    r->base = b;
    r->altura = h;
    // Constróio o nó.
    novo->identificador = RET;
    novo->info = r;
    novo->proximo = NULL;

    return novo; // retorna o novo nó

}
// Implementa aloca_triangulo().
No* aloca_triangulo(float b, float h){
    // Cria variávies do tipo ponteiro para retângulo e para o novo nó
    Triangulo *t;
    No *novo;
    // Faz as alocações e verificações
    t = (Triangulo*) malloc(sizeof(Triangulo));
    if(!t){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói o triângulo:
    t->base = b;
    t->altura = h;
    // Constrói novo nó:
    novo->identificador = TRI;
    novo->info = t;
    novo->proximo = NULL;

    return novo; // retorna o novo nó

}
// Implementa aloca_circulo
No* aloca_circulo(float r){
    // Cria variáveis do tipo para circulo e para o novo nó
    Circulo *c;
    No *novo;
    // Faz as alocações e verificações
    c = (Circulo*) malloc(sizeof(Circulo));
    if(!c){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo = (No*) malloc(sizeof(No));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    // Constrói o circulo:
    c->raio = r;
    // Constrói novo nó:
    novo->identificador = CIR;
    novo->info = c;
    novo->proximo = NULL;
    
    return novo; // retorno o novo nó.
}
// Implementa insere inicio
void insere_inicio(No **lp, int id){
    float base, altura, raio;
    No *novo;
    // Switch para a etapa de alocação com base no id passado como parâmetro.
    switch (id){
        case 1:
            printf("Informe a base do retangulo: ");
            scanf("%f", &base);
            printf("Informe a altura retangulo: ");
            scanf("%f", &altura);
            // aloca retangulo
            novo = aloca_retangulo(base, altura);
            break;
        case 2:
            printf("Informe a base do triangulo: ");
            scanf("%f", &base);
            printf("Informe a altura triangulo: ");
            scanf("%f", &altura);
            // aloca triangulo
            novo = aloca_triangulo(base, altura);
            break;
        case 3:
            printf("Informe o raio da circunferencia: ");
            scanf("%f", &raio);
            // aloca circulo
            novo = aloca_circulo(raio);
            break;
        default:
            printf("id invalido.\n");
            return;
    }
    // Verifica se a lista está vazia:
    if(*lp == NULL){
        novo->proximo = NULL;
        *lp = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }   
    // caso a lista seja não vazia
    novo->proximo = *lp;
    *lp = novo;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa insere_fim().
void insere_fim(No **lp, int id){
    float base, altura, raio;
    No *novo;
    // Switch para a etapa de alocação com base no id passado como parâmetro.
    switch (id){
        case 1:
            printf("Informe a base do retangulo: ");
            scanf("%f", &base);
            printf("Informe a altura retangulo: ");
            scanf("%f", &altura);
            // aloca retangulo
            novo = aloca_retangulo(base, altura);
            break;
        case 2:
            printf("Informe a base do triangulo: ");
            scanf("%f", &base);
            printf("Informe a altura triangulo: ");
            scanf("%f", &altura);
            // aloca triangulo
            novo = aloca_triangulo(base, altura);
            break;
        case 3:
            printf("Informe o raio da circunferencia: ");
            scanf("%f", &raio);
            // aloca circulo
            novo = aloca_circulo(raio);
            break;
        default:
            printf("id invalido.\n");
            return;
    }
    // Verifica se a lista está vazia
    if(*lp == NULL){
        novo->proximo = NULL;
        *lp = novo;

        printf("Elemento inserido com sucesso.\n");
        return;
    }
    // Caso a lista seja não vazia.
    No *auxiliar; // cria variável auxiliar para percorrer a fila.
    for(auxiliar = *lp; auxiliar->proximo != NULL; auxiliar = auxiliar->proximo); // percorre lista até auxiliar ser o último elemento da lista
    // Ajusta encadeamento.
    auxiliar->proximo = novo;
    novo->proximo = NULL;

    printf("Elemento inserido com sucesso.\n");
    return;

}
// Implementa remove_inicio()
void remove_inicio(No **lp){
    // Verifica se a lista está vazia
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó a ser removido
    sai = *lp;
    // Caso a lista seja unitaria
    if(sai->proximo == NULL){
        free(sai->info);
        free(sai); // libera

        *lp = NULL; // seta a lista como vazia.
        printf("Elemento removido com sucesso.\n");
        return;
    }
    *lp = sai->proximo;
    free(sai->info);
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;
}
// Implementa remove_fim()
void remove_fim(No **lp){
    // Verifica se a lista está vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *sai; // nó a ser removido
    // Verifica se a lista é unitária
    if((*lp)->proximo == NULL){
        sai = *lp;
        free(sai->info);
        free(sai);

        *lp = NULL; // seta a lista como vazia.
        printf("Elemento removido com sucesso.\n");
        return;
    }
    // Lista com múltiplos elementos:
    No *auxiliar; // auxiliar para percorrer a lista
    auxiliar = *lp; // auxiliar agora aponta para o início da lista.
    for(sai = auxiliar->proximo; sai->proximo != NULL; auxiliar = sai, sai = sai->proximo); // percorre lista está sai ser o último elemento e auxiliar ser o penúltimo.
    auxiliar->proximo = NULL; // auxiliar se torna o último elemento.
    // libera sai
    free(sai->info);
    free(sai);

    printf("Elemento removido com sucesso.\n");
    return;
    
}
// Implementa exibir lista(). No momento, só imprime o identificador para fins de teste
void exibir_lista(No *l){
    // Verifica se a lista é vazia
    if(!l){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // nó para percorrer a lista sem perder encadeamento
    // Pecorre a lista:
    printf("Lista: ");
    for(auxiliar = l; auxiliar != NULL; auxiliar = auxiliar->proximo)
        printf("%d ", auxiliar->identificador);
    printf("\n");

    return;

}
// Implementa esvaziar_lista.
void esvaziar_lista(No **lp){
    // Verifica se a lista está vazia.
    if(*lp == NULL){
        printf("Lista vazia.\n");
        return;
    }
    No *auxiliar; // auxiliar para esvaziar a lista.
    while(*lp){
        auxiliar = *lp;
        *lp = auxiliar->proximo;
        
        free(auxiliar->info);
        free(auxiliar);
    }

    printf("Lista esvaziada com sucesso.\n");
    return;

}