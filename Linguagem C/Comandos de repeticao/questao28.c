#include <stdio.h>

int main(void){
    int n;
    int fatorial = 1;
    double sequencia = 1;


    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
         fatorial *= i;
         sequencia += (double) 1 / fatorial;

    }    


    printf("Resultado sequencia: %.2lf\n", sequencia);







    return 0;

}