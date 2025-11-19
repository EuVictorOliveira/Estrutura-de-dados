#include <stdio.h>

int main(void){
    double R1, R2, resistencia;


    while(1){

        printf("Informe R1: ");
        scanf("%lf", &R1);

        printf("Informe R2: ");
        scanf("%lf", &R2);

        if(R1 == 0 || R2 == 0){
            printf("Valores invalidos\nENCERRANDO!!!\n");
            break;
        }

        resistencia = (R1 * R2) / (R1 + R2);

        printf("Resistencia = %.2lf\n", resistencia);

    }


    return 0;

}