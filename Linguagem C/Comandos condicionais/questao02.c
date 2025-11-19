#include <stdio.h>
#include <math.h>


int main(){
    double n;

    printf("Informe um numero: ");
    scanf("%lf", &n);

    if(n >= 0)
        printf("Raiz quadrada de %.2lf : %.2lf\n", n, sqrt(n));
    else
        printf("Numero negativo, operacao invalida\n");



    return 0;

}