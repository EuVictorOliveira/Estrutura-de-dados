#include <stdio.h>

int EhMaior(int a, int b){

    if(a > b)
        return 1;
    else 
        return 0;
    
}

int main(void){
    int a, b;

    printf("Digite a: ");
    scanf("%d", &a);

    printf("Digite b: ");
    scanf("%d", &b);

    if(EhMaior(a, b))
        printf("%d eh maior que %d\n", a, b);
    else
        printf("%d eh maior que %d\n", b, a);

    return 0;
    
}