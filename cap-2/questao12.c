#include <stdio.h>

int main() {
    int num, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    antecessor = num;
    antecessor--;

    sucessor = num;
    sucessor++;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}