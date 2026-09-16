#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados do triangulo (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculo do semi-perimetro
    float p = (a + b + c) / 2.0f;

    // Calculo da area usando a Formula de Heron
    float area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Semi-perimetro (p): %.2f\n", p);
    printf("Area do triangulo: %.2f\n", area);

    return 0;

}