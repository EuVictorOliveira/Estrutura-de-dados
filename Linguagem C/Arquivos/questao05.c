/* Código referente ao exercício 05 da lista de Arquivos(11) 
   Dia 13-07-2025

    Enunciado: Faca um programa que receba do usuario um arquivo texto e um caracter. 
               Mostre na tela quantas vezes aquele caractere ocorre dentro do arquivo
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char c;
    int qtd = 0;

    if((fp = fopen("arquivos/arq.txt", "r")) == NULL){
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    char caractereBusca;
    printf("Informe um caractere: ");
    scanf("%c", &caractereBusca);

    while(!feof(fp)){

        c = getc(fp);

        if(c == caractereBusca)
            qtd++;
    

    }

    printf("Qtd de '%c' no arquivo: %d\n", caractereBusca, qtd);
    fclose(fp);

    return 0;
}