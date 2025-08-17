/*
    Arquivos relacionado às chamadas das funções que implementam fila dinamica
    data: 16-08-2025

    autor: João Victor Oliveira.

*/

#include <stdio.h>
#include <stdlib.h>
#include "FilaDinamica.h"

int main() {
    Fila *f;  // ponteiro para a fila

    cria_fila(&f);

    printf("Inserindo elementos na fila:\n");
    insere_fila(f, 10);
    insere_fila(f, 20);
    insere_fila(f, 30);
    insere_fila(f, 40);
    
    exibir_fila(f);

    

    return 0;
}