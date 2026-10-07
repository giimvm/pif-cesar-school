#include <stdio.h>

int main() {
    int num, i;
    int encontrou = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum numero do intervalo satisfaz a condicao.");
    }

    return 0;
}