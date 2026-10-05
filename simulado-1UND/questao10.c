#include <stdio.h>

int main() {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;

    minutos = (totalSegundos % 3600) / 60;

    segundos = (totalSegundos % 3600) % 60;

    printf("%d segundos equivalem a:\n", totalSegundos);
    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n",
           horas, minutos, segundos);

    return 0;
}