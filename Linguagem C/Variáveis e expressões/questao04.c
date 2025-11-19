#include <stdio.h>

int main(){
    double n;

    printf("Informe um numero real: ");
    scanf("%lf", &n);
    printf("%.2lf ao quadrado = %.2lf\n", n, n*n);


    return 0;

}