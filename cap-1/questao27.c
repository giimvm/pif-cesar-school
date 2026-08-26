#include <stdio.h>

int main(void) {

    int segundos, horas, minutos, segundosRestantes;

    printf("Digite o intervalo de tempo em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;

    printf("\nTempo convertido: %d hora(s), %d minuto(s) e %d segundo(s).\n",
           horas, minutos, segundosRestantes);

    return 0;