#include <stdio.h>

int main(void){
    int n, maior, menor;

     for(int i = 0; i < 10; i++){
        printf("informe o valor %d: ", i+1);
        scanf("%d", &n);

        if( i == 0){
            menor = maior = n;
        }else{

            if(n > maior){
                maior = n;
            }

            if(n < menor){
                menor = n;
            }

        }
    }


    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);


    return 0;

}