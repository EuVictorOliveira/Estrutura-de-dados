#include <string.h>
#include <stdio.h>

int main(void){
    char string[100];
    char SemEspacos[100];
    int j = 0;

    printf("Digite a string: ");
    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] != ' '){
            SemEspacos[j] = string[i]; 
            j++;
        }
    }

    SemEspacos[j] = '\0';

    printf("String sem espacos: %s\n", SemEspacos);

    return 0;

}