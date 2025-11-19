/* Código referente ao exercício 02 da lista de Arquivos(11) 
   Dia 13-07-2025

    Enunciado: Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas 
               linhas esse arquivo possui

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char c;
    int qtdLinhas = 0;

    if((fp = fopen("arquivos/arq.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    while(!feof(fp)){

        c = fgetc(fp);

        if(c == '\n')
            qtdLinhas++;

    }


    printf("Numero de linhas: %d\n", qtdLinhas);
    fclose(fp);


    return 0;

}