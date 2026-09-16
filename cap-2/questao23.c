#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    int duracao;
    int totalSegundos;
    int horaFim, minutoFim, segundoFim;

    printf("Hora de inicio: ");
    scanf("%d", &horas);

    printf("Minuto de inicio: ");
    scanf("%d", &minutos);

    printf("Segundo de inicio: ");
    scanf("%d", &segundos);

    printf("Duracao do experimento (em segundos): ");
    scanf("%d", &duracao);

    /* Converte o horario inicial para segundos */
    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    /* Soma a duracao do experimento */
    totalSegundos += duracao;

    /* Obtem o horario final */
    horaFim = (totalSegundos / 3600) % 24;
    minutoFim = (totalSegundos % 3600) / 60;
    segundoFim = totalSegundos % 60;

    printf("Horario de termino: %02d:%02d:%02d\n",
           horaFim, minutoFim, segundoFim);

    return 0;
}