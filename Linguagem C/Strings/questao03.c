#include <stdio.h>
#include <string.h>

int main(void){
    char nome[100];

    printf("Digite o nome: ");
    scanf("%s", nome);

    if(nome[0] == 'a' || nome[0] == 'A')
        printf("%s", nome);

    return 0;

}