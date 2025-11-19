#include <stdio.h>

int main(void){
    int fatorial = 1, cont = 1;
    double sequencia = 0;



    for(int i = 1; i <= 5; i++){
        
        while( cont <= 2 * i ) {

            fatorial *= cont;
            cont++;

        }

        double atual = (double) i / fatorial;
        sequencia += atual;

    }    


    printf("Resultado sequencia: %.2lf\n", sequencia);







    return 0;

}