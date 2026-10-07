#include <stdio.h>

int main() {
    int valor;
    int ced100 = 0, ced50 = 0, ced20 = 0;
    int ced10 = 0, ced5 = 0, ced2 = 0;

    printf("Digite o valor do saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Erro: informe um valor positivo.\n");
    } else {

        while (valor >= 100) {
            valor -= 100;
            ced100++;
        }

        while (valor >= 50) {
            valor -= 50;
            ced50++;
        }

        while (valor >= 20) {
            valor -= 20;
            ced20++;
        }

        while (valor >= 10) {
            valor -= 10;
            ced10++;
        }

        while (valor >= 5) {
            valor -= 5;
            ced5++;
        }

        while (valor >= 2) {
            valor -= 2;
            ced2++;
        }

        printf("\nCedulas necessarias:\n");
        printf("R$ 100: %d\n", ced100);
        printf("R$  50: %d\n", ced50);
        printf("R$  20: %d\n", ced20);
        printf("R$  10: %d\n", ced10);
        printf("R$   5: %d\n", ced5);
        printf("R$   2: %d\n", ced2);

        if (valor > 0) {
            printf("\nResto nao atendido: R$ %d\n", valor);
        }
    }

    return 0;
}
