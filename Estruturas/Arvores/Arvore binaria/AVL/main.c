/*
    Arquivo relacionado à chamadas de funções de AVL

    autor: João Victor Oliveira
    data : 06/09/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include "AVL.h"

int main(void) {
    Arvore *raiz = criar_arvore();

    // Inserindo alguns elementos
    int valores[] = {30, 10, 20, 40, 35, 50, 30, 15, 22, 105};
    int n = sizeof(valores) / sizeof(valores[0]);

    for (int i = 0; i < n; i++) {
        printf("\nInserindo %d...\n", valores[i]);
        raiz = inserir_arvore(raiz, valores[i]);
    }

    printf("\n--- TRAVESSIAS INICIAIS ---\n");
    printf("Prefixada: ");
    exibir_prefix(raiz);
    printf("\n");

    printf("Infixada : ");
    exibir_infix(raiz);
    printf("\n");

    printf("Posfixada: ");
    exibir_posfix(raiz);
    printf("\n");

    printf("\n--- OUTRAS INFORMACOES ---\n");
    printf("Altura da arvore: %d\n", altura_arvore(raiz));
    printf("Numero de nos   : %d\n", nos_arvore(raiz));
    printf("Fator bal. raiz : %d\n", fator_balanceamento(raiz));

    /* ------------------------------------------------------
       Testando remoção de folhas
       ------------------------------------------------------ */
    int remover[] = {15, 22, 35, 105, 999}; // 999 não existe
    int m = sizeof(remover) / sizeof(remover[0]);

    for (int i = 0; i < m; i++) {
        printf("\nRemovendo folha %d...\n", remover[i]);
        raiz = remove_folha(raiz, remover[i]);

        printf("Infixada apos tentativa: ");
        exibir_infix(raiz);
        printf("\n");
    }

    printf("\n--- INFORMACOES POS-REMOCAO ---\n");
    printf("Altura da arvore: %d\n", altura_arvore(raiz));
    printf("Numero de nos   : %d\n", nos_arvore(raiz));
    printf("Fator bal. raiz : %d\n", fator_balanceamento(raiz));
    // Liberando memória
    raiz = libera_arvore(raiz);
    if (raiz == NULL) {
        printf("\nArvore liberada com sucesso.\n");
    }

    return 0;
}
