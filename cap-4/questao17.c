#include <stdio.h>

int main() {

    float valorTotal, valorParcela, comissao;
    int metodoPagamento;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);

    printf("Digite o método de pagamento (1 - à vista, 2 - parcelado): ");
    scanf("%d", &metodoPagamento);

    if (metodoPagamento == 1) {
        valorTotal = valorTotal * 0.9; // Aplica desconto de 10% para pagamento à vista
        comissao = valorTotal * 0.05; // Calcula comissão de 5% para pagamento à vista
        printf("O valor total com desconto será: %.2f\n", valorTotal);
        printf("A comissão para pagamento à vista será: %.2f\n", comissao);

    } else if (metodoPagamento == 2) {
        valorParcela = valorTotal / 3; // Divide o valor total em 3 parcelas
        comissao = valorTotal * 0.05; // Calcula comissão de 5% para pagamento parcelado
        printf("O valor de cada parcela será: %.2f\n", valorParcela);
        printf("A comissão para pagamento parcelado será: %.2f\n", comissao);
        
    } else {
        printf("Opcao de pagamento invalida.\n");
    }

    return 0;
}