#include <stdio.h>

int main() {

    int valorCompra, valorPago, troco;
    int ced100, ced50, ced20, ced10, ced5, ced2;

    printf("Digite o valor da compra: ");
    scanf("%d", &valorCompra);

    printf("Digite o valor pago pelo cliente: ");
    scanf("%d", &valorPago);

    if (valorPago < valorCompra) {

        printf("Erro: valor pago insuficiente.\n");

    } else {

        troco = valorPago - valorCompra;

        ced100 = troco / 100;
        troco %= 100;

        ced50 = troco / 50;
        troco %= 50;

        ced20 = troco / 20;
        troco %= 20;

        ced10 = troco / 10;
        troco %= 10;

        ced5 = troco / 5;
        troco %= 5;

        ced2 = troco / 2;
        troco %= 2;

        printf("Troco: R$ %d\n", valorPago - valorCompra);
        printf("Cedulas de R$100: %d\n", ced100);
        printf("Cedulas de R$50: %d\n", ced50);
        printf("Cedulas de R$20: %d\n", ced20);
        printf("Cedulas de R$10: %d\n", ced10);
        printf("Cedulas de R$5: %d\n", ced5);
        printf("Cedulas de R$2: %d\n", ced2);

        if (troco > 0) {
            printf("Resto nao representado pelas cedulas: R$ %d\n", troco);
        }
    }

    return 0;
}