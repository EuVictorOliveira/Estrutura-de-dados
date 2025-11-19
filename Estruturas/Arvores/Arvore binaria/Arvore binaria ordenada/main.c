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
    raiz = inserir_arvore_recursisva(raiz, 50);
    inserir_arvore(&raiz, 30);
    raiz = inserir_arvore_recursisva(raiz, 70);
    raiz = inserir_arvore_recursisva(raiz, 20);
    raiz = inserir_arvore_recursisva(raiz, 40);
    raiz = inserir_arvore_recursisva(raiz, 60);
    raiz = inserir_arvore_recursisva(raiz, 80);
    raiz = inserir_arvore_recursisva(raiz, 90);
    raiz = inserir_arvore_recursisva(raiz, 100);
  


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
