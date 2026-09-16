#include <stdio.h>

int main() {
    float horas_normais, horas_extras;

    printf("Digite o total de horas normais trabalhadas no ano: ");
    scanf("%f", &horas_normais);

    printf("Digite o total de horas extras trabalhadas no ano: ");
    scanf("%f", &horas_extras);

    float salario_bruto = (horas_normais * 10.0f) + (horas_extras * 15.0f);
    float excedente = (salario_bruto > 12000.0f) ? (salario_bruto - 12000.0f) : 0.0f;
    float imposto = excedente * 0.10f;

    printf("Salário Bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto Devido: R$ %.2f\n", imposto);
    printf("Salário Líquido: R$ %.2f\n", salario_bruto - imposto);

    return 0;

}