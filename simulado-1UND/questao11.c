#include <stdio.h>

int main() {
    int dias;
    double salarioBruto, gratificacao, imposto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 45.0;

    gratificacao = salarioBruto * 0.05;

    imposto = salarioBruto * 0.08;

    salarioLiquido = salarioBruto + gratificacao - imposto;

    printf("\n=== HOLERITE ===\n");
    printf("Dias trabalhados: %d\n", dias);
    printf("Salario bruto: R$ %.2lf\n", salarioBruto);
    printf("Gratificacao (5%%): R$ %.2lf\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2lf\n", imposto);
    printf("Salario liquido: R$ %.2lf\n", salarioLiquido);

    return 0;
}