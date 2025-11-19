#include <stdio.h>

int main(void){
    int i, *ponteiroInteiro = &i;
    float f, *ponteiroFloat = &f;
    char c = 'c', *ponteiroChar = &c ; 

    printf("%d %.2f %c\n", i, f, c);

    *ponteiroInteiro = 2;
    *ponteiroFloat = 3.14;
    *ponteiroChar = 'D';

    printf("%d %.2f %c\n", i, f, c);

    return 0;

}