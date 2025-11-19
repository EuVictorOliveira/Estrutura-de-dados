/* Código referente ao exercício 01 da lista de alocação dinâmica(10) 
   Dia 12-07-2025

    Enunciado: Escreva um trecho de codigo para fazer a criacao dos novos tipos de dados conforme solicitado abaixo:

                    • Horario: composto de hora, minutos e segundos. 
                    • Data: composto de dia, mes e ano. 
                    • Compromisso: composto de uma data, horario e texto que descreve o compromisso.
     
   Autor: João Victor Oliveira
*/
#include <stdio.h>

// Tipos 
struct horario{
    char hora;
    char minutos;
    char segundos;
};

struct data{
    char dia;
    char mes[15];
    int ano;
};

struct compromisso{
    struct horario h;
    struct data d;
    char texto[200];
};

int main(void){





    return 0;

}
