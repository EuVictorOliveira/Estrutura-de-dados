#include <stdio.h>

int main(){
    int A, B, C;

    printf("Informe o valor de A: ");
    scanf("%d", &A);
    printf("Informe o valor de B: ");
    scanf("%d", &B);
    printf("Informe o valor de C: ");
    scanf("%d", &C);


    if( A < B + C && B < A + C && C < A + B){
        printf("Forma triangulo\n");

        if((A == B) && (A == C))
            printf("Tipo de trinagulo: equilatero\n");
        else if((A == B) || (A == C) || (B == C))
            printf("Tipo de triangulo: isosceles\n");
        else
            printf("Tipo de triangulo: escaleno\n");




    }





    return 0;

}