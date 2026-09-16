#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    /* Para evitar divisao por zero, deve-se verificar
       se num2 != 0 antes de realizar a divisao. */
    if (num2 != 0) {
        printf("Divisao: %.2f\n", (float) num1 / num2);
    } else {
        printf("Divisao: impossivel (divisao por zero)\n");
    }

    return 0;
}