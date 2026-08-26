#include <stdio.h>

int main(void) {

    int num1, num2, num3;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    return 0;
}