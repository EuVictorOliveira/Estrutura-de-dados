/*
    Arquivo: main.c
    Teste das funções da Árvore Binária
    Autor: João Victor Oliveira
    Data: 30/08/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

/*

            50    // estrutura da árvore
          /   \
        30    70
       /  \  /  \
      20  40 60  80
                  \
                  90
                   \
                   100
                    \ 
                    110
*/

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
    inserir_arvore(&raiz, 90);
    inserir_arvore(&raiz, 100);
    inserir_arvore(&raiz, 110);

    printf("\nArvore em pre-ordem: ");
    exibir_arvore_prefix(raiz);

    printf("\nArvore em infix-ordem: ");
    exibir_arvore_infix(raiz);
   
    printf("\nArvore em pos-ordem: ");
    exibir_arvore_posfix(raiz);
    
    printf("\nAltura da arvore: %d\n", altura_arvore(raiz));
    printf("Numero de nos da arvore: %d\n", nos_arvore(raiz));

    return 0;
}
