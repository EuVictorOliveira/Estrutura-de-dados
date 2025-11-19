#include <stdio.h>

int Fatorial(int n ){

    if(n == 1)
        return 1;
    else{
        return n * Fatorial(n - 1);
    }

}

int main(void){
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    int resultado = Fatorial(n);

    printf("Fatorial de %d: %d\n", n, resultado);

    return 0;
}