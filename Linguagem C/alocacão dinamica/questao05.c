/* Código referente ao exercício 05 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faca um programa que leia um numero N e: 
                • Crie dinamicamente e leia um vetor de inteiro de N posições;
                • Leia um numero inteiro X e conte e mostre os multiplos desse numero que existem no vetor.
     
   Autor: João Victor Oliveira
*/
#include <stdlib.h>
#include <stdio.h>

int main(void){
    int n, x, multiplos = 0;

    printf("Informe n: ");
    scanf("%d", &n);

    int* p = (int*) malloc(n*sizeof(int));
    if(!p){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Informe o numero %d: ", i+1);
        scanf("%d", &p[i]);
    }

    printf("Informe x: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++){
        if(p[i] % x == 0)
            multiplos++;
    }

    printf("Qtd de multiplos de %d: %d\n", x, multiplos);

    free(p);

    return 0;

}