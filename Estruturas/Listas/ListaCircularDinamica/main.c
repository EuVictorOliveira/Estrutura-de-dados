#include <stdio.h>
#include <stdlib.h>
#include "ListaCircularDinamica.h"

int main() {
    No *lista;
    
    // Cria a lista
    cria_lista(&lista);

    // Testa inserções
    inserir_inicio(&lista, 10);
    inserir_inicio(&lista, 5);
    inserir_fim(&lista, 20);
    inserir_meio(&lista, 15, 10); // insere 15 depois do 10

    // Exibe lista
    printf("Lista apos insercoes:\n");
    exibir_lista(lista); // Esperado: 5 10 15 20

    // Testa remoções
    remover_meio(&lista, 15); // remove 15
    printf("Lista apos remover 15:\n");
    exibir_lista(lista); // Esperado: 5 10 20

    remover_fim(&lista); // remove 20
    printf("Lista apos remover fim:\n");
    exibir_lista(lista); // Esperado: 5 10

    // Tenta remover valor não existente
    remover_meio(&lista, 100); // não existe
    printf("Lista apos tentar remover 100:\n");
    exibir_lista(lista); // Esperado: 5 10

    // Esvazia a lista
    esvaziar_lista(&lista);
    printf("Lista apos esvaziar:\n");
    exibir_lista(lista); // Esperado: Lista vazia

    return 0;
}
