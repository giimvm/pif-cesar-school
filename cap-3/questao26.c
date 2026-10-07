#include <stdio.h>

int main() {
    int A, B, i, j;
    int primo;
    long long int somaPrimos = 0;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A >= B || A <= 0 || B <= 0) {
        printf("Erro: informe valores positivos com A < B.\n");
    } else {
        printf("Numeros primos no intervalo [%d, %d\]:\n", A, B);

        for (i = A; i <= B; i++) {
            primo = 1;

            if (i <= 1) {
                primo = 0;
            } else {
                for (j = 2; j < i; j++) {
                    if (i % j == 0) {
                        primo = 0;
                        break;
                    }
                }
            }

            if (primo) {
                printf("%d ", i);
                somaPrimos += i;
            }
        }

        printf("\n\nSoma dos numeros primos = %lld\n", somaPrimos);
    }

    return 0;
}