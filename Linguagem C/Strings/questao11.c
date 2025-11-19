#include <stdio.h>
#include <string.h>

int main(void){
    char string[100];

    printf("Digite a string: ");
    gets(string);

    
    printf("String sem as vogais: ");
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u' &&  string[i] != ' '){
            printf("%c", string[i]);
        }
    }

    return 0;

}