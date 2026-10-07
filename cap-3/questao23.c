#include <stdio.h>

int main() {
    int L, linha, coluna;

    printf("Digite o tamanho do lado do quadrado (3 a 20): ");
    scanf("%d", &L);

    if (L < 3 || L > 20) {
        printf("Erro: o valor deve estar entre 3 e 20.\n");
    } else {
        for (linha = 1; linha <= L; linha++) {

            for (coluna = 1; coluna <= L; coluna++) {

                if (linha == 1 || linha == L ||
                    coluna == 1 || coluna == L) {
                    printf("X");
                } else {
                    printf(" ");
                }
            }

            printf("\n");
        }
    }

    return 0;
}