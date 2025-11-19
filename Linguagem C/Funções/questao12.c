#include <stdio.h>
#include <locale.h>

int SomaAlgarismos(int n){
    int soma = 0;

    while(n > 0){
        soma += n % 10;
        n /= 10;
    }

    return soma;

}

int main(void){
    setlocale(LC_ALL, "pt_PT.UTF-8");
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Número inválido\n");
        return 1;
    }

    printf("Soma dos algarismos: %d\n", SomaAlgarismos(n));

    return 0;

}