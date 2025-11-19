
/*

    Arquivo relacionado à implementação das funções de AVL
    Autor: João Victor Oliveira




    Data: 06/09/2025

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "AVL.h"

// IMPLEMENTAÇÕES:

// Implementa criar_arvore().
Arvore* criar_arvore(void){
    // Criar uma árvore vazia significa retorna um ponteiro nulo.
    printf("Arvore vazia criada com sucesso.\n");
    return NULL; 

}
// Implementa inserir_arvore
Arvore* inserir_arvore(Arvore *raiz, int valor){
    // Primeiro, verifica se o elemento existe na árvore, em baso afirmativo, não realiza inserção
    if(busca_elemento(raiz, valor)){
        printf("Elemento ja existe na arvore.\n");
        return raiz; // devolve a raiz inalterada
    }
    // Caso a árvore esteja vazia: caso base da recursão
    if(arvore_vazia(raiz)){
        // Cria variável que representa novo nó a ser inserido:
        Arvore *novo = (Arvore*) malloc(sizeof(Arvore));
        // Verifica se alocação foi bem sucedida
        if(!novo){
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
        // constrói novo nó-folha
        novo->esquerda = NULL;
        novo->info = valor;
        novo->direita = NULL;

        printf("Elemento inserido com sucesso.\n");

        return novo;
    }
    // Caso recursivo: 
    if( valor < raiz->info )
        raiz->esquerda = inserir_arvore(raiz->esquerda, valor);
    else
        raiz->direita = inserir_arvore(raiz->direita, valor);

    // Como a AVL balanceia árvore a cada inserção, deve-se verificar se o balanceamento é necessário
    int balancelamento = fator_balanceamento(raiz);

    // etpaa de balanceamento
    if(balancelamento > 1 || balancelamento < -1)
       raiz = balancear_arvore(raiz, balancelamento);
    

    return raiz; // retorna raiz inalterada.

}
// Implementa insercao_nao_recursiva
void insercao_nao_recursiva(Arvore **raiz, int valor){
    // Verifica se o elemento já existe na árvore
    if(busca_elemento(*raiz, valor)){
        printf("Elemento existe na arvore.\n");
        return;
    }
    // construcao do novo nó-folha
    Arvore* novo = (Arvore*) malloc(sizeof(Arvore));
    if(!novo){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }
    novo->esquerda = NULL;
    novo->info = valor;
    novo->direita = NULL;
    // Caso a arvore esteja vazia:
    if(arvore_vazia(*raiz)){
        *raiz = novo;
        printf("Elemento inserido com sucesso.\n");
        return;
    } 
    // Variavéis para percorrer árvore:
    Arvore *auxiliar = *raiz;
    Arvore *pai = NULL;
    // percorre árvore
    while(auxiliar != NULL){
        pai = auxiliar;

        if(valor < auxiliar->info)
            auxiliar = auxiliar->esquerda;
        else
            auxiliar = auxiliar->direita;
    }
    // Faz inserção após chegar na fola
    if(valor < pai->info)
        pai->esquerda = novo;
    else
        pai->direita = novo;

    // Etapa de balanceamento
    int balanceamento = altura_arvore((*raiz)->esquerda) - altura_arvore((*raiz)->direita);

    if(abs(balanceamento) > 1)
        *raiz = balancear_arvore(*raiz, balanceamento);


    printf("Elemento inserido com sucesso.\n");
    return;
}

// Implementa arvore_vazia()
int arvore_vazia(Arvore *raiz){
    return raiz == NULL; // se a raiz for nula, a árvore está vazia.
}
// Implementa exibir_prefix()
void exibir_prefix(Arvore *raiz){
    // Primeira, vefifica se a árvore está vaiza
    if(arvore_vazia(raiz)){
        return;
    }
    // Caso a arvore não esteja vazia, exibe a árvore em ordem pré-fixada:
    printf("%d ", raiz->info);
    exibir_prefix(raiz->esquerda);
    exibir_prefix(raiz->direita);

}
// Implementa exibir_infix()
void exibir_infix(Arvore *raiz){
    // Primeiro, verifica se a árvore está vazia:
    if(arvore_vazia(raiz)){
        return;
    }
    // Caso a árvore não esteja vazia, exibe a árvore em ordem infixada
    exibir_infix(raiz->esquerda);
    printf("%d ", raiz->info);
    exibir_infix(raiz->direita);
    
}
// Implementa exibir_posfix
void exibir_posfix(Arvore *raiz){
    // Primeiro, verifica se a árvore está vazia:
    if(arvore_vazia(raiz)){
        return;
    }
    // Caso a árvore não esteja vazia, exibe a árvore em ordem pós-fixada
    exibir_posfix(raiz->esquerda);
    exibir_posfix(raiz->direita);
    printf("%d ", raiz->info);

}
// Implementa busca_elemento()
int busca_elemento(Arvore *raiz, int valor){
    // Primeiro, verifica se a árvore está vazia:
    if(arvore_vazia(raiz))
        return 0;
    // Caso a árvore não esteja vazia, percorre até achar elemento:
    return raiz->info == valor || busca_elemento(raiz->esquerda, valor) || busca_elemento(raiz->direita, valor);

}
// Implementa libera_arvore()
Arvore* libera_arvore(Arvore *raiz){
    // verifica se a árvore NÃO ESTÁ VAZIA
    if(!arvore_vazia(raiz)){
        raiz->esquerda = libera_arvore(raiz->esquerda); // libera recursivamente
        raiz->direita = libera_arvore(raiz->direita); // libera recursivamente

        free(raiz); // libera raiz.
    }

    return NULL; // retorna NULL, indicando árvore raiz vazia.
}
// Implementa altura_arvore()
int altura_arvore(Arvore *raiz){
    // Verifica se a árvore está vazia
    if(arvore_vazia(raiz))
        return 0;

    int alturaEsquerda = altura_arvore(raiz->esquerda); // chamada recursiva
    int alturaDireita = altura_arvore(raiz->direita); // chamada recursiva
 
    return (alturaEsquerda > alturaDireita ? alturaEsquerda : alturaDireita) + 1;

}
// Implementa nos_arvore
int nos_arvore(Arvore *raiz){
    // Verifica se árvore está vazia
    if(arvore_vazia(raiz))
        return 0;


    return 1 + nos_arvore(raiz->esquerda) + nos_arvore(raiz->direita);
}
// Implementa fator_balanceamento
int fator_balanceamento(Arvore *raiz){
    // se a árvore estiver vazia, o fator de balanceamento é 0
    if(arvore_vazia(raiz))
        return 0;
    // Caso não esteja, é dado por alturaEsquerda - alturaDireita
    int alturaEsquerda = altura_arvore(raiz->esquerda);
    int alturaDireita = altura_arvore(raiz->direita);

    return alturaEsquerda - alturaDireita;

}
// Implementa rotacao_esquerda
Arvore* rotacao_esquerda(Arvore *raiz){
    // Cria nó auxiliar para realizar rotação
    Arvore* no;
    // Realiza rotação:
    no = raiz->direita;
    raiz->direita = no->esquerda;
    no->esquerda = raiz;
    raiz = no;
    
    return raiz;

}
// Implementa rotaçao_direita
Arvore* rotacao_direita(Arvore *raiz){
    // Cria nó auxiliar para realizar rotação
    Arvore* no;
    // realiza rotação
    no = raiz->esquerda;
    raiz->esquerda = no->direita;
    no->direita = raiz;
    raiz = no;

    return raiz;

}
// Implementa balancear_arvore()
Arvore* balancear_arvore(Arvore *raiz, int fatorBalanceamento) {

    // Pesado à esquerda
    if (fatorBalanceamento > 1) {
        int fatorFilhoEsquerdo = fator_balanceamento(raiz->esquerda);

        if (fatorFilhoEsquerdo >= 0) {
            // Rotação simples à direita
            return rotacao_direita(raiz);
        } else {
            // Rotação dupla: esquerda no filho, depois direita na raiz
            raiz->esquerda = rotacao_esquerda(raiz->esquerda);
            return rotacao_direita(raiz);
        }
    }

    // Pesado à direita
    if (fatorBalanceamento < -1) {
        int fatorFilhoDireito = fator_balanceamento(raiz->direita);

        if (fatorFilhoDireito <= 0) {
            // Rotação simples à esquerda
            return rotacao_esquerda(raiz);
        } else {
            // Rotação dupla: direita no filho, depois esquerda na raiz
            raiz->direita = rotacao_direita(raiz->direita);
            return rotacao_esquerda(raiz);
        }
    }

    // Já balanceada
    return raiz;
}
// Implementa remove_folha()
Arvore* remove_folha(Arvore* raiz, int valor) {
    if (arvore_vazia(raiz)) {
        return NULL;
    }

    // Busca nó recursivamente
    if (valor < raiz->info) 
        raiz->esquerda = remove_folha(raiz->esquerda, valor);
    else if (valor > raiz->info) 
        raiz->direita = remove_folha(raiz->direita, valor);
    else {
        // achou o nó
        if (raiz->esquerda == NULL && raiz->direita == NULL) {
            free(raiz);
            printf("Folha removida com sucesso.\n");

            return NULL;
        } else {
            printf("No encontrado, mas nao eh folha, nenhuma remocao.\n");
        }
    }

    // Testa se árvore está balanceada:
    int fb = fator_balanceamento(raiz);

    // realiza balanceamento caso necessário:
    if (abs(fb) > 1)
        return balancear_arvore(raiz, fb);

    return raiz;
}


typedef struct lista{
    char vertice;
    int peso;
    struct lista *proximo;
} Lista;

typedef struct lista_adj{
    char vertice;
    Lista *relacionado;
    struct lista_adj *proximo;
} Lista_adj;