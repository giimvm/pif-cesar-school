#include <stdio.h>

int main() {
    int numero, invertido = 0;
    int digito;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: informe um numero positivo.\n");
    } else {
        while (numero > 0) {
            digito = numero % 10;
            invertido = invertido * 10 + digito;
            numero = numero / 10;
        }

        printf("Numero invertido: %d\n", invertido);
    }

    return 0;
}