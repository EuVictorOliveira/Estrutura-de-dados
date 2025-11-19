#include <stdio.h>

int main(void){
    int n, somaImpares = 0, diferencaPares = 0;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);


    for(int i = 1; i <= (2*n - 1); i++){

        if(i % 2 == 0)
            diferencaPares += i;
        else
            somaImpares += i;



    }

    printf("Soma para n = %d: %d\n", n, somaImpares - diferencaPares);

    return 0;
}