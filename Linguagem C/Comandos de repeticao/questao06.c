#include <stdio.h>

int main(){
   int soma = 0, n;

    for(int i = 0; i < 10; i++){
        printf("informe o valor %d: ", i+1);
        scanf("%d", &n);

        soma += n;

    }

    double media = (double) soma / 10.0;
    printf("media = %.2lf\n", media);




    return 0;

}