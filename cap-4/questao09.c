#include <stdio.h>

int main() {

    float av1, av2, av3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &av1);
    printf("Digite a segunda nota: ");
    scanf("%f", &av2);
    printf("Digite a terceira nota: ");
    scanf("%f", &av3);

    media = ((av1 * 2) + (av2 * 3) + (av3 * 5)) / 10;

    if (media <= 2.9) {
        printf("O aluno foi reprovado com média %.2f.\n", media);
    } else if (media >= 3.0 && media <= 4.9) {
        printf("O aluno está em recuperação com média %.2f.\n", media);
    } else {
        printf("O aluno foi aprovado com média %.2f.\n", media);
    }
    return 0;
}