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

    cria_lista(&l); // Passa o endereço do ponteiro.
    // Chamando função de inserção no início.
  
    inserir_fim(&l, 42);
    inserir_fim(&l, 60);
    inserir_fim(&l, 40);
    exibir_lista(l);
    inserir_meio(&l, 92, 66);
    exibir_lista(l);
    remover_inicio(&l);
    remover_inicio(&l);
    remover_inicio(&l);

    exibir_lista(l);
    remover_inicio(&l);
    remover_inicio(&l);
    inserir_fim(&l, 42);
    inserir_fim(&l, 60);
    inserir_fim(&l, 40);
    exibir_lista(l);
    inserir_meio(&l, 92, 66);
    exibir_lista(l);
    remover_fim(&l);
    exibir_lista(l);
    remover_fim(&l);
    exibir_lista(l);


    return 0;
}