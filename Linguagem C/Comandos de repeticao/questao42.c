#include <stdio.h>
#include <math.h>

int main(void){
    double n;


    while(1){

        printf("Informe um valor: ");
        scanf("%lf", &n);

        if( n <= 0 ){
            printf("ENCERRANDO!!!");
            break;
        }

        double quadrado = n * n;
        double cubo = n * n * n;
        double raiz = sqrt(n);

        printf("Quadrado: %.2lf\nCubo: %.2lf\nRaiz Quadrada: %.2lf\n", quadrado, cubo, raiz);



    }





    return 0;

}