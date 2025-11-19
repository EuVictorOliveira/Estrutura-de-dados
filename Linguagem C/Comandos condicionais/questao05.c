#include <stdio.h>

int main(){
    int n;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("%d eh par\n", n);
    else
        printf("%d eh impar\n", n);



    return 0;
}