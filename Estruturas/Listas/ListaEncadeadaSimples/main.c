/*
    Arquivo relacionado às chamadas das funções para manipulação de lista encadeada.
    data: 19-07-2025.




    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

// MAIN
int main(void){
    No *l; // Declara ponteiro para nó.
    No *l2;

    cria_lista(&l); // Passa o endereço do ponteiro.
    // Chamando função de inserção no início.
  

    inserir_fim(&l, 1);
    inserir_fim(&l, 2);
    inserir_fim(&l, 3);
    inserir_fim(&l, 4);
    inserir_fim(&l, 5);
    inserir_fim(&l, 6);
    inserir_fim(&l, 7);
    inserir_fim(&l, 8);

    exibir_lista(l);
    remover_meio(&l, 5);
    exibir_lista(l);
    remover_meio(&l, 10);
    exibir_lista(l);
    remover_meio(&l, 8);
    exibir_lista(l);
    remover_meio(&l, 2);
    exibir_lista(l);


    return 0;
}