/* Exercício 1.2. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado: Implemente uma função que retorne a soma dos n primeiros números naturais ímpares. Essa função deve obedecer ao protótipo:
                            
                                                        int soma_impares (int n);
   
   Autor: João Victor Oliveira
*/
#include <stdio.h>

int soma_impares (int n);

int main(void){
    int nImpares; 

    printf("Digite o numero: ");
    scanf("%d", &nImpares);

    int resultado = soma_impares(nImpares);

    printf("Soma dos %d primeiros impares: %d\n", nImpares, resultado);

    return 0;
}

int soma_impares(int n){
    int soma = 0, qtdImpares = 0, i = 1;

    while( qtdImpares < n){

        if( i % 2 != 0){
            qtdImpares++;
            soma += i;
        }

        i++;

    }


    return soma;
}