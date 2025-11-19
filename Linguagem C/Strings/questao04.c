#include <stdio.h>
#include <string.h>

int main(void){
    char nome[100];
    
    printf("Digite nome: ");
    scanf("%s", nome);

    for(int i = 0; i < 4; i++)
        printf("%c", nome[i]);


    printf("\n");

    return 0;

}