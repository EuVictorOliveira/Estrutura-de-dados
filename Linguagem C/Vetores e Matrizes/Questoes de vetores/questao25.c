#include <stdio.h>

int main(void){
    int vetor[100];
    int preenchidos = 0;

    for(int i = 0; ; i++){

        if( i % 7 == 0 && i % 10 == 7){
                vetor[preenchidos] = i;
                preenchidos++;
        }

       if(preenchidos == 100)
            break;

    }

    printf("\n");
    for(int i = 0; i < 100; i++)
        printf("%d\n", vetor[i]);



    return 0;

}