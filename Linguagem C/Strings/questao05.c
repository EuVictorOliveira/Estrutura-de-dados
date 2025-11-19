#include <stdio.h>
#include <string.h>

int main(void){
    char nome[100];
    int qtdLetras = 0;

    printf("Digite o nome: ");
    gets(nome);

    for(int i = 0; nome[i] != '\0'; i++){

        if(nome[i] != ' ')
           qtdLetras++;
           
    }



    printf("Qtd de letras: %d\n", qtdLetras);

    return 0;

}