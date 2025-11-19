#include <stdio.h>

int main(){
    double n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Informe o segundo numero: ");
    scanf("%lf", &n2);

    if(n1 > n2)
        printf("%.2lf eh maior\n", n1);
    else
        printf("%.2lf eh maior\n", n2);




    return 0;

}