/* Código referente ao exercício 04 da lista de alocação dinâmica(10) 
   Dia 05-07-2025

    Enunciado: Faça um programa que receba do usuário o tamanho de uma string e chame uma 
               funçao para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o 
               conteúdo dessa string. O programa imprime a string sem suas vogais.
     
   Autor: João Victor Oliveira
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char* Aloca_string(int);

int main(void){
    int tamanhoString;
    char* string;

    printf("Informe o tamanho da string: ");
    scanf("%d", &tamanhoString);

    string = Aloca_string(tamanhoString);
    
    printf("Digite a string: ");
    scanf("%s", string);

    printf("String sem vogais: ");
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", string[i]);
        }
    }   

    printf("\n");

    free(string);

    return 0;

}

char* Aloca_string(int tamanho){
    char *p;

    p = (char*) malloc(tamanho*sizeof(char)+1);
    if(!p){
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    return p;

}