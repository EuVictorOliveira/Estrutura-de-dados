#include <stdio.h>

int main(){
    double metros;

    printf("Informe a distancia em metros: ");
    scanf("%lf", &metros);
    printf("%.2lf metros em jardas: %.2lf\n", metros, metros / 0.91);



    return 0;
}