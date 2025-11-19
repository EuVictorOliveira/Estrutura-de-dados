#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];
    int qtdUm = 0;

    printf("Digite a string: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++)
        if(string[i] == '1')
            qtdUm++;

    printf("Qtd de 1: %d", qtdUm);

    return 0;

}