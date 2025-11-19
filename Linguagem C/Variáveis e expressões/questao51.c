#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    printf("Informe a coordenada x: ");
    scanf("%d", &x);
    printf("Informe a coordenada y: ");
    scanf("%d", &y);

    int distancia = sqrt(x*x + y*y);

    printf("A distancia da origem eh: %d", distancia);



    return 0;

}