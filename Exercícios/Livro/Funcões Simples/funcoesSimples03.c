/* Exercício 1.2. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado: Implemente uma função que retorne o n-ésimo termo da série de Fibonacci. 
              A série de Fibonacci é dada por: 1 12 3 5 8 13 21 ..., isto é, os dois primeiros termos são iguais a 1 e cada termo seguinte é a soma dos dois termos anteriores. 
              Essa função deve obedecer ao protótipo:

                                            int fibonacci (int n)
   
   Autor: João Victor Oliveira
*/
#include <stdio.h>

int fibonacci (int n);

int main(void){
    int n;

    printf("Digite o termo desejado da sequencia de fibonacci: ");
    scanf("%d", &n);

    int termo = fibonacci(n);

    printf("\nTermo %d da sequencia de fibonacci: %d\n", n, termo);

    return 0;

}

int fibonacci (int n){
    int a = 0, b = 1, c;

    // Importante diferenciar n-- e --n aqui. Caso seja utilizado o primeiro, será feita uma iteração a mais, o que é indesejado
    while(--n){
        c = a + b;
        a = b;
        b = c;
    }    

    return c; 

}