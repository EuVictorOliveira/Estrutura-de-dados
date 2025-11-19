#include <stdio.h>

int main(void){
    float arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%p\n", &arr[i][j]);
        }
    }

    return 0;

}