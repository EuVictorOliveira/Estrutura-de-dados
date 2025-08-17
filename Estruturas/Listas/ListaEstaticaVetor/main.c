/*
    Arquivo referente à testes das funções de manipulação
    de listas estáticas com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025

 */
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaEstatica.h"

// MAIN
int main(void){
    Lista l;

    cria_lista(&l);
    insere_inicio(&l, 1);
    insere_inicio(&l, 2);
    insere_final(&l, 4);
    exibir_lista(l);








    return 0;
}

