#include <stdio.h>
#include <string.h>

int main(void){
    char nome[100], sexo;
    int idade;

    printf("Digite o nome: ");
    gets(nome);

    printf("Digite o sexo(f ou m): ");
    scanf("%c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(sexo == 'f' && idade < 25){
        printf("Nome: %s\n", nome);
        printf("ACEITA\n");
    }else
        printf("NAO ACEITA\n");


    return 0;

}