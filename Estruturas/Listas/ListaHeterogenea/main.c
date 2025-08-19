/*
    Arquivo referente à chamada das funções relacionadas à monipulação de listas heterogêneas.
    Data: 18-08-2025

    Autor: João Victor Oliveira.


*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaHeterogenea.h"

// MAIN
int main(void){
    No *l;

    cria_lista(&l);
    insere_inicio(&l, 1);
    insere_fim(&l, 1);
    insere_inicio(&l, 3);
    remove_inicio(&l);
    remove_fim(&l);

    exibir_lista(l);




    return 0;
}