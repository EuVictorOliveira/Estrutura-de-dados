#include <stdio.h>

int main(void){
    int n, algarismo;


    printf("Informe um numero entre 100 e 999: ");
    scanf("%d", &n);


    while(n != 0){

        algarismo = n % 10;
        printf("%d\n", algarismo);
        n /= 10;

    }










    return 0;

}