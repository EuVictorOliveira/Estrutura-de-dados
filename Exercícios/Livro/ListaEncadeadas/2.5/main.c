/*

    Enunciado: Considere listas de valores inteiros e implemente uma função que receba
               como parâmetros uma lista encadeada e um valor inteiro n, retire da lista todas as
               ocorrências de n e retorne a lista resultante. Essa função deve obedecer ao protótipo:


                            Lista* retira_n (Lista* 1, int n);


*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void){
    No *l1;
 
    cria_lista(&l1);

    inserir_fim(&l1, 1);
    inserir_fim(&l1, 2);
    inserir_fim(&l1, 3);
    inserir_fim(&l1, 3);
    inserir_fim(&l1, 3);
    inserir_fim(&l1, 3);
    inserir_fim(&l1, 3);
    inserir_fim(&l1, 4);


    exibir_lista(l1);

    No *l2 = retira_n(l1, 3);
    exibir_lista(l2);


    return 0;

}