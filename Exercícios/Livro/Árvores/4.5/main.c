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
              5       20
             / \     /  \
            3   7   15   25 
    */

    Arvore* a = cria_arvore(
        10,
        cria_arvore(
            5,
            cria_arvore(3, NULL, NULL),
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

    Arvore* b = copia_arvore(a);
    printf("Exibindo arvore (pre-ordem): ");
    exibir_arvore(b);
    printf("\n");


    return 0;
}