#include <stdio.h>

int main(void){
    int a, b, c;


    printf("Informe o valor do primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o valor do segundo numero: ");
    scanf("%d", &b);
    printf("Informe o valor do terceiro numero: ");
    scanf("%d", &c);

    if(a > b && a > c){
        if(b > c){
            printf("%d %d %d", a, b, c);
        }else{
            printf("%d %d %d", a, c, b);
        }
    }

    if(b > a && b > c){
        if(a > c){
            printf("%d %d %d", b, a, c);
        }else{
             printf("%d %d %d", b, c, a);
        }
    }

    if(c > a && c > b){
        if(a > b){
            printf("%d %d %d", c, a, b);
        }else{
             printf("%d %d %d", c, b, a);
        }
    }


    return 0;

}