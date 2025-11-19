#include <stdio.h>
#include <math.h>

int SomatorioCubos(int n){

    if(n == 1)
        return 1;
    else
        return pow(n, 3) + SomatorioCubos(n - 1);


}

int main(void){
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    int resultado = SomatorioCubos(n);

    printf("Soma dos %d primeiros cubos: %d\n", n, resultado);

    return 0;

}