#include <stdio.h>

int main(void){
    char string[100];
    int tamanho = 0;

    printf("Digite uma string: ");
    gets(string);


    for(int i = 0;  string[i] != '\0'; i++)
        tamanho++;


    printf("O tamanho da string ""%s"" eh: %d\n", string, tamanho);


    return 0;

}