#include <stdio.h>

int main(){
    double metrosCubicos;

    printf("Informe o volume em metros cubicos: ");
    scanf("%lf", &metrosCubicos);
    printf("%.2lf metros cubicos em litros: %.2lf", metrosCubicos, metrosCubicos * 1000);



    return 0;
}