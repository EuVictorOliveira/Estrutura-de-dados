#include <stdio.h>
#include <string.h>

int main(void){
    char string[100], caractere;
    int qtdVogais = 0;

    printf("Digite a string: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            qtdVogais++;
        }
    }

    printf("Qtd de vogais: %d\n", qtdVogais);

    printf("Digite um caractere: ");
    scanf("%c", &caractere);
 
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            string[i] = caractere;
        }
    }

    printf("String ajustada: %s\n", string);

    return 0;

}