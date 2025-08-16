/*
    Arquivo referente à testes das funções de manipulação
    de listas ordenadas com vetor.

    Autor: João Victor Oliveira.
    Data: 18-07-2025


    Nota: para inserir, utilize a função inserir().
 */
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaOrdenadaVetor.h"

// MAIN
int main(void){
    Lista l;

    cria_lista(&l);
    inserir(&l, 12);
    inserir(&l, 5);
    inserir(&l, 18);
    inserir(&l, 3);
    inserir(&l, 25);
    inserir(&l, 7);
    inserir(&l, 10);
    inserir(&l, 1);
    inserir(&l, -2);
    inserir(&l, 9);
    inserir(&l, 4); // deve acusar lista cheia.
    exibir_lista(l);

    return 0;
}