#include <stdio.h>

int main() {
    int N, linha, coluna;

    printf("Digite uma dimensao impar entre 3 e 19: ");
    scanf("%d", &N);

    if (N < 3 || N > 19 || N % 2 == 0) {
        printf("Erro: informe um numero impar entre 3 e 19.\n");
    } else {
        for (linha = 0; linha < N; linha++) {

            for (coluna = 0; coluna < N; coluna++) {

                if (coluna == linha || coluna == N - 1 - linha) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}