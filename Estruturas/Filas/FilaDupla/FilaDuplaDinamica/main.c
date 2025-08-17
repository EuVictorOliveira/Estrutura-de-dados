/*
    Arquivos relacionado às chamadas das funções que implementam fila dupla dinâmica
    data: 16-08-2025

    autor: João Victor Oliveira.

*/

#include <stdio.h>
#include <stdlib.h>
#include "FilaDuplaDinamica.h"

int main() {
    Fila *f;  // ponteiro para a fila

    cria_fila(&f);

    printf("Inserindo elementos na fila:\n");
    insere_fila_inicio(f, 10);
    insere_fila_inicio(f, 20);
    insere_fila_final(f, 30);
    insere_fila_final(f, 40);
    exibir_fila(f);

    remove_fila_inicio(f);
    exibir_fila(f);
    remove_fila_final(f);
    
    exibir_fila(f);

    

    return 0;
}