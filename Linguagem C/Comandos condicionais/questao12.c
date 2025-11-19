#include <stdio.h>
#include <math.h>

int main(){
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if(n >= 0){
        printf("Logaritmo de %d = %.2lf", n, log(n));
    }else
        printf("Numero negativo. Operacao invalida");





    return 0;

}