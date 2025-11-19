/* Código referente ao exercício 07 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 
               numeros do seu bilhete. O programa entao compara quantos numeros o jogador acertou. 
               Em seguida, ele aloca espaco para um vetor de tamanho igual a quantidade de numeros 
               corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os 
               numeros sorteados e os seus numeros corretos.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sorteados[6], bilhete[6];
    int nAcertos = 0;

    printf("Informe os numeros sorteados: ");
    for(int i = 0; i < 6; i++)
        scanf("%d", &sorteados[i]);

    printf("Informe os numeros do seu bilhete: ");
    for(int i = 0; i < 6; i++)
        scanf("%d", &bilhete[i]);

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++)
            if(sorteados[i] == bilhete[j])
                nAcertos++;
    }

    int* p = (int*) malloc(nAcertos*sizeof(int));

    int aux = nAcertos;
    while(aux--){
        int k = 0;

        for(int i = 0; i < 6; i++)
            for(int j = 0; j < 6; j++)
                if(bilhete[i] == sorteados[j]){
                    p[k] = bilhete[i];
                    k++;
                }

    }

    printf("Numeros sorteados: ");
    for(int i = 0; i < 6; i++)
        printf("%d ", bilhete[i]);

    printf("\n");

    printf("Numeros corretos: ");
    for(int i = 0; i < nAcertos; i++)
        printf("%d ", p[i]);

    printf("\n");

    free(p);
    
    return 0;

}
