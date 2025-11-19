#include <stdio.h>

int main(void){
    double numeros[10], soma = 0.0;
    int qtdNegativos = 0;

    for(int i = 0; i < 10; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%lf", &numeros[i]);

        if( numeros[i] < 0)
            qtdNegativos++;
        else
            soma += numeros[i];


    }


    printf("Soma dos numeros positivos: %.2lf\n", soma);
    printf("Qtd de numeros negativos: %d\n", qtdNegativos);




    return 0;

}