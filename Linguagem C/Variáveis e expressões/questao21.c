#include <stdio.h>

int main(){
    double libras;

    printf("Informe a massa em libras: ");
    scanf("%lf", &libras);
    printf("%.2lf libras em quilogramas: %.2lf\n", libras, libras * 0.45);



    return 0;

}