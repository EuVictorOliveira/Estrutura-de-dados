/* Código referente ao exercício 14 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faca um programa que leia dois numeros N e M: 

                    • Crie e leia uma matriz N x M de inteiros;
                    • Crie e construa uma matriz transposta M x N de inteiros.
                    • Mostre as duas matrizes.

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int** matriz;
    int** transposta;
    int N, M;

    printf("informe o valor de N: ");
    scanf("%d", &N);
    printf("Informe o valor de M: ");
    scanf("%d", &M);

    matriz = (int**) malloc(N*sizeof(int*));
    if(!matriz){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < N; i++){
        matriz[i] = (int*) malloc(M*sizeof(int));
        if(!matriz[i]){
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("Informe M(%d, %d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    transposta = (int**) malloc(M*sizeof(int*));
    if(!transposta){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i = 0; i < M; i++){
        transposta[i] = (int*) malloc(N*sizeof(int));
        if(!transposta[i]){
            printf("Erro ao alocar memoria.\n");
            return 1;
        }
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("MATRIZ ORIGINAL\n");
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    printf("MATRIZ TRANSPOSTA\n");
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", transposta[i][j]);
        }

        printf("\n");
    }

    for(int i = 0; i < N; i++)
        free(matriz[i]);

    free(matriz);

    for(int i = 0; i < M; i++)
        free(transposta[i]);

    free(transposta);

    return 0;

}