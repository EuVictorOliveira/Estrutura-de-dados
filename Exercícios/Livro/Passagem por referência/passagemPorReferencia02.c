/* Exercício 2.2 da seção 02 do livro Introdução à estrutura de dados, de Waldemar Celles
   Data: 24/06/2025

   Enunciado:   Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio r. 
                Essa função deve obedecer ao protótipo:

                            void calc_esfera (float r, float* area, float* volume);

                Aárea da superfície e o volume são dados, respectivamente, por 4r² e 4r³/3.

   Autor: João Victor Oliveira
*/
#include <stdio.h>

void calc_esfera (float r, float* area, float* volume);

int main(void){
    float raio, area, volume; 
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("Area da superficie: %.2f\nVolume: %.2f\n", area, volume);

    return 0;

}

void calc_esfera (float r, float* area, float* volume){
    *area = 4 * r * r;
    *volume = (4.0/3) * r * r * r;
}