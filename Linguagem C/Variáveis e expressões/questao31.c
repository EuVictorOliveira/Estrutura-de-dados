#include <stdio.h>

int main(){
    int n;

    printf("Informe um valor inteiro: ");
    scanf("%d", &n);
    printf("Antecessor: %d\nSucessor: %d\n", n-1, n+1);


    return 0;

}