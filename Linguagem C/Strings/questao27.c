#include <string.h>
#include <stdio.h>

int TamanhoString(const char *string){
    int tamanho = 0;

    for(int i = 0; string[i] != '\0'; i++){
        tamanho++;
    }

    return tamanho;

}

int main(void){
    char string[200], invertida[200];

    printf("Digite a string: ");
    gets(string);


    int tamanho = TamanhoString(string);
    int j = 0;


    for(int i = tamanho - 1; i >= 0; i--){
        invertida[j] = string[i];
        j++;
    }

    invertida[j] = '\0';

    int ehDiferente = strcmp(string, invertida);

    if(!ehDiferente)
        printf("Eh palindromo\n");
    else
        printf("Nao eh palindromo\n");
    

    return 0;

}