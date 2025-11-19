#include <stdio.h>

int main(void){
    int qtdMultiplos = 0, n = 1;

    while(qtdMultiplos < 5){

        if( n % 3 == 0 ){
            printf("%d\n", n);
            qtdMultiplos++;
        }

        n++;

    }

    return 0;
}