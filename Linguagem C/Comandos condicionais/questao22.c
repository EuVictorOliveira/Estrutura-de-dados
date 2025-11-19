#include <stdio.h>

int main(){
    int idade, tempoTrabalho;

    printf("Informe a idade: ");
    scanf("%d", &idade);
    printf("Informe o tempo de trabalho(em anos): ");
    scanf("%d", &tempoTrabalho);


    if(idade >= 65 || tempoTrabalho >= 30 || (idade >= 60 && tempoTrabalho >= 25))
        printf("Pode se aposentar");
    else
        printf("Nao pode se aposentar");




    return 0;

}