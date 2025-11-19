#include <stdio.h>

int main(void){
    int i = 0;


    printf("Usando for: \n");
    for(int i = 1; i <= 100; i++){
        printf("%d\n", i);
    }

    printf("\n");

    printf("Usando while: \n");

    while(i <= 100){
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    i = 1;
    printf("Usando do-while: \n");
    do{
        printf("%d\n", i);
        i++;
    } while (i <= 100);
    

    return 0;

}