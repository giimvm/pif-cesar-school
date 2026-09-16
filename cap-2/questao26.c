#include <stdio.h>

int main() {
    float comprimento, largura;
    float precoMetro;
    float perimetro, metrosArame, custoTotal;

    printf("Digite o comprimento do terreno (m): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (m): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame (R$): ");
    scanf("%f", &precoMetro);

    perimetro = 2 * (comprimento + largura);

    metrosArame = 3 * perimetro;

    custoTotal = metrosArame * precoMetro;

    printf("\n=== RESULTADOS ===\n");
    printf("Perimetro do terreno: %.2f m\n", perimetro);
    printf("Quantidade de arame necessaria: %.2f m\n", metrosArame);
    printf("Custo total do cercamento: R$ %.2f\n", custoTotal);

    return 0;
}