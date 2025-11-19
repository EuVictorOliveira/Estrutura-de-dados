/* Código referente ao exercício 10 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faca um programa que pergunte ao usuario quantos valores ele deseja armazenar em 
               um vetor de double, depois use a funcao MALLOC para reservar (alocar) o espaco de 
               memoria de acordo com o especificado pelo usuario. Esse vetor deve ter um tamanho 
               maior ou igual a 10 elementos. Use este vetor dinamico como um vetor comum, atribuindo aos 
               10 primeiros elementos do vetor valores aleatorios (usando a funcao rand) 
               entre 0 e 100. Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanhoVetor;
    double *p;

    printf("Informe o numero de elementos do vetor: ");
    scanf("%d", &tamanhoVetor);

    p = (double *) malloc(tamanhoVetor*sizeof(double));
    if(!p){
        printf("Erro ao alocar memoria.\n");
        return 0;
    }

    for(int i = 0; i < 10; i++){
        p[i] = rand() % 100;
    }

    printf("10 primeiros elementos: ");
    for(int i = 0; i < 10; i++){
        printf("%.2lf ", p[i]);
    }

    free(p);
    printf("\n");

    return 0;

}