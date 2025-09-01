/*

  Enunciado: Considere listas de valores inteiros e implemente uma função que receba
               como parâmetro uma lista encadeada e um valor inteiro n e divida a lista em duas,
               de forma à segunda lista começar no primeiro nó logo após a primeira ocorrência
               de n na lista original. A figura a seguir ilustra essa separação:

              Essa função deve obedecer ao protótipo:


                                   Lista separa (Lista* 1, int n);

              A função deve retornar um ponteiro para a segunda subdivisão da lista original, enquanto 1 deve continuar apontando para o primeiro elemento da primeira
              subdivisão da lista.


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
    No* l2 = separa(l1, 3);
    exibir_lista(l1);
    exibir_lista(l2);


    return 0;

}