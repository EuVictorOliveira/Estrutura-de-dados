#include <stdio.h>

int main(){
    int n;

    printf("Informe um inteiro de 4 digitos: ");
    scanf("%d", &n);


    int primeiroDigito = n / 1000;
    int resto = n % 1000;
    int segundoDigito = resto / 100;
    resto = resto % 100;
    int terceiroDigito = resto / 10;
    int quartoDigito = n % 10;

    printf("primeiro digito: %d\n", primeiroDigito);
    printf("Segundo digito: %d\n", segundoDigito);
    printf("Terceiro digito: %d\n", terceiroDigito);
    printf("Quarto digito: %d\n", quartoDigito);
    
    
    return 0;

}