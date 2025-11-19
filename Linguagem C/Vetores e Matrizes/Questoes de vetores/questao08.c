#include <stdio.h>

int main(void){
     int A[6];

     for(int i = 0; i < 6; i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &A[i]);
     }

     printf("----LISTA EM ORDEM INVERSA----\n");
     for(int j = 5; j >= 0; j--){
        printf("%d\n", A[j]);
     }



    return 0;

}