/*
    Arquivo relacionado às chamadas das funções para manipulação de pilha em vetor.
    data: 15-08-2025.


    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "PilhaVetor.h"

int main(void){
    Pilha p;

    cria_pilha(&p);

    push(&p, 1);
    push(&p, 2);
    push(&p, 3);
    printf("topo: %d\n", top(&p));

    return 0;
}