#include <stdio.h>
#include <string.h>

int main(void){
    char string[100], l1, l2;

    printf("Digite a string: ");
    gets(string);

    printf("Digite L1: ");
    scanf("%c%*c", &l1);

    printf("Digite L2: ");
    scanf("%c", &l2);

    for(int i = 0; string[i] != '\0'; i++){

        if(string[i] == l1){
            string[i] = l2;
        }

    }


    printf("String Ajustada: %s\n", string);

    return 0;
    
}