/*
    Arquivo relacionado às chamadas da função de lista circular com vetor.
    Data: 16-08-2025


    Autor: João Victor Oliveira

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularVetor.h"

// Main
int main(void){
    ListaCircular l;

    cria_lista(&l);
    inserir_inicio(&l, 1);
    inserir_inicio(&l, 2);
    inserir_inicio(&l, 3);
    inserir_fim(&l, 4);
    inserir_fim(&l, 6);
    exibir_lista(l);

    remove_inicio(&l);
    exibir_lista(l);
    remove_inicio(&l);
    exibir_lista(l);
    remove_final(&l);
    exibir_lista(l);
    
    return 0;

}