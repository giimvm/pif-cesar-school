#include <stdio.h>

int main() {
    int senhaSecreta = 2026;
    int senha;
    int tentativa;

    for (tentativa = 1; tentativa <= 3; tentativa++) {

        printf("Tentativa %d de 3\n", tentativa);
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senhaSecreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }

        printf("Senha incorreta!\n\n");
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}