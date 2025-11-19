#include <stdio.h>



int main(){
    double graus;

    printf("Informe o valor do angulo em graus: ");
    scanf("%lf", &graus);
    printf("%.2lf em radianos: %.2lf",graus, graus * (3.14/180));



    return 0;

}