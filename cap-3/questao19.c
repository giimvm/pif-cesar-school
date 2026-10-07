#include <stdio.h>

int main() {
    int N, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o numero do termo desejado (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: N deve ser maior que zero.\n");
    } else {
        printf("Termos da sequencia de Fibonacci:\n");

        if (N >= 1)
            printf("1 ");

        if (N >= 2)
            printf("1 ");

        for (i = 3; i <= N; i++) {
            proximo = anterior + atual;
            printf("%lld ", proximo);

            anterior = atual;
            atual = proximo;
        }

        printf("\n");

        if (N == 1)
            printf("O %do termo da sequencia e: 1\n", N);
        else
            printf("O %do termo da sequencia e: %lld\n", N, atual);
    }

    return 0;
}