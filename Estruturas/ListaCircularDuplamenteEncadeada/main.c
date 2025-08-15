/*
    Arquivo relacionado às chamadas das funções para manipulação de lista duplamente encadeada.
    data: 19-07-2025.


    Autor: João Victor Oliveira.

*/




#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularDuplamenteEncadeada.h"


int main() {
    No *lista;

    // 1. Cria a lista
    cria_lista(&lista);

    // 2. Inserir elementos no início
    inserir_inicio(&lista, 10);
    inserir_inicio(&lista, 5);
    exibir_lista(lista);              // Esperado: [5, 10]
    exibir_lista_inversa(lista);      // Esperado: [10, 5]

    // 3. Inserir elementos no fim
    inserir_fim(&lista, 20);
    inserir_fim(&lista, 30);
    exibir_lista(lista);              // Esperado: [5, 10, 20, 30]
    exibir_lista_inversa(lista);      // Esperado: [30, 20, 10, 5]

    // 4. Inserir no meio
    inserir_meio(&lista, 15, 10);    // Insere 15 após 10
    exibir_lista(lista);              // Esperado: [5, 10, 15, 20, 30]

    // 5. Remover início
    remover_inicio(&lista);
    exibir_lista(lista);              // Esperado: [10, 15, 20, 30]

    // 6. Remover fim
    remover_fim(&lista);
    exibir_lista(lista);              // Esperado: [10, 15, 20]

    // 7. Remover meio
    remover_meio(&lista, 15);
    exibir_lista(lista);              // Esperado: [10, 20]

    // 8. Tentar remover valor que não existe
    remover_meio(&lista, 50);         // Deve imprimir: Valor nao encontrado.

    // 9. Esvaziar a lista
    esvaziar_lista(&lista);
    exibir_lista(lista);              // Esperado: Lista vazia.

    return 0;
}