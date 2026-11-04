#include <stdio.h>

int main() {

    float Celsius, Fahrenheit, kelvin;
    int opcao;

    printf("=== CONVERSOR DE TEMPERATURA ===\n");
    printf("1 : Celsius para Fahrenheit\n");
    printf("2 : Celsius para Kelvin\n");
    printf("3 : Fahrenheit para Celsius\n");
    printf("4 : Kelvin para Celsius\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &Celsius);
            Fahrenheit = (Celsius * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", Celsius, Fahrenheit);
            break;

        case 2:
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &Celsius);
            kelvin = Celsius + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", Celsius, kelvin);
            break;

        case 3:
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%f", &Fahrenheit);
            Celsius = (Fahrenheit - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", Fahrenheit, Celsius);
            break;

        case 4:
            printf("Digite a temperatura em Kelvin: ");
            scanf("%f", &kelvin);
            Celsius = kelvin - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", kelvin, Celsius);
            break;

        default:
            printf("Opcao invalida.\n");
    }
    return 0;
}