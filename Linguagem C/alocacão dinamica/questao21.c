/* Código referente ao exercício 21 da lista de alocação dinâmica(10) 
   Dia 14-07-2025

    Enunciado: Faca um programa que leia quatro numeros a, b, c e d, que serao as dimensoes de duas 
               matrizes, e:

                • Crie e leia uma matriz, dadas as dimensoes dela; 

                • Crie e construa uma matriz que seja o produto de duas matrizes. Na sua funcao
                  main(), imprima as duas matrizes e o produto entre elas, se existir.

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

// PROTÓTIPOS:

// Protótipo de função para criação de matriz alocada dinamicamente.
int** Cria_matriz(int nLinhas, int nColunas);
// Protótipo da função de leitura.
void Le_matriz(int** matriz, int nLinhas, int nColunas);
// Protótipo da função para impressão de matriz.
void Imprime_matriz(int** matriz, int nLinhas, int nColunas);
// Protótipo da função de preenchimento da matriz produto.
void Produto_matrizes(int** matriz01, int** matriz02, int** matrizProduto, int a, int b, int d);
// Protótipo da função para liberação de memória alocada.
void Libera_memoria(int** matriz, int a);

int main(void){
    int a, b, c,d;
    int** matriz01;
    int** matriz02;


    // Lê informações da matriz 01.
    printf("Informe as dimensoes da matriz 01: ");
    scanf("%d %d", &a, &b);

    // Cria matriz 01 e faz leitura dos dados.
    matriz01 = Cria_matriz(a, b);
    Le_matriz(matriz01, a, b);

    // Lê informações da matriz 02.
    printf("Informe as dimensoes da matriz 02: ");
    scanf("%d %d", &c, &d);

    // Cria matriz 02 e faz leitura dos dados.
    matriz02 = Cria_matriz(c, d);
    Le_matriz(matriz02, c, d);

    // Imprime matriz 01
    printf("====MATRIZ 01====\n");
    Imprime_matriz(matriz01, a, b);
    // Imprime matriz 02
    printf("====MATRIZ 02====\n");
    Imprime_matriz(matriz02, c, d);
    

    // ETAPA DE CRIAÇÃO DA MATRIZ PRODUTO.
    // Verifica se o produto é possível, ou seja, se o número de colunas da matriz 01 é igual ao número de linhas da matriz 02.
    if(b != c){
        printf("\nErro. Nao eh possivel realizar o produto entre as matrizes");
        Libera_memoria(matriz01, a);
        Libera_memoria(matriz02, c);
        return 1;
    }

    // Cria matriz de dimensões a x d.
    int** matrizProduto = Cria_matriz(a, d);
    // Realiza produto entre as matrizes.
    Produto_matrizes(matriz01, matriz02, matrizProduto, a, b, d);

    printf("====MATRIZ PRODUTO====\n");
    Imprime_matriz(matrizProduto, a, d);

    //Libera memorias alocadas.
    Libera_memoria(matriz01, a);
    Libera_memoria(matriz02, c);
    Libera_memoria(matrizProduto, a);

    return 0;
}

// Implementação da função Cria_matriz.
int** Cria_matriz(int nLinhas, int nColunas){
    int** matriz;

    // Aloca vetor de ponteiros.
    matriz = (int**) malloc(nLinhas*sizeof(int*));
    if(!matriz){
        printf("Erro ao alocar memoria.\n");
        exit(1);
    }

    // Aloca vetores de inteiros.
    for(int i = 0; i < nLinhas; i++){
        matriz[i] = (int*) malloc(nColunas*sizeof(int));
        if(!matriz[i]){
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }
    }

    // Retorna ponteiro de ponteiros.
    return matriz;
}

// Implementação da função Le_matriz.
void Le_matriz(int** matriz, int nLinhas, int nColunas){
    // Faz leitura da matriz de tamanho qualquer.
    printf("====Leitura da matriz====\n");
    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("Informe o elemento M(%d,%d): ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Implementação da função Produto_matrizes.
void Produto_matrizes(int** matriz01, int** matriz02, int** matrizProduto, int a, int b, int d){

     for(int i = 0; i < a; i++){
        for(int j = 0; j < d; j++){
            matrizProduto[i][j] = 0; // Seta 0 no elemento.
            for(int k = 0; k < b; k++){
                matrizProduto[i][j] += matriz01[i][k] * matriz02[k][j]; // Realiza operação.
            }
        }
     }

}

// Implementação da função Imprime_matriz.
void Imprime_matriz(int** matriz, int nLinhas, int nColunas){

    for(int i = 0; i < nLinhas; i++){
        for(int j = 0; j < nColunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

}

// Implementação da função Libera_memoria.
void Libera_memoria(int **matriz, int a){

    for(int i; i < a; i++)
        free(matriz[i]);
    
    free(matriz);

}
