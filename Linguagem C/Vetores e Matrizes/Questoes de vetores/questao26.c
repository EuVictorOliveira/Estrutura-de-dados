#include <stdio.h>
#include <math.h>

int main(void){
    double vetor[10], media, soma = 0, somatorio = 0, desvioPadrao;


    for(int i = 0; i < 10; i++){

        printf("Informe o valor %d: ", i+1);
        scanf("%lf", &vetor[i]);

        soma += vetor[i];

    }

    media = soma / 10.0 ;

    for(int i = 0; i < 10; i++){
        somatorio += pow(vetor[i] - media, 2);
    }


    desvioPadrao = sqrt((1.0/9) * somatorio);

    printf("Desvio padrao do vetor: %.2lf\n", desvioPadrao);



    return 0;

}