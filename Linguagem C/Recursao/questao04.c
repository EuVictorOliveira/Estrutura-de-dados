#include <stdio.h>

int Pontencia(int k, int n){

    if(n == 1){
        return k;
    }else{
        return k * Pontencia(k, n - 1);
    }


}


int main(void){
    int k, n;

    printf("Digite k: ");
    scanf("%d", &k);

    printf("Digite n: ");
    scanf("%d", &n);

    int resultado = Pontencia(k, n);

    printf("%d elevado a %d: %d\n", k, n, resultado);

    return 0;

}