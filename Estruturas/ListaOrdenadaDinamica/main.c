/*
    Arquivo relacionado às chamadas das funções para manipulação de lista ordenada dinamica.
    data: 16-08-2025.


    Autor: João Victor Oliveira.
    NOTA: USAR SEMPRE INSERIR().

*/


#include <stdio.h>
#include <stdlib.h>
#include "ListaOrdenadaDinamica.h"  

int main(void){
    No *lp;

    criar_lista(&lp);

    printf("Inserindo elementos...\n");
    inserir(&lp, 12);
    inserir(&lp, 5);
    inserir(&lp, 18);
    inserir(&lp, 3);
    inserir(&lp, 25);
    inserir(&lp, 7);
    inserir(&lp, 10);
    inserir(&lp, 1);
    inserir(&lp, 20);
    inserir(&lp, 15);
    inserir(&lp, 8);
    inserir(&lp, 22);
    inserir(&lp, 2);
    inserir(&lp, 17);
    inserir(&lp, 13);
    inserir(&lp, 9);
    inserir(&lp, 30);
    inserir(&lp, 6);
    inserir(&lp, 11);
    inserir(&lp, 4);


    printf("Lista final:\n");
    exibir_lista(lp);

    return 0;
}