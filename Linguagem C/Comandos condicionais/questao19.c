#include <stdio.h>

int main(){
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);


    if(n % 3 == 0 && n % 5 != 0)
        printf("Numero valido, multiplo de 3");
    else if(n % 3 != 0 && n % 5 == 0)
        printf("Numero valido, multiplo de 5");
    else if (n % 3 == 0 && n % 5 == 0)
        printf("Numero invalido, multiplo de 3 e de 5");
    else 
        printf("Numero invalido, nao eh multiplo de 3 e nem de 5");






    return 0;

}