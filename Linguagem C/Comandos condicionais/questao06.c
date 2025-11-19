#include <stdio.h>

int main(){
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);
    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if( n1 > n2){
        printf("%d eh maior\n", n1);
        printf("Diferenca entre os numeros: %d\n", n1 - n2);
    }else{
        printf("%d eh maior\n", n2);
        printf("Diferenca entre os numeros: %d\n", n2- n1);
    }





    return 0;

}