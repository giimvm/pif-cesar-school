#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada, alturaDesejadaCm;
    int quantidadeDegraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &alturaDegrau);

    printf("Digite a altura que deseja alcancar (em m): ");
    scanf("%f", &alturaDesejada);

    /* Converte metros para centimetros */
    alturaDesejadaCm = alturaDesejada * 100;

    quantidadeDegraus = alturaDesejadaCm / alturaDegrau;

    printf("Quantidade de degraus a subir: %d\n", quantidadeDegraus);

    return 0;
}