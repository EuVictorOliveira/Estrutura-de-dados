#include <stdio.h>

int main(){
    double quilogramas;

    printf("Informe a massa em quilogramas: ");
    scanf("%lf", &quilogramas);
    printf("%.2lf quilogramas em libras: %.2lf\n", quilogramas, quilogramas / 0.45);



    return 0;

}