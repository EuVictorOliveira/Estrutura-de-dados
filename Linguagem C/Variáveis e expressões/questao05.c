#include <stdio.h>

int main(){
    double n;

    printf("Informe um numero real: ");
    scanf("%lf", &n);
    printf("%.2lf/5 = %.2lf\n", n, n/5.0);


    return 0;
}