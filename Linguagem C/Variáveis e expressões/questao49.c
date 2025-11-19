#include <stdio.h>

int main(){
    int horaInicio, minutoInicio, segundoInicio, tempoDuracaoSegundos;

    printf("Informe a hora, minuto e segundo de inicio: ");
    scanf("%d:%d:%d", &horaInicio, &minutoInicio, &segundoInicio);
    printf("Informe o tempo de duracao em segundos: ");
    scanf("%d", &tempoDuracaoSegundos);

    int TempoInicialSegundos = horaInicio * 3600 + minutoInicio * 60 + segundoInicio;
    int TempoTotal = TempoInicialSegundos + tempoDuracaoSegundos;

    int horaFinal = TempoTotal / 3600;
    int resto = TempoTotal % 3600;
    int minutoFinal = resto / 60;
    int segundoFinal = resto % 60;

    printf("Hora final: %d:%d:%d\n", horaFinal, minutoFinal, segundoFinal);



    return 0;

}