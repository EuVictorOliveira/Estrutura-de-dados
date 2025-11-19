#include <stdio.h>

int main(void){
    int n;

    printf("Informe um inteiro inteiro: ");
    scanf("%d", &n);

    n++;
    while( n % 11 != 0 || n % 13 != 0 || n % 17 != 0)
        n++;


    printf("Valor que satisfaz as condicoes: %d\n", n);





    return 0;
}