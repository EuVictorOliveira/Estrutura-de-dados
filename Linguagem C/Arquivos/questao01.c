/* Código referente ao exercício 01 da lista de Arquivos(11) 
   Dia 13-07-2025

    Enunciado: Escreva um programa que:

                (a) Crie/abra um arquivo texto de nome “arq.txt”

                (b) Permita que o usuario grave diversos caracteres nesse arquivo, ate que o usuario ´
                    entre com o caractere ‘0’
    
                (c) Feche o arquivo


                Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.

     
   Autor: João Victor Oliveira
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE* fp;
    char caractere;

    if((fp = fopen("arquivos/arq.txt", "a")) == NULL){
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    while(1){

        scanf("%c", &caractere);

        if(caractere == '0')
            break;

        fprintf(fp, "%c", caractere);

    }

    fclose(fp);

    return 0;
}