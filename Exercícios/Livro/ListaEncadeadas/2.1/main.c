/*

    Enunciado: Implemente uma função que tenha como valor de retorno o comprimento
    de uma lista encadeada, isto é, que calcule o número de nós de uma lista. Essa
    função deve obedecer ao protótipo:


                int comprimento (Lista 1);

*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void){
    No *l;

    cria_lista(&l);
    inserir_inicio(&l, 1);
    inserir_fim(&l, 2);
    inserir_inicio(&l, 3);

    printf("%d\n", comprimento(l));




    return 0;

}