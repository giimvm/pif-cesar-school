#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioLiquido;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioLiquido = salarioBase + gratificacao - imposto;

    printf("Salario-base: R$ %.2f\n", salarioBase);
    printf("Gratificacao (5%%): R$ %.2f\n", gratificacao);
    printf("Imposto (7%%): R$ %.2f\n", imposto);
    printf("Salario liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}

/*
gratificacao = salarioBase * 0.05; - O operador de multiplicação (*) é utilizado para calcular os percentuais, Calcula 5% do salário-base.
imposto = salarioBase * 0.07; - Calcula 7% do salário-base.
salarioLiquido = salarioBase + gratificacao - imposto; - Calcula o salário líquido somando o salário-base com a gratificação e subtraindo o imposto.
*/