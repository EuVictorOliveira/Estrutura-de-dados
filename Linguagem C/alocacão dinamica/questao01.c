/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Crie um programa que:
                (a) Aloque dinamicamente um array de 5 números inteiros, 
                (b) Peçã para o usuario digitar os 5 números no espaço alocado, 
                (c) Mostre na tela os 5 números, 
                (d) Libere a memoria alocada
     
   Autor: João Victor Oliveira
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *p;

    p = (int*) malloc(5*sizeof(int));
    if(p == 0){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o inteiro %d: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("Numeros lidos: \n");

    for(int i = 0; i < 5; i++){
        printf("%d\n", p[i]);
   
    }

    free(p);

    return 0;
}