#include <stdio.h>

int main() {
    float L, B, H;
    float areaQuadrado, areaRetangulo, areaTriangulo;

    /* Quadrado */
    printf("Digite o lado do quadrado: ");
    scanf("%f", &L);

    areaQuadrado = L * L;

    /* Retangulo */
    printf("Digite a base do retangulo: ");
    scanf("%f", &B);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &H);

    areaRetangulo = B * H;

    /* Triangulo retangulo */
    printf("Digite a base do triangulo retangulo: ");
    scanf("%f", &B);

    printf("Digite a altura do triangulo retangulo: ");
    scanf("%f", &H);

    areaTriangulo = (B * H) / 2.0;

    printf("Area do quadrado: %.2f\n", areaQuadrado);
    printf("Area do retangulo: %.2f\n", areaRetangulo);
    printf("Area do triangulo retangulo: %.2f\n", areaTriangulo);

    return 0;
}