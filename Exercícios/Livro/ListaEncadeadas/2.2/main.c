/*

    Enunciado:  Considere listas encadeadas de valores inteiros e implemente uma função
                para retornar o número de nós da lista que possuem o campo info com valores
                maiores do que n. Essa função deve obedecer ao protótipo:
    
                            int maiores (Lista* 1, int n);

*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void){
    No* l;

    cria_lista(&l);
    inserir_inicio(&l, 1);
    inserir_inicio(&l, 2);
    inserir_inicio(&l, 3);

    printf("Maiores que -2: %d\n", maiores(l, -2));






    return 0;
}