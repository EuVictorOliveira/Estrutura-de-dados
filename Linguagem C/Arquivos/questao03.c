/* Código referente ao exercício 03 da lista de Arquivos(11) 
   Dia 13-07-2025

    Enunciado: Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas letras sao vogais.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char c;
    int qtdVogais = 0;

    if((fp = fopen("arquivos/arq.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    while(!feof(fp)){

        c = getc(fp);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            qtdVogais++;

    }

    printf("Qtd de vogais do arquivo: %d\n", qtdVogais);
    fclose(fp);

    return 0;
}