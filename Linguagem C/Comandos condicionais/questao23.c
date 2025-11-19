#include <stdio.h>

int main(){
    int ano;


    printf("Informe o ano: ");
    scanf("%d", &ano);


    if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        printf("%d eh bissexto\n", ano);
    else
        printf("%d nao eh bissexto\n", ano);






    return 0;

}