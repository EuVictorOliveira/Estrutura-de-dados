#include <stdio.h>

int main(void){
    int valor, notasCem = 0, notasCinquenta = 0, notasVinte = 0, notasDez = 0, notasCinco = 0, notasDois = 0, notasUm = 0, qtdNotasTotais = 0;

    printf("Informe o valor: R$ ");
    scanf("%d", &valor);


    while(valor != 0){

        notasCem = valor / 100;
        valor %= 100;
        notasCinquenta = valor / 50;
        valor %= 50;
        notasVinte = valor / 20;
        valor %= 20;
        notasDez = valor / 10;
        valor %= 10;
        notasCinco = valor / 5;
        valor %= 5;
        notasDois = valor / 2;
        valor %= 2;
        notasUm = valor;
        valor %= 1; // garante que ao final valor == 0;


    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n", notasCem, notasCinquenta, notasVinte, notasDez, notasCinco, notasDois, notasUm);
    printf("Qtd de notas: %d\n", qtdNotasTotais);


    return 0;

}