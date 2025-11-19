/* Código referente ao exercício 06 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Fac¸a um programa que simule a memoria de um computador: o usuario ira especificar o 
               tamanho da memoria, ou seja, quantos bytes serao alocados do tipo inteiro. Para tanto,
               a memoria solicitada deve ser um valor multiplo do tamanho do tipo inteiro. Em seguida, 
               o usuario tera 2 opcoes: inserir um valor em uma determinada posicao ou consultar o 
               valor contido em uma determinada posicao. A memoria deve iniciar com todos os dados zerados
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int tamanhoMemoria;

    printf("Informe a qtd de bytes a ser alocada: ");
    scanf("%d", &tamanhoMemoria);

    if(tamanhoMemoria % sizeof(int) == 0){

        int* p = (int*) malloc(tamanhoMemoria);
        if(!p){
            printf("Erro ao alocar memoria.\n");
            exit(1);
        }

        int qtdElementos = tamanhoMemoria / sizeof(int);
        for(int i = 0; i < qtdElementos; i++)
            p[i] = 0;

        int opcao;


        printf("1. Adicionar valor em posicao\n");
        printf("2. Consultar posicao\n");
        printf("Informe opcao valida: ");
        scanf("%d", &opcao);

        switch (opcao){
            int posicao;
            int valor;

            case 1:
            
                printf("Informe a posicao que deseja alterar: ");
                scanf("%d", &posicao);
                printf("Informe o valor: ");
                scanf("%d", &valor);

                p[posicao] = valor;

                break;
            case 2:

                printf("Informe a posicao que deseja consultar: ");
                scanf("%d", &posicao);

                printf("valor na posicao: %d\n", p[posicao]);

                break;
        
        
            default:
                break;
        }

        free(p);

    }else{

        printf("Nao eh possivel alocar. Tamanho nao e multiplo de int.\n");
        return 1;

    }


    return 0;

}