/* Exercício 3.4. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 19/07/2025

   Enunciado: Implemente uma função que permita a avaliação de polinômios. Cada polinômio é definido por um vetor que contém seus coeficientes. Por exemplo, o
              polinômio de grau 2, 3x²+2x+12, terá um vetor de coeficientes igual a v[ ]=(12,2,3). A função deve obedecer ao protótipo:

                                        double avalia (double* poli, int grau, double x);


   Autor: João Victor Oliveira.
*/
// CABEÇALHO:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// PROTÓTIPOS:
double avalia(double* poli, int grau, double x);

// MAIN:
int main(void){
    double *v, x;
    int grau;

    // Lê o grau do polinômio.
    printf("Infome o grau do polinomio: ");
    scanf("%d", &grau);


    // Aloca vetor de tamanho grau+1.
    v = (double *) malloc(++grau*sizeof(double));
    // Verifica se houve erro na alocação
    if(!v){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Lê polinômio. Se beneficia do buffer.
    printf("Informe os coeficientes do polinomio: ");
    for(int i = 0; i < grau; i++){
        scanf("%lf", &v[i]);
    }
    
    // Lê o valor de x
    printf("Informe o valor de x: ");
    scanf("%lf", &x);

    // Chama a função avalia().
    double resultado = avalia(v, grau, x);

    printf("p(%.2lf) = %.2lf\n", x, resultado);

    free(v); // Libere memória alocada.

    return 0;

}

// Implementa avalia().
double avalia(double *poli, int grau, double x){
    double resultado = 0.0; // variável a ser retornada pela função

    for(int i = 0; i < grau; i++)
        resultado += (poli[i] * pow(x,i));   

    return resultado;

}

