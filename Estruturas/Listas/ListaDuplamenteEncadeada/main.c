/*
    Arquivo relacionado às chamadas das funções para manipulação de lista duplamente encadeada.
    data: 19-07-2025.


    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaDuplamenteEncadeada.h"

// Main
int main(void){
    No *l;

    criar_lista(&l);
    inserir_inicio(&l, 10);
    inserir_inicio(&l, 20);
    inserir_inicio(&l, 30);
    exibir_lista(l);
    exibir_lista_inverso(l);


    return 0;
}