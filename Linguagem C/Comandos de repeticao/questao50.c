#include <stdio.h>


int main(void){
    int qtdAnos = 0;   
    double alturaChico = 1.50, alturaZe = 1.10;    

    while(alturaChico >= alturaZe){
        alturaChico += 0.02;
        alturaZe += 0.03;


        qtdAnos++;

    }

    printf("Qtd de anos necessaria: %d\n", qtdAnos);



    return 0;
}