#include <stdio.h>
#include <string.h>

int main(void){
    char palavra[52];

    printf("Digite a palavra: ");
    gets(palavra);

    for(int i = 0; palavra[i] != '\0'; i++){
        palavra[i] += 1;
    }

    printf("String ajustada: %s", palavra);

    return 0;

}