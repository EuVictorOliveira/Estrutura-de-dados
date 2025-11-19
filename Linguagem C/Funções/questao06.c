#include <stdio.h>

int ConveterEmSegundos(int hora, int minutos, int segundos){

    int qtdSegundos = 3600 * hora + 60 * minutos + segundos;

    return qtdSegundos;

}


int main(void){
    int horas, minutos, segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    int tempoEmSegundos = ConveterEmSegundos(horas, minutos, segundos);

    printf("Qtd em segundos: %d", tempoEmSegundos);

    return 0;

}