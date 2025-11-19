#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];

    printf("Digite a string: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] != ' ')
            string[i] += 32;
    }

    printf("String ajustada: %s\n", string);

    return 0;

}