#include <stdio.h>


int main(){
    char letraMaiscula;

    printf("Informe a letra que deseja tornar minuscula: ");
    scanf("%c", &letraMaiscula);

    char letraMinuscula = letraMaiscula + 32;

    printf("Letra convertida: %c\n", letraMinuscula);





    return 0;

}