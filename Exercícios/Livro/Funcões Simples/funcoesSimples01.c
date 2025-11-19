/* Exercício 1.1. da seção 01 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado: Implemente uma função que indique se um ponto (x,y) está localizado dentro ou fora de um retângulo.
              O retângulo é definido por seus vértices inferior esquerdo (x0,y0) e superior direito (x1,y1). 
              A função deve ter como valor de retorno 1, se o ponto estiver dentro do retângulo, e 0 caso contrário, obedecendo ao protótipo:
               
                            int dentro_ret (int x0, int y0, int x1, int yl, int x, int y);

   Autor: João Victor Oliveira
*/
#include <stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y); // Protótipo da função

int main(void){
    int x0, y0;
    int x1, y1;
    int x, y;

    printf("Digite o vertice inferior esquerdo do retangulo(x0, y0): ");
    scanf("%d %d", &x0, &y0);

    printf("Digite o vertice superior direito do retangulo(x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Digite o ponto que deseja verificar:(x, y): ");
    scanf("%d %d", &x, &y);

    int resultado = dentro_ret(x0, y0, x1, y1, x, y);

    if(resultado)
        printf("O ponto pertence ao retangulo\n");
    else
        printf("O ponto nao pertence ao retangulo\n");

    return 0;

}

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){

    /* Para o ponto (x, y) pertencer ao triangulo definido pelos vertices dados,
    É necessário verificar se x está entre x0 e x1 e y está entre y0 e y1.*/
    if((x >= x0 && x <= x1) && (y >= y0 && y <= y1))
        return 1;
    else
        return 0;

}