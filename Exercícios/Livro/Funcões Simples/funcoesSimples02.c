/* Exercício 1.2. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado: Implemente uma função para testar se um número inteiro é primo ou não.
              Essa função deve obedecer ao protótipo a seguir e ter como valor de retorno 1 se
              n for primo e 0 caso contrário. Protótipo:
              
                                        int primo (int n);

   Autor: João Victor Oliveira
*/
#include <stdio.h>

int primo (int n);

int main(void){
    int n;

    printf("Informe o numero que deseja verificar: ");
    scanf("%d", &n);

    int resultado = primo(n);

    if(resultado)
        printf("%d eh primo\n", n);
    else
        printf("%d nao eh primo\n", n);

    return 0;
}

int primo (int n){

    for(int i = 2; i < n; i++)
        if( n % i == 0)
            return 0; // retorna 0 assim que identifica um divisor diferente de 1 ou n

    return 1;

}