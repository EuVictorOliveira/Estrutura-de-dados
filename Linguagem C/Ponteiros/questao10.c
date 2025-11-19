#include <stdio.h>

int main(void){
    int arr[5], *p;

    for(p = arr; p < arr + 5; p++){
        printf("Digite n: ");
        scanf("%d", p);
    }

    printf("Dobro dos valores:\n");
    for(p = arr; p < arr + 5; p++){
        printf("%d\n", *p*2);
    }

    return 0;

}