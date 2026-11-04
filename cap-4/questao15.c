#include <stdio.h>

int main() {

    int idade, tempoServico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempoServico);

    if (idade >= 65 ||
        tempoServico >= 30 ||
        (idade >= 60 && tempoServico >= 25))
    {
        printf("Pode se aposentar.\n");
    }
    else
    {
        printf("Nao pode se aposentar.\n");
    }

    return 0;
}