#include <stdio.h>

int main() {
    int num, quadrado;
    float decimaParte;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;
    decimaParte = num / 10.0;

    printf("Quadrado: %d\n", quadrado);
    printf("Decima parte: %.2f\n", decimaParte);

    return 0;
}