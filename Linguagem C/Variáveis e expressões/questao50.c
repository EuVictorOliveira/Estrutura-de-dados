#include <stdio.h>

int main(){
    int anoNascimento, anoAtual = 2025;


    printf("Informe o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Sua idade eh: %d\n", anoAtual - anoNascimento);




    return 0;
}