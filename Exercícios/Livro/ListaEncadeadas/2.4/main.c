/*
    Enunciado:  Implemente uma função que receba duas listas encadeadas de valores reais
                e retorne a lista resultante da concatenação das duas listas recebidas como parâmetros, 
                isto é, após a concatenação, o último elemento da primeira lista deve
                apontar para o primeiro elemento da segunda lista, conforme ilustrado a seguir:

                Lista* concatena (Lista* 11, Lista* 12):

*/
#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int main(void){
    No *l1;
    No *l2;


    cria_lista(&l1);
    cria_lista(&l2);

    inserir_fim(&l1, 1);
    inserir_fim(&l1, 2);
    inserir_fim(&l2, 3);
    inserir_fim(&l2, 4);


    exibir_lista(l1);
    exibir_lista(l2);

    No *l3 = concatena(l1, l2);
    exibir_lista(l3);
    exibir_lista(l1);
    exibir_lista(l2);



    return 0;

}