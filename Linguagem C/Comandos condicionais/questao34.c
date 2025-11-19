#include <stdio.h>


int main(){
    double nota;
    int nFaltas;

    printf("Informe a nota do aluno: ");
    scanf("%lf", &nota);

    printf("Informe o numero de faltas do aluno: ");
    scanf("%d", &nFaltas);


    if(nota >= 9.0 && nota <= 10.0){

            if(nFaltas <= 20)
                printf("Conceito A");
            else
                printf("Conceito B");

    }

    if(nota >= 7.5 && nota <= 8.9){

        if(nFaltas <= 20)
                printf("Conceito B");
            else
                printf("Conceito C");


    }

    if(nota >= 5.0 && nota <= 7.4){

        if(nFaltas <= 20)
                printf("Conceito C");
            else
                printf("Conceito D");


    }

    if(nota >= 4.0 && nota <= 4.9){

        if(nFaltas <= 20)
                printf("Conceito D");
            else
                printf("Conceito E");


    }

    if(nota >= 0.0 && nota <= 3.9)
        printf("Conceito E");


    return 0;

}