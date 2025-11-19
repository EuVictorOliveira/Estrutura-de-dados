#include <stdio.h>
#include <math.h>

int QuadradoPerfeito(int n ){

    double raiz = sqrt(n);
    int raizInteira = (int) raiz;

    if(raiz == raizInteira)
        return 1;
    else
        return 0;

}


int main(void){
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    if(QuadradoPerfeito(n))
        printf("%d eh quadrado perfeito\n", n);
    else
        printf("%d nao eh quadrado perfeito\n", n);

    return 0;

}