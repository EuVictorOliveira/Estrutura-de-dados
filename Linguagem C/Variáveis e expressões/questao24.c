#include <stdio.h>

int main(){
    double metrosQuadrados;

    printf("Informe a area em metros quadrados: ");
    scanf("%lf", &metrosQuadrados);
    printf("%.2lf metros quadrados em acres: %.2lf\n", metrosQuadrados, metrosQuadrados * 0.000247);



    return 0;

}