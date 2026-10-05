#include <stdio.h>

int main() {
    int N;
    long long int fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Erro: nao existe fatorial de numero negativo.\n");
    } else {
        for (int i = N; i >= 1; i--) {
            fatorial *= i;
        }

        printf("%d! = %lld\n", N, fatorial);
    }

    return 0;
}