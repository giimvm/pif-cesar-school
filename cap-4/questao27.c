#include <stdio.h>

int main() {

    int horas;
    float valor = 0;

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    if (horas <= 0) {

        printf("Quantidade de horas invalida.\n");

    } else {

        if (horas <= 2) {

            valor = horas * 2.0;

        } else if (horas <= 4) {

            valor = (2 * 2.0) + ((horas - 2) * 2.5);

        } else {

            valor = (2 * 2.0) + (2 * 2.5) + ((horas - 4) * 3.0);

        }

        printf("Tempo de permanencia: %d horas\n", horas);
        printf("Valor total: R$ %.2f\n", valor);
    }

    return 0;
}