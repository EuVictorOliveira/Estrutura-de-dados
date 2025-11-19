#include <stdio.h>

int VerificaSinal(int n){

    if(n > 0)
        return 1;
    else if(n < 0)
        return -1;
    else
        return 0;

}

int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);    

    int valor = VerificaSinal(n);

    if(valor){

        if(valor == 1)
            printf("%d eh positivo\n", n);
        else
            printf("%d eh negativo\n", n);
    }else
        printf("%d eh zero\n", n);

    return 0;

}