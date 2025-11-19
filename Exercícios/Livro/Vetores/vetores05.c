/* Exercício 3.4. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 19/07/2025

   Enunciado: Implemente uma função que calcule a derivada de um polinômio. Cada polinômio é representado como exemplificado no exercício anterior. A função
              deve obedecer ao protótipo:


                                void deriva (double* poli, int grau, double* out);


            onde out é o vetor, de dimensão grau-1, no qual a função deve guardar os coeficientes do polinômio resultante da derivada.


   Autor: João Victor Oliveira.
*/
// CABEÇALHO:
#include <stdio.h>
#include <stdlib.h>

// PROTÓTIPO:
void deriva(double* poli, int grau, double* out);

int main(void){
    int grau;
    double* poli;
    double *derivada;

    // Lê grau do polinômio.
    printf("Informe o grau do polinomio: ");
    scanf("%d", &grau);

   

    // Aloca vetor dinamico para polinomio.
    poli = (double *) malloc(++grau*sizeof(double));
    // Verifica pedido de alocação
    if(!poli){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    int tamanhoDerivada = grau -1;;
    // Aloca vetor dinamico para deverivada.
    derivada = (double *) malloc(tamanhoDerivada*sizeof(double));
    // Verifica pedido de alocação.
    if(!derivada){
        printf("Erro ao alocar memoria.\n");
        return 2;
    }

    // Lê polinômio.
    printf("Informe os coeficientes do polinomio: ");
    for(int i = 0; i < grau; i++){
        scanf("%lf", &poli[i]);
    }

    printf("Polinomio lido: ");
    for(int i = 0; i < grau; i++){
        printf("%.2lf ", poli[i]);
    }

    printf("\n");

    deriva(poli, grau, derivada);

    printf("Coeficientes da derivada: ");
    for(int i = 0; i < tamanhoDerivada; i++){
        printf("%.2lf ", derivada[i]);
    }

    printf("\n");

    // Libera memória alocada dinamicamente.
    free(poli);
    free(derivada);


    return 0;

}

// Implementa deriva().
void deriva(double* poli, int grau, double* out){
    for(int i = 0; i < grau - 1; i++){
        out[i] = poli[i+1] * (i+1);
    }
}