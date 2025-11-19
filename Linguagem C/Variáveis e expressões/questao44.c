#include <stdio.h>
#include <math.h>

int main(){
    double alturaDegrau, alturaDesejada;


    printf("Informe a altura do degrau: ");
    scanf("%lf", &alturaDegrau);

    printf("Informe a altura que se deseja alcancar: ");
    scanf("%lf", &alturaDesejada);

    int nDegraus = ceil(alturaDesejada / alturaDegrau);

    printf("O numero de degraus eh: %d\n", nDegraus);






    return 0; 


}