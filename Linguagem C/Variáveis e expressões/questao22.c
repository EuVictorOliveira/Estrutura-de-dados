#include <stdio.h>

int main(){
    double jardas;

    printf("Informe a distancia em jardas: ");
    scanf("%lf", &jardas);
    printf("%.2lf jardas em metros: %.2lf\n", jardas, jardas * 0.91);




    return 0;

}