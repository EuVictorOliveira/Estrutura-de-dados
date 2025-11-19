#include <stdio.h>

int main(void){
    int n;
    double harmonico = 0;


    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    
    for(int i = 1; i <= n; i++){
        harmonico += (double)1/i;
    }



    printf("H(n) = %.2lf\n", harmonico);


    return 0;

}