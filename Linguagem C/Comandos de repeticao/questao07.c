#include <stdio.h>

int main(void){
    int soma = 0, n, qtdPositivos = 0;

    while(qtdPositivos < 10){
        printf("informe o valor %d: ", qtdPositivos+1);
        scanf("%d", &n);

        if(n >= 0){
            soma += n;
            qtdPositivos++;
        }

    }

    double media = (double) soma / 10.0;
    printf("media = %.2lf\n", media);






    return 0;

}