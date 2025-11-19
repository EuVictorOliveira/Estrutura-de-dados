#include <stdio.h>

void ImprimirData(int dia, int mes, int ano){
    char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    printf("%d de %s de %d\n", dia, meses[mes], ano);


}

int main(void){
    int dia, mes, ano;

    printf("Digite a data(dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);


    ImprimirData(dia, mes, ano);

    return 0;

}