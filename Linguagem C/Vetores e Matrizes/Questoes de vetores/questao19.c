#include <stdio.h>

int main(void){
    int vetor[50];


    for(int i = 0; i < 50; i++){
    
        vetor[i] = (i+5*i) % (i+1);
        printf("Vetor[%d] = %d\n", i, vetor[i]);

    }









    return 0;

}