#include <stdio.h>

int main(void){
    double baseTriangulo, alturaTriangulo;



    while(1){

        printf("Informe a base do triangulo: ");
        scanf("%lf", &baseTriangulo);

        printf("Informe a altura do triangulo: ");
        scanf("%lf", &alturaTriangulo);


        if(baseTriangulo > 0 && alturaTriangulo > 0){
            printf("Area = %.2lf\n", (baseTriangulo * alturaTriangulo) / 2.0);
            break;
        }else
            printf("Dados invalidos\n");
        



    }










    return 0;

}