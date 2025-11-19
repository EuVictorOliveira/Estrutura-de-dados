#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, limite = 1000;
  

    for(a = 1; a <= limite; a++){
        for(b = a + 1; b <= limite; b++){ // b = a + 1 evita reduncancia do tipo [a, b, c] [b, a, c]
            double cQuadrado = a * a + b * b;
            c = (int)sqrt(cQuadrado);

            if(c * c == (int)cQuadrado && a + b + c == limite)
            printf("Termo pitagorico: [%d,%d,%d]\n", a, b, c);

        }


    }


    return 0;

}