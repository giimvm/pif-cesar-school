#include <stdio.h>

int main() {
    int N, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: informe um numero inteiro positivo.\n");
    } else {
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                divisores++;
            }
        }

        printf("Quantidade de divisores: %d\n", divisores);

        if (N > 1 && divisores == 2) {
            printf("%d e um numero primo.\n", N);
        } else {
            printf("%d nao e um numero primo.\n", N);
        }
    }

    return 0;
}