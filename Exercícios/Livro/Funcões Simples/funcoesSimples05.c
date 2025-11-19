/* Exercício 1.2. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado: Implemente uma função que retorne uma aproximação do valor de p, de acordo com a fórmula de Leibniz:
                            
                            pi ~= 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11...)
                
            Essa função deve obedecer ao seguinte protótipo, em que n indica o número
            de termos que deve ser usado para avaliar o valor de pi:

                                    double pi (int n);
                                                        

   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <math.h>

double pi (int n);

int main(void){
    int nTermosSomatorio;

    printf("Digite o numero de termos do somatorio: ");
    scanf("%d", &nTermosSomatorio);

    double resultado = pi(nTermosSomatorio);

    printf("Valor de pi = %.8lf\n", resultado);

    return 0;

}

double pi (int n){
    double somatorio = 0;

    for(int i = 0; i < n; i++)
        somatorio += ((pow(-1, i)) / (2 * i + 1));
       

    return 4 * somatorio;

}