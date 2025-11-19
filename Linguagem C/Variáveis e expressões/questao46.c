#include <stdio.h>

int main(){
    int n;

    printf("Informe um inteiro de 3 digitos: ");
    scanf("%d", &n);

    int primeiroDigito = n / 100;
    int resto = n % 100;
    int segundoDigito = resto / 10;
    int terceiroDigito = n % 10;


    printf("Numero invertido: %d%d%d\n", terceiroDigito, segundoDigito, primeiroDigito);





    return 0;


}