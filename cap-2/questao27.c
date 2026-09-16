#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dado1, dado2, dado3;

    /* Inicializa a semente dos numeros aleatorios */
    srand(time(NULL));

    /* Gera valores entre 1 e 6 */
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);

    return 0;
}