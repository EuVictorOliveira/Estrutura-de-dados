/* Exercício 2.1 da seção 02 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado:  Implemente uma função que calcule as raízes de uma equação do segundo
               grau, do tipo ax²+bx+c = 0. Essa função deve obedecer ao protótipо:


               int raizes (float a, float b, float c, float* x1, float* x2);
                                                        

               Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. 
               Se existirem rafzes reais, seus valores devem ser armazenados nas variáveis apontadas por x1 e x2.

   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <math.h>

int raizes (float a, float b, float c, float* x1, float* x2);

int main(void){
    float a, b, c;
    float x1, x2;

    printf("Digite a: ");
    scanf("%f", &a);

    printf("Digite b: ");
    scanf("%f", &b);

    printf("Digite c: ");
    scanf("%f", &c);

    int nRaizes = raizes(a, b, c, &x1, &x2);


    if(nRaizes == 0)
        printf("Nao ha raizes reais");
    else if(nRaizes == 1)
        printf("Ha uma raiz real: %.2f\n", x1);
    else
        printf("Ha duas raizes reais: %.2f e %.2f\n", x1, x2);

    return 0;

}

int raizes (float a, float b, float c, float* x1, float* x2){

    if( a == 0){
        printf("Equacao nao quadratica\n");
        return 0;
    }else{

        double delta = (b * b) -4 * a *c;

        if(delta < 0){
            return 0;
        }else{

            if(delta == 0){
                *x1 = *x2 = -b / (2 * a);
                return 1;
            }else{
                *x1 = (-b + sqrt(delta)) / (2 * a);
                *x2 = (-b - sqrt(delta)) / (2 * a);
            }
        }
    }

    return 2;
    
}
