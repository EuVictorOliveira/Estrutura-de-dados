#include <stdio.h>

int main(void){

    for(int i = 0; i <= 100000; i = i + 1000)
        printf("%d\n", i);

    return 0;
}