#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char letraSecreta, tentativa;
    int tentativas = 0;

    srand(time(NULL));

    letraSecreta = rand() % 26 + 'a';

    printf("=== Jogo de Adivinhacao ===\n");

    do {
        printf("Digite uma letra minuscula (a-z): ");
        scanf(" %c", &tentativa);

        tentativas++;

        if (tentativa < letraSecreta) {
            printf("A letra secreta vem depois de '%c'.\n", tentativa);
        } else if (tentativa > letraSecreta) {
            printf("A letra secreta vem antes de '%c'.\n", tentativa);
        }

    } while (tentativa != letraSecreta);

    printf("\nParabens! Voce acertou a letra '%c'.\n", letraSecreta);
    printf("Total de tentativas: %d\n", tentativas);

    return 0;
}