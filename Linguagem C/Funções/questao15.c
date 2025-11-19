#include <stdio.h>

int FormaTriangulo(int a, int b, int c){

    if( a > b + c || b > a + c || c > a + b)
        return 0;
    else
        return 1;

}

void TipoTriangulo(int a, int b, int c){

    int ehTriangulo = FormaTriangulo(a, b, c);

    if(ehTriangulo){

        if(a == b && a == c)
            printf("Triangulo Equilatero\n");
        else if( a == b || a == c || b == c)
            printf("Triangulo isosceles\n");
        else
            printf("Triangulo escaleno\n");

    }else
        printf("Nao forma triangulo\n");

}


int main(void){
    int ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A: ");
    scanf("%d", &ladoA);

    printf("Digite o valor do lado B: ");
    scanf("%d", &ladoB);

    printf("Digite o valor do lado C: ");
    scanf("%d", &ladoC);

    TipoTriangulo(ladoA, ladoB, ladoC);

    return 0;

}