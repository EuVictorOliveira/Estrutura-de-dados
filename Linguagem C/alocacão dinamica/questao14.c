/* Código referente ao exercício 14 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Construa um programa que leia o numero de linhas e de colunas de uma matriz de 
               numeros reais, aloque espaco dinamicamente para esta e a inicialize com valores fornecidos pelo usuario. 
               Ao final, o programa devera retornar a matriz na saıda padrao com layout apropriado.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nColunas, nLinhas;
    int** matriz;

    printf("Informe o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &nLinhas, &nColunas);

    matriz = (int **) malloc(nLinhas*sizeof(int*));
    if(!matriz){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < nLinhas; i++){
        matriz[i] = (int*) malloc(nColunas*sizeof(int));
        if(!matriz[i]){
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("Informe o elemento M(%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("=====MATRIZ=====\n");
    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < nLinhas; i++)
        free(matriz[i]);

    free(matriz);

    return 0;

}