#include <stdio.h>

int main(){
    double hectares;

    printf("Informe a area em hectares: ");
    scanf("%lf", &hectares);
    printf("%.2lf hectares em metros quadrados: %.2lf\n", hectares, hectares * 10000);



    return 0;

}