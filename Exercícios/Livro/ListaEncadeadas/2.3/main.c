/*
    Enunciado: mplemente uma função que tenha como valor de retorno o ponteiro para
               o último nó de uma lista encadeada. Essa função deve obedecer ao protótipo:



                               Lista* ultimo (Lista* 1);


*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void){
    No *l;

    cria_lista(&l);
    inserir_inicio(&l, 1);
    inserir_inicio(&l, 2);
    inserir_inicio(&l, 3);

    No *final = ultimo(l);

    printf("ultimo: %d", final->info);

    return 0;

}