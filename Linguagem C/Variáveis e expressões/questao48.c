#include <stdio.h>

int main(){
    int segundos;

    printf("Informe um tempo em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int resto = segundos % 3600;
    int minutos = resto / 60;
    segundos = resto % 60;

    printf("O valor equivale a %d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);




    return 0;


}