/*
    Arquivo: main.c
    Teste das funções da Árvore Binária
    Autor: João Victor Oliveira
    Data: 30/08/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

int main(){
    Arvore *raiz; // ponteiro para a raiz da árvore

    // Criar árvore
    criar_arvore(&raiz);

    // Inserir elementos
    inserir_arvore(&raiz, 50);
    inserir_arvore(&raiz, 30);
    inserir_arvore(&raiz, 70);
    inserir_arvore(&raiz, 20);
    inserir_arvore(&raiz, 40);
    inserir_arvore(&raiz, 60);
    inserir_arvore(&raiz, 80);

    printf("\nArvore em pre-ordem: ");
    exibir_arvore(raiz);
    printf("\n");

    // Buscar elementos
    int valor = 40;
    if(buscar_elemento(raiz, valor))
        printf("Elemento %d encontrado na arvore.\n", valor);
    else
        printf("Elemento %d NAO encontrado na arvore.\n", valor);

    valor = 90;
    if(buscar_elemento(raiz, valor))
        printf("Elemento %d encontrado na arvore.\n", valor);
    else
        printf("Elemento %d NAO encontrado na arvore.\n", valor);

    // Liberar memória
    liberar_arvore(&raiz);

    if(arvore_vazia(raiz))
        printf("\narvore liberada com sucesso.\n");

    return 0;
}
