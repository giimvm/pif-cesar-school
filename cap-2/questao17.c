#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio, area, circunferencia;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = PI * raio * raio;
    circunferencia = 2 * PI * raio;

    printf("Area do circulo: %.2lf\n", area);
    printf("Circunferencia: %.2lf\n", circunferencia);

    return 0;
}