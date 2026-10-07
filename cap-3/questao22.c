#include <stdio.h>

int main() {
    int N, linha, coluna;
    int numero = 1;

    printf("Digite o numero de linhas do Triangulo de Floyd: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Erro: informe um numero inteiro positivo.\n");
    } else {
        for (linha = 1; linha <= N; linha++) {

            for (coluna = 1; coluna <= linha; coluna++) {
                printf("%d ", numero);
                numero++;
            }

            printf("\n");
        }
    }

    return 0;
}