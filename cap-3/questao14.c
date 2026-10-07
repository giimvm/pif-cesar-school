#include <stdio.h>

int main() {
    int i;
    long long int quadrado;
    long long int somaQuadrados = 0;

    for (i = 1; i <= 100; i++) {
        quadrado = (long long int)i * i;

        printf("%d -> %lld\n", i, quadrado);

        somaQuadrados += quadrado;
    }

    printf("\nSoma total dos quadrados = %lld\n", somaQuadrados);

    return 0;
}