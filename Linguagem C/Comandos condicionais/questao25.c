#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;


    printf("Informe o valor de a: ");
    scanf("%d", &a);

    if(a == 0){
        printf("Nao eh equacao do segundo grau\n");
        return 1;
    }

    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    int delta = (b*b) - (4*a*c);

    if(delta >= 0){

        double x1 = (double)(-b + sqrt(delta)) / (2*a);
        double x2 = (double)(-b - sqrt(delta)) / (2*a);

        if(delta == 0)
            printf("raiz unica: %.2lf\n", x1);
        else
            printf("raizes: %.2lf e %.2lf\n", x1, x2);

    }else{
        printf("A equacao nao tem raizes reais\n");
        return 2;
    }










    return 0;

}