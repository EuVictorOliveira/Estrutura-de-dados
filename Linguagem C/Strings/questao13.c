#include <stdio.h>
#include <string.h>

int main(void){
    char frase[200];
    int qtdEspacos = 0;

    printf("Digite a frase: ");
    gets(frase);

    for(int i = 0; frase[i] != '\0'; i++){
        if(frase[i] == ' ')
            qtdEspacos++;
    } 

    printf("Qtd de espacos: %d\n", qtdEspacos);

    return 0;

}