/*
    Programa principal para testar a implementação da Árvore Binária
    Autor: João Victor Oliveira
    Data: 30/08/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

int main() {
    /*     Cria uma árvore simples:
                  10
                /    \
              12       20
             / \     /  \
            4   7   15   25
    */

    Arvore* a = cria_arvore(
        10,
        cria_arvore(
            12,
            cria_arvore(4, NULL, NULL),
            cria_arvore(7, NULL, NULL)
        ),
        cria_arvore(
            20,
            cria_arvore(15, NULL, NULL),
            cria_arvore(25, NULL, NULL)
        )
    );

    Arvore* b = cria_arvore(
        10,
        cria_arvore(
            11,
            cria_arvore(4, NULL, NULL),
            cria_arvore(7, NULL, NULL)
        ),
        cria_arvore(
            20,
            cria_arvore(15, NULL, NULL),
            cria_arvore(25, NULL, NULL)
        )
    );

    // Exibe árvore em pré-ordem
    printf("Exibindo arvore (pre-ordem): ");
    exibir_arvore(a);
    printf("\n");

    printf("Exibindo arvore (pre-ordem): ");
    exibir_arvore(b);
    printf("\n");

    if(igual(a, b))
        printf("Arvores iguais.\n");
    else
        printf("Arvores diferentes");

    return 0;
}