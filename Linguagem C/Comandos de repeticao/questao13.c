#include <stdio.h>

int main(void){
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){

        if( i % 2 == 0)
            printf("%d\n", i);

    }







    return 0;

}