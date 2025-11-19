#include <stdio.h>

int main(void){
    int n, qtdNumeros = 0, qtdPares = 0;


    do{

        printf("Informe um numero inteiro: ");
        scanf("%d", &n);

        qtdNumeros++;

        if(n % 2 == 0){
            printf("%d eh par\n", n);
            qtdPares++;
        }else
            printf("%d nao eh par\n", n);




    }while(n != 1000);



    printf("Qtd de numeros lidos: %d\n", qtdNumeros);
    printf("Qtd de numeros pares: %d\n", qtdPares);



    return 0;

}