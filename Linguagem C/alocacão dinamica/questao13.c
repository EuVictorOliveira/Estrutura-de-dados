/* Código referente ao exercício 13 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado:  Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensoes 
                definidas pelo usuario e a leia. Em seguida, implemente uma funcao que receba um 
                valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso nao esteja na matriz
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int Verifica_valor(int** matriz, int linhas, int colunas, int valor);

int main(void){
    int** matriz;
    int nLinhas, nColunas;
    int n;

    printf("Informe o numero de linhas da matriz: ");
    scanf("%d", &nLinhas);

    printf("Informe o numero de colunas da matriz: ");
    scanf("%d", &nColunas);

    matriz = (int **) malloc(nLinhas*sizeof(int*));
    if(!matriz){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < nLinhas; i++){
        matriz[i] = (int *) malloc(nColunas*sizeof(int));
        if(!matriz[i]){
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("Informe elemento M(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
    printf("Informe o valor que deseja procurar: ");
    scanf("%d", &n);

    int resultado = Verifica_valor(matriz, nLinhas, nColunas, n);

    if(resultado){
        printf("Valor encontrado.\n");
    }else{
        printf("Valor nao encontrado.\n");
    }

    for(int i = 0; i < nLinhas; i++)
        free(matriz[i]);


    free(matriz);

    return 0;

}

int Verifica_valor(int** matriz, int linhas, int colunas, int valor){
     for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz[i][j] == valor)
                return 1;
        }
     }
     return 0;
}