#include <stdio.h>

int main() {

    float valorProduto, imposto, valorFinal;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Digite o codigo do estado (1-MG, 2-SP, 3-RJ, 4-MS): ");
    scanf("%d", &estado);

    switch (estado) {

        case 1:
            imposto = valorProduto * 0.07;
            break;

        case 2:
            imposto = valorProduto * 0.12;
            break;

        case 3:
            imposto = valorProduto * 0.15;
            break;

        case 4:
            imposto = valorProduto * 0.08;
            break;

        default:
            printf("Erro: codigo de estado invalido.\n");
            return 1;
    }

    valorFinal = valorProduto + imposto;

    printf("Valor do imposto: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", valorFinal);

    return 0;
}