#include <stdio.h>

int main(void){
    float arr[10];

    for(int i = 0; i < 9; i++){
        printf("%p\n", &arr[i]);
    }

    return 0;
}