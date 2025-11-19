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
            4   NULL   15   NULL
    */

    Arvore* raiz = cria_arvore(
        10,
        cria_arvore(
            12,
            cria_arvore(4, NULL, NULL),
            NULL
        ),
        cria_arvore(
            20,
            cria_arvore(15, NULL, NULL),
            NULL
        )
    );

    // Exibe árvore em pré-ordem
    printf("Exibindo arvore (pre-ordem): ");
    exibir_arvore(raiz);
    printf("\n");

    printf("Quantidade de pais com um unico filho: %d\n", um_filho(raiz));

    return 0;
}