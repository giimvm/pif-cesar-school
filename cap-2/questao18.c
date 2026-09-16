#include <stdio.h>

int main() {
    const double PI = 3.141593;
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    area = 4 * PI * raio * raio;
    volume = (4.0 / 3.0) * PI * raio * raio * raio;

    printf("Area da superficie: %.2lf\n", area);
    printf("Volume da esfera: %.2lf\n", volume);

    return 0;
}