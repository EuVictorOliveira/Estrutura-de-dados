#include <stdio.h>

int main(void){
    int a[10], b[10], c[10];

    for(int i = 0; i < 10; i++){
         printf("Informe o valor %d de A: ", i+1);
         scanf("%d", &a[i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){
         printf("Informe o valor %d de B: ", i+1);
         scanf("%d", &b[i]);
    }

    printf("\n");
    for(int i = 0; i < 10; i++){

        if(i % 2 == 0)
            c[i] = a[i];
        else
            c[i] = b[i];

        
        printf("C[%d] = %d\n", i, c[i]);

    }







    return 0;

}