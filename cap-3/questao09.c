#include <stdio.h>

int main() {
    float valor, soma = 0.0, media;
    int quantidade = 0;

    do {
        printf("Digite um valor positivo (negativo para encerrar): ");
        scanf("%f", &valor);

        if (valor >= 0) {
            soma += valor;
            quantidade++;
        }

    } while (valor >= 0);

    if (quantidade > 0) {
        media = soma / quantidade;

        printf("\nQuantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("\nNenhum valor valido foi informado.\n");
    }

    return 0;
}