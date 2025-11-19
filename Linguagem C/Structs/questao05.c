/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 12-07-2025

    Enunciado: Considerando a estrutura:

                    struct Vetor{
                    float x;
                    float y;
                    float z;
                    };

              para representar um vetor no R3. implemente um programa que calcule a soma de dois vetores.

   Autor: João Victor Oliveira
*/
#include <stdio.h>

// Tipos
struct Vetor{
    float x;
    float y;
    float z;
};

// Funções
void Soma_vetores(struct Vetor* vetor01, struct Vetor* vetor02);

int main(void){
    struct Vetor v1, v2;

    printf("Informe as coordenadas de v1: (x,y,z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);

    printf("Informe as coordenadas de v2: (x,y,z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    Soma_vetores(&v1, &v2);

    printf("Vetor soma: (%.2f,%.2f,%.2f)\n", v1.x, v1.y, v1.z);

    return 0;
}

// Soma as coordenadas dos vetores e armazena os valores no vetor 01
void Soma_vetores(struct Vetor* vetor01, struct Vetor* vetor02){

     vetor01->x = vetor01->x + vetor02->x;
     vetor01->y = vetor01->y + vetor02->y;
     vetor01->z = vetor01->z + vetor02->z;

}