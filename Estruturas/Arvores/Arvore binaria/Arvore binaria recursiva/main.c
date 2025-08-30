/*
    Programa principal para testar a implementação da Árvore Binária
    Autor: João Victor Oliveira
    Data: 30/08/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinRecursiva.h"

int main() {
    /*     Cria uma árvore simples:
                  10
                /    \
              5       20
             / \     /  \
            3   7   15   25 
    */

    Arvore* raiz = cria_arvore(
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
    exibir_arvore(raiz);
    printf("\n");

    // Testa busca
    int valores[] = {7, 99, 25, 1};
    for(int i = 0; i < 4; i++){
        printf("Buscando %d... %s\n", valores[i],
               busca_elemento(raiz, valores[i]) ? "Encontrado" : "Nao encontrado");
    }

    // Libera árvore
    raiz = libera_arvore(raiz);
    if(arvore_vazia(raiz)){
        printf("A arvore foi liberada corretamente.");
    }

    return 0;
}