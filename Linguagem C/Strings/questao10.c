#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];
    int tamanho = 0;

    printf("Digite a string: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++)
        tamanho++;

    printf("String invertida: ");
    for(int i = tamanho; i >= 0; i--){
        printf("%c", string[i]);
    }

    printf("\n");

    return 0;

}