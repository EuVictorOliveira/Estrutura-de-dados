/*
    Arquivo relacionado às chamadas das funções para manipulação de fila em vetor.
    data: 15-08-2025.


    Autor: João Victor Oliveira.

*/
// CABEÇALHO
#include <stdio.h>
#include <stdlib.h>
#include "FilaVetor.h"

// MAIN:
int main(void){
    Fila *f;

    // Cria a fila
    cria_fila(&f);

    // Insere elementos
    inserir_fila(f, 10);
    inserir_fila(f, 20);
    inserir_fila(f, 30);
    exibir_fila(f);

    // Remove um elemento

    // Insere mais elementos para testar circularidade
    inserir_fila(f, 40);
    inserir_fila(f, 50);
    inserir_fila(f, 60);
    exibir_fila(f);

    int removido = remove_fila(f);

    printf("Elemento removido: %d\n", removido);
    exibir_fila(f);

    removido = remove_fila(f);

    printf("Elemento removido: %d\n", removido);
    exibir_fila(f);
    // Libera a memória da fila
    libera_fila(f);

    return 0;
}