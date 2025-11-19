#include <stdio.h>

int main(){
    double acres;

    printf("Informe a area em acres: ");
    scanf("%lf", &acres);
    printf("%.2lf acres em metros quadrados: %.2lf\n", acres, acres * 4048.58);



    return 0;
    
}