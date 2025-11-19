#include <stdio.h>

int main(void){
    int a[10], b[10], c[10]; 
    int qtd = 0;
    
    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d do vetor 1: ", i+1);
        scanf("%d", &a[i]);

    }

    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d do vetor 2: ", i+1);
        scanf("%d", &b[i]);

    }

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){

            if(a[i] == b[j]){
                c[i] = a[i];
                qtd++;
                break;
            }

        }
    }


    printf("Interseccao: (");
    for(int i = 0; i < qtd-1; i++){
        printf("%d, ", c[i]);
    }

    printf("%d)\n", c[qtd-1]);

    return 0;
}