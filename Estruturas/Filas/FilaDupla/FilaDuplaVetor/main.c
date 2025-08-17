/*
    Arquivo relacionado às chamadas das funções para manipulação de fila dupla em vetor.
    data: 15-08-2025.


    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "FilaDuplaVetor.h"

// MAIN:
int main(void){
    Fila *f;

    // Cria a fila
    cria_fila(&f);

    // Insere elementos
    inserir_fila_inicio(f, 10);
    inserir_fila_inicio(f, 20);
    inserir_fila_inicio(f, 30);
    inserir_fila_fim(f, 40);
    exibir_fila(f);
    remove_fila_inicio(f);
    exibir_fila(f);
    remove_fila_final(f);
    exibir_fila(f);
   
    return 0;
}