#include <stdio.h>

int main(void){
    char string[100];

    printf("Digite uma string: ");
    gets(string);

    printf("String digitada: %s\n", string);


    return 0;
}