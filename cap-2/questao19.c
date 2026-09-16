#include <stdio.h>

int main() {
    int dias;
    float salarioBruto, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.0;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - imposto;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto de Renda (8%%): R$ %.2f\n", imposto);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}