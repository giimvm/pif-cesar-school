#include <stdio.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Caractere: %c\n", c);
    printf("Codigo ASCII: %d\n", c);

    /*
      O numero exibido corresponde ao codigo ASCII do caractere.
      A tabela ASCII associa cada caractere a um valor numerico
      inteiro utilizado pelo computador para representar letras,
      digitos e simbolos.
    */

    return 0;
}