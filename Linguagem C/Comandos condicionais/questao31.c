#include <stdio.h>

int main(void){
    double altura, peso;


    printf("Informe a altura(em metros): ");
    scanf("%lf", &altura);

    printf("Informe o peso(em kg): ");
    scanf("%lf", &peso);


    if( altura < 1.20){
        if(peso < 60.0)
            printf("Categoria A\n");
        else if(peso >= 60.0 && peso <= 90.0)
            printf("Categoria D\n");
        else
            printf("Categoria G\n");
    }


    if( altura >= 1.20 && altura <= 1.70){
        if(peso < 60.0)
            printf("Categoria B\n");
        else if(peso >= 60.0 && peso <= 90.0)
            printf("Categoria E\n");
        else
            printf("Categoria H\n");
    }else{

        if(peso < 60.0)
            printf("Categoria C\n");
        else if(peso >= 60.0 && peso <= 90.0)
            printf("Categoria F\n");
        else
            printf("Categoria I\n");

    }



    return 0;

}